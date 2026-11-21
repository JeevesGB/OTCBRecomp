/* Function: _padRecvAtLoadInfo */
/* Address: 800aa8cc */

undefined4 _padRecvAtLoadInfo(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    iVar6 = *(int *)(param_1 + 0x3c);
    if ((*(char *)(iVar6 + 2) == '\0') && (*(char *)(iVar6 + 3) == '\0')) {
      sVar5 = (ushort)*(byte *)(iVar6 + 5) + (ushort)*(byte *)(iVar6 + 4) * 0x100;
      *(short *)(param_1 + 0xe6) = sVar5;
      if (*(short *)(param_1 + 0xee) == sVar5) {
        *(undefined2 *)(param_1 + 0xee) = 0xffff;
        *(undefined1 *)(param_1 + 0xeb) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        uVar4 = PADCMD_OBJ_2FC();
        return uVar4;
      }
      *(short *)(param_1 + 0xee) = sVar5;
    }
  }
  else if (bVar1 < 4) {
    if (bVar1 != 2) {
      uVar4 = PADCMD_OBJ_300();
      return uVar4;
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar6 + 7) == '\0') {
      if ((((*(char *)(param_1 + 0xe3) == *(char *)(iVar6 + 3)) &&
           (*(char *)(param_1 + 0xe4) == *(char *)(iVar6 + 4))) &&
          (*(char *)(param_1 + 0xe9) == *(char *)(iVar6 + 5))) &&
         (*(char *)(param_1 + 0xea) == *(char *)(iVar6 + 6))) {
        *(undefined2 *)(param_1 + 0xee) = 0;
        uVar4 = PADCMD_OBJ_160();
        return uVar4;
      }
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
      *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 3);
      uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 4);
      *(undefined2 *)(param_1 + 0xe6) = 0;
      *(undefined1 *)(param_1 + 0xe4) = uVar2;
      *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 5);
      uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 6);
      *(undefined2 *)(param_1 + 0xec) = 0;
      *(undefined1 *)(param_1 + 0xea) = uVar2;
      if (*(short *)(param_1 + 0xee) == 0) {
        *(undefined1 *)(param_1 + 0xeb) = 0;
        uVar4 = PADCMD_OBJ_2FC();
        return uVar4;
      }
    }
  }
  else {
    if (bVar1 != 4) {
      uVar4 = PADCMD_OBJ_300();
      return uVar4;
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    if ((*(char *)(iVar6 + 2) == '\0') && (*(char *)(iVar6 + 3) == '\0')) {
      bVar1 = *(byte *)(iVar6 + 4);
      bVar3 = *(char *)(param_1 + 0x47) + 1;
      *(byte *)(param_1 + 0x47) = bVar3;
      *(ushort *)(param_1 + 0xec) = *(short *)(param_1 + 0xec) + 8 + (bVar1 + 3 & 0x1fc);
      if (*(byte *)(param_1 + 0xea) <= bVar3) {
        iVar6 = _padGetActSize(param_1);
        if (0x80 < iVar6) {
          (*DAT_800cba08)(param_1);
          *(undefined1 *)(param_1 + 0x46) = 0xfe;
          *(undefined1 *)(param_1 + 0x49) = 2;
          uVar4 = PADCMD_OBJ_1F8();
          return uVar4;
        }
        if (*(short *)(param_1 + 0xee) == *(short *)(param_1 + 0xec)) {
          *(undefined2 *)(param_1 + 0xee) = 0;
          *(undefined1 *)(param_1 + 0xeb) = 0;
          *(undefined1 *)(param_1 + 0x46) = 0xff;
          _padLoadActInfo(param_1,param_1 + 99);
          *(undefined1 *)(param_1 + 0x46) = 2;
          uVar4 = PADCMD_OBJ_1F8();
          return uVar4;
        }
        *(short *)(param_1 + 0xee) = *(short *)(param_1 + 0xec);
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined2 *)(param_1 + 0xec) = 0;
        uVar4 = PADCMD_OBJ_300();
        return uVar4;
      }
    }
  }
  return 0;
}


