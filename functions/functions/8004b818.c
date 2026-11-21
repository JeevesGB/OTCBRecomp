/* Function: FUN_8004b818 */
/* Address: 8004b818 */

void FUN_8004b818(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if (*(short *)(param_1 + 0x360) < 4) {
    return;
  }
  if (0x3b40 < iVar2) {
    return;
  }
  if (600 < *(short *)(param_1 + 0x35c)) {
    return;
  }
  if (*(short *)(param_1 + 0x178) != 0) {
    DAT_1f80006c = 0;
    DAT_1f800074 = 0;
    return;
  }
  if ((*(short *)(param_1 + 0x238) < 1) && (*(short *)(param_1 + 0x23e) == 0)) {
    if (*(short *)(param_1 + 0x238) == 0) {
      sVar1 = *(short *)(param_1 + 0x210);
      if (sVar1 != 0) goto LAB_8004b8fc;
      goto LAB_8004b8a8;
    }
  }
  else {
LAB_8004b8a8:
    if (iVar2 < 2000) {
      DAT_1f800074 = 0;
      DAT_1f80006c = 0;
    }
    else if (iVar2 < 0x1da0) {
      DAT_1f80006c = DAT_1f80006c - (DAT_1f80006c >> 2);
      DAT_1f800074 = DAT_1f800074 - (DAT_1f800074 >> 2);
    }
  }
  sVar1 = *(short *)(param_1 + 0x210);
LAB_8004b8fc:
  if (sVar1 < 0xb) {
    if (*(short *)(param_1 + 0x35e) < 600) {
      if (iVar2 < 1000) {
        DAT_1f800074 = 0;
        DAT_1f80006c = 0;
        return;
      }
      DAT_1f80006c = DAT_1f80006c - (DAT_1f80006c >> 1);
      DAT_1f800074 = DAT_1f800074 - (DAT_1f800074 >> 3);
    }
  }
  else {
    iVar2 = DAT_1f80006c;
    if (DAT_1f80006c < 0) {
      iVar2 = -DAT_1f80006c;
    }
    if (iVar2 < 0x3c) {
      DAT_1f80006c = 0;
      return;
    }
    if (iVar2 < 800) {
      DAT_1f80006c = DAT_1f80006c - (DAT_1f80006c >> 2);
      return;
    }
  }
  return;
}


