/* Function: FUN_80049e4c */
/* Address: 80049e4c */

int FUN_80049e4c(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0x14000 < param_1) {
    param_1 = 0x14000;
  }
  piVar4 = &DAT_800aec2c;
  do {
    if (param_1 < *piVar4) break;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 9);
  if (iVar3 != 0) {
    iVar2 = (int)(param_2 + iVar3)[-1];
    iVar1 = (param_2[iVar3] * 0x1be + iVar2 * -0x1be) * (param_1 - (&DAT_800aec2c)[iVar3 + -1]);
    iVar3 = (&DAT_800aec2c)[iVar3] - (&DAT_800aec2c)[iVar3 + -1];
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
      trap(0x1800);
    }
    return iVar2 * 0x1be + iVar1 / iVar3;
  }
  iVar3 = *param_2 * param_1 * 0x1be;
  if (DAT_800aec2c == 0) {
    trap(0x1c00);
  }
  if ((DAT_800aec2c == -1) && (iVar3 == -0x80000000)) {
    trap(0x1800);
  }
  return iVar3 / DAT_800aec2c;
}


