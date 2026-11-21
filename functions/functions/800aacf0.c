/* Function: PADCMD_OBJ_4C4 */
/* Address: 800aacf0 */

undefined4 PADCMD_OBJ_4C4(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  
  bVar4 = *(byte *)((int)param_1 + 0x46);
  if (bVar4 == 3) {
    iVar7 = param_1[0xf];
    if ((*(char *)(iVar7 + 2) == '\0') && (*(char *)(iVar7 + 3) == '\0')) {
      pcVar8 = (char *)(param_1[1] + (uint)*(byte *)((int)param_1 + 0x47) * 5);
      if (((*pcVar8 == *(char *)(iVar7 + 4)) &&
          (((pcVar8[1] == (*(byte *)(iVar7 + 5) & 0x7f) && (pcVar8[2] == *(char *)(iVar7 + 6))) &&
           (pcVar8[3] == *(char *)(iVar7 + 7))))) &&
         ((uint)(byte)pcVar8[4] == (int)(uint)*(byte *)(iVar7 + 5) >> 7)) {
        *(undefined2 *)((int)param_1 + 0xee) = 0;
        uVar5 = PADCMD_OBJ_65C();
        return uVar5;
      }
      *(undefined2 *)((int)param_1 + 0xee) = 0xffff;
      *pcVar8 = *(char *)(param_1[0xf] + 4);
      pcVar8[1] = *(byte *)(param_1[0xf] + 5) & 0x7f;
      pcVar8[2] = *(char *)(param_1[0xf] + 6);
      pcVar8[3] = *(char *)(param_1[0xf] + 7);
      pcVar8[4] = (char)((int)(uint)*(byte *)(param_1[0xf] + 5) >> 7);
      if (*(short *)((int)param_1 + 0xee) == 0) {
        *(undefined1 *)((int)param_1 + 0xeb) = 0;
        bVar4 = *(char *)((int)param_1 + 0x47) + 1;
        *(byte *)((int)param_1 + 0x47) = bVar4;
        if (*(byte *)((int)param_1 + 0xe9) <= bVar4) {
          *(undefined1 *)((int)param_1 + 0x47) = 0;
          *(undefined1 *)(param_1 + 0x12) = 0;
          uVar5 = PADCMD_OBJ_8B0();
          return uVar5;
        }
      }
    }
  }
  else if (bVar4 < 4) {
    if (bVar4 != 2) {
      uVar5 = PADCMD_OBJ_8B4();
      return uVar5;
    }
    iVar7 = param_1[0xf];
    if ((*(char *)(iVar7 + 2) == '\0') && (*(char *)(iVar7 + 3) == '\0')) {
      *(ushort *)((uint)*(byte *)((int)param_1 + 0x47) * 2 + *param_1) =
           (ushort)*(byte *)(iVar7 + 5) + (ushort)*(byte *)(iVar7 + 4) * 0x100;
      sVar3 = *(short *)((uint)*(byte *)((int)param_1 + 0x47) * 2 + *param_1);
      if (*(short *)((int)param_1 + 0xee) == sVar3) {
        *(undefined2 *)((int)param_1 + 0xee) = 0;
        *(undefined1 *)((int)param_1 + 0xeb) = 0;
        bVar4 = *(char *)((int)param_1 + 0x47) + 1;
        *(byte *)((int)param_1 + 0x47) = bVar4;
        if (*(byte *)((int)param_1 + 0xe3) <= bVar4) {
          *(undefined1 *)((int)param_1 + 0x47) = 0;
          uVar5 = PADCMD_OBJ_8B0();
          return uVar5;
        }
      }
      else {
        *(short *)((int)param_1 + 0xee) = sVar3;
      }
    }
  }
  else {
    if (bVar4 != 4) {
      uVar5 = PADCMD_OBJ_8B4();
      return uVar5;
    }
    iVar7 = param_1[0xf];
    if (*(char *)(iVar7 + 2) != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
      uVar5 = PADCMD_OBJ_578();
      return uVar5;
    }
    puVar9 = (undefined1 *)(param_1[2] + (uint)*(byte *)((int)param_1 + 0x47) * 8);
    if ((char)param_1[0x12] == '\0') {
      uVar1 = *(undefined1 *)(iVar7 + 4);
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      *puVar9 = uVar1;
      iVar6 = param_1[0xf];
      if (*(char *)((int)param_1 + 0x47) != '\0') {
        DAT_800d1078 = (char *)(*(int *)(puVar9 + -4) + ((byte)puVar9[-8] + 3 & 0x1fc));
        *(char **)(puVar9 + 4) = DAT_800d1078;
        uVar5 = PADCMD_OBJ_7A8(iVar6 + 5,param_1,iVar7,2);
        return uVar5;
      }
      uVar5 = PADCMD_OBJ_784();
      return uVar5;
    }
    pcVar8 = (char *)(iVar7 + 3);
    iVar7 = 4;
    do {
      if ((char)param_1[0x12] == '\0') goto PADCMD_OBJ_844;
      if ((char *)((int)param_1 + 0xe3) <= DAT_800d1078) {
        *(undefined1 *)((int)param_1 + 0x47) = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
        uVar5 = PADCMD_OBJ_8B4();
        return uVar5;
      }
      if (*DAT_800d1078 != *pcVar8) {
        *(undefined2 *)((int)param_1 + 0xee) = 0xffff;
      }
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *DAT_800d1078 = cVar2;
      DAT_800d1078 = DAT_800d1078 + 1;
      iVar7 = iVar7 + -1;
      *(char *)(param_1 + 0x12) = (char)param_1[0x12] + -1;
    } while (iVar7 != -1);
    if ((char)param_1[0x12] == '\0') {
PADCMD_OBJ_844:
      if (*(short *)((int)param_1 + 0xee) != 0) {
        *(undefined2 *)((int)param_1 + 0xee) = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
        uVar5 = PADCMD_OBJ_8B4();
        return uVar5;
      }
      bVar4 = *(char *)((int)param_1 + 0x47) + 1;
      *(byte *)((int)param_1 + 0x47) = bVar4;
      if (bVar4 < *(byte *)((int)param_1 + 0xea)) {
        *(undefined1 *)(param_1 + 0x12) = 0;
        *(undefined1 *)((int)param_1 + 0xeb) = 0;
        uVar5 = PADCMD_OBJ_8B4();
        return uVar5;
      }
      *(undefined1 *)((int)param_1 + 0x49) = 6;
      *(undefined1 *)((int)param_1 + 0x46) = 0xfe;
      *(undefined1 *)((int)param_1 + 0xeb) = 0;
      uVar5 = PADCMD_OBJ_8B4();
      return uVar5;
    }
  }
  return 0;
}


