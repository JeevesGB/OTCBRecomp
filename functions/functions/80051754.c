/* Function: InitCarShadow */
/* Address: 80051754 */

void InitCarShadow(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(short *)(param_1 + 0x4a);
  iVar2 = (int)g_CameraAngleX._2_2_ - (int)*(short *)(*(int *)(param_1 + 0x14) + 10);
  if (iVar2 != (short)(&DAT_800cd02c)[iVar1 * 4]) {
    (&DAT_800cd028)[iVar1 * 2] = 1;
    (&DAT_800cd02c)[iVar1 * 4] = ((short)iVar2 + 0x400) * 2;
  }
  return;
}


