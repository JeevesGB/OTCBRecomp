/* Function: CDREAD_OBJ_378 */
/* Address: 800a7f14 */

undefined4 CDREAD_OBJ_378(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  CdlLOC *pCVar3;
  int iVar4;
  uint uVar5;
  u_char local_18 [8];
  
  CdSyncCallback((CdlCB)0x0);
  CdReadyCallback((CdlCB)0x0);
  if ((DAT_800cb540 & 1) != 0) {
    CdDataCallback((func *)0x0);
  }
  uVar1 = CdStatus();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = VSync(-1);
    if ((uVar1 & 0x3f) == 0) {
      puts("CdRead: Shell open...\n");
    }
    CdControlF('\x01',(u_char *)0x0);
    DAT_800cb908 = VSync(-1);
    DAT_800cb900 = 0xffffffff;
    uVar2 = CDREAD_OBJ_548();
    return uVar2;
  }
  if (param_1 != 0) {
    puts("CdRead: retry...\n");
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    pCVar3 = CdLastPos();
    iVar4 = CdControl('\x02',&pCVar3->minute,(u_char *)0x0);
    if (iVar4 == 0) goto CDREAD_OBJ_4B4;
  }
  CdFlush();
  local_18[0] = (u_char)DAT_800cb8f8;
  uVar5 = DAT_800cb8f8 & 0xff;
  uVar1 = CdMode();
  if (((uVar5 == uVar1) && (param_1 == 0)) ||
     (iVar4 = CdControl('\x0e',local_18,(u_char *)0x0), iVar4 != 0)) {
    pCVar3 = CdLastPos();
    DAT_800cb90c = CdPosToInt(pCVar3);
    CdReadyCallback(CDREAD_OBJ_34);
    if ((DAT_800cb540 & 1) != 0) {
      CdDataCallback(CDREAD_OBJ_2A8);
    }
    DAT_800cb8f4 = DAT_800cb8f0;
    CdControlF('\x06',(u_char *)0x0);
    DAT_800cb900 = DAT_800cb8ec;
    DAT_800cb904 = VSync(-1);
    return DAT_800cb900;
  }
CDREAD_OBJ_4B4:
  DAT_800cb900 = 0xffffffff;
  uVar2 = CDREAD_OBJ_548();
  return uVar2;
}


