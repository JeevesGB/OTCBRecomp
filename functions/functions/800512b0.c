/* Function: UpdateCarLapData */
/* Address: 800512b0 */

void UpdateCarLapData(int param_1)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x210) < 0x15) || (*(short *)(param_1 + 0x1fc) == 1)) {
    iVar1 = -5000;
  }
  else {
    iVar1 = DAT_800af068 * *(short *)(param_1 + 0x210) >> 8;
  }
  iVar1 = iVar1 - DAT_800cd024;
  if (iVar1 < 0) {
    DAT_800cd020 = iVar1 >> 3;
  }
  else {
    DAT_800cd020 = iVar1 >> 5;
  }
  if (DAT_800cd020 < 0x321) {
    iVar1 = -800;
    if (-0x321 < DAT_800cd020) goto LAB_8005133c;
  }
  else {
    iVar1 = 800;
  }
  DAT_800cd020 = iVar1;
LAB_8005133c:
  DAT_800cd024 = DAT_800cd024 + DAT_800cd020;
  return;
}


