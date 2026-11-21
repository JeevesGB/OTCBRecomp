/* Function: CDREAD_OBJ_34 */
/* Address: 800a7bd0 */

void CDREAD_OBJ_34(char param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  CdlLOC aCStack_20 [4];
  
  DAT_800cb920 = param_2;
  if (param_1 == '\x01') {
    if (0 < DAT_800cb900) {
      if (DAT_800cb8fc == 0x200) {
        if ((DAT_800cb540 & 1) != 0) {
          CdDataCallback((func *)0x0);
          CdGetSector2(aCStack_20,3);
          CdDataSync(0);
          CdDataCallback(CDREAD_OBJ_2A8);
          CDREAD_OBJ_D4();
          return;
        }
        CdGetSector(aCStack_20,3);
        iVar1 = CdPosToInt(aCStack_20);
        if (iVar1 != DAT_800cb90c) {
          puts("CdRead: sector error\n");
          DAT_800cb900 = -1;
        }
      }
      if ((DAT_800cb540 & 1) != 0) {
        CdGetSector2(DAT_800cb8f4,DAT_800cb8fc);
        CDREAD_OBJ_19C();
        return;
      }
      CdGetSector(DAT_800cb8f4,DAT_800cb8fc);
      DAT_800cb8f4 = (void *)((int)DAT_800cb8f4 + DAT_800cb8fc * 4);
      DAT_800cb900 = DAT_800cb900 + -1;
      DAT_800cb90c = DAT_800cb90c + 1;
      CDREAD_OBJ_19C();
      return;
    }
  }
  else {
    DAT_800cb900 = -1;
  }
  DAT_800cb904 = VSync(-1);
  if (DAT_800cb900 < 0) {
    CDREAD_OBJ_378(1);
  }
  iVar1 = VSync(-1);
  if (DAT_800cb908 + 0x4b0 < iVar1) {
    DAT_800cb900 = -1;
  }
  if ((DAT_800cb900 == 0) || (iVar1 = VSync(-1), DAT_800cb908 + 0x4b0 < iVar1)) {
    CdReadyCallback(DAT_800cb918);
    if ((DAT_800cb540 & 1) != 0) {
      CdDataCallback(DAT_800cb91c);
    }
    CdSyncCallback(CDREAD_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_800cb910 = 1;
    if (DAT_800cb53c != (code *)0x0) {
      uVar2 = 5;
      if (DAT_800cb900 == 0) {
        uVar2 = 2;
      }
      (*DAT_800cb53c)(uVar2,param_2);
    }
  }
  return;
}


