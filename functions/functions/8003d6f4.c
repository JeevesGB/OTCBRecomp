/* Function: FUN_8003d6f4 */
/* Address: 8003d6f4 */

void FUN_8003d6f4(undefined2 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = (&DAT_800cd6b0)[(short)param_1[0x1c] * 6];
  if (param_1[0x1d] == sVar1) goto LAB_8003d7bc;
  *param_1 = 0xffff;
  if (sVar1 == 0x30) {
LAB_8003d794:
    uVar2 = *(undefined4 *)(param_1 + 0x16);
  }
  else if (sVar1 < 0x31) {
    if (((sVar1 == 0x10) || (sVar1 < 0x11)) || (sVar1 != 0x20)) goto LAB_8003d794;
    uVar2 = *(undefined4 *)(param_1 + 0x1a);
  }
  else {
    if (((sVar1 == 0x50) || (sVar1 < 0x51)) || ((sVar1 == 0x60 || (sVar1 != 0x70))))
    goto LAB_8003d794;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_8003cee4(param_1,uVar2);
  param_1[0x1d] = sVar1;
LAB_8003d7bc:
  FUN_8003d118(param_1);
  if (param_1[0x1e] != 0) {
    FUN_8005d168((int)(short)param_1[0x1c],(int)(short)param_1[0x3d],(int)(short)param_1[0x3e]);
  }
  return;
}


