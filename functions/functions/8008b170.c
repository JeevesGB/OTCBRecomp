/* Function: FUN_8008b170 */
/* Address: 8008b170 */

undefined1 * FUN_8008b170(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_8006741c();
  if (5999999 < param_1) {
    param_1 = 5999999;
  }
  *param_2 = *(undefined1 *)(iVar2 + (param_1 / 600000) % 10 + 8);
  param_2[1] = *(undefined1 *)(iVar2 + param_1 / 60000 + (param_1 / 600000) * -10 + 8);
  param_2[2] = *(undefined1 *)(iVar2 + 0x12);
  param_2[3] = *(undefined1 *)(iVar2 + param_1 / 10000 + (param_1 / 60000) * -6 + 8);
  param_2[4] = *(undefined1 *)(iVar2 + param_1 / 1000 + (param_1 / 10000) * -10 + 8);
  param_2[5] = *(undefined1 *)(iVar2 + 0x12);
  param_2[6] = *(undefined1 *)(iVar2 + param_1 / 100 + (param_1 / 1000) * -10 + 8);
  param_2[7] = *(undefined1 *)(iVar2 + param_1 / 10 + (param_1 / 100) * -10 + 8);
  uVar1 = *(undefined1 *)(iVar2 + param_1 % 10 + 8);
  param_2[9] = 0;
  param_2[8] = uVar1;
  if (param_1 == 0) {
    *param_2 = *(undefined1 *)(iVar2 + 0x13);
    param_2[1] = *(undefined1 *)(iVar2 + 0x13);
    param_2[3] = *(undefined1 *)(iVar2 + 0x13);
    param_2[4] = *(undefined1 *)(iVar2 + 0x13);
    param_2[6] = *(undefined1 *)(iVar2 + 0x13);
    param_2[7] = *(undefined1 *)(iVar2 + 0x13);
    param_2[8] = *(undefined1 *)(iVar2 + 0x13);
  }
  return param_2;
}


