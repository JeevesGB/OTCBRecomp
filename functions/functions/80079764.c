/* Function: FUN_80079764 */
/* Address: 80079764 */

undefined1 * FUN_80079764(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = GetGhostCarData();
  if (5999999 < param_1) {
    param_1 = 5999999;
  }
  *param_2 = *(undefined1 *)(iVar2 + (param_1 / 600000) % 10 + 0x2f);
  param_2[1] = *(undefined1 *)(iVar2 + param_1 / 60000 + (param_1 / 600000) * -10 + 0x2f);
  param_2[2] = *(undefined1 *)(iVar2 + 0x39);
  param_2[3] = *(undefined1 *)(iVar2 + param_1 / 10000 + (param_1 / 60000) * -6 + 0x2f);
  param_2[4] = *(undefined1 *)(iVar2 + param_1 / 1000 + (param_1 / 10000) * -10 + 0x2f);
  param_2[5] = *(undefined1 *)(iVar2 + 0x39);
  param_2[6] = *(undefined1 *)(iVar2 + param_1 / 100 + (param_1 / 1000) * -10 + 0x2f);
  param_2[7] = *(undefined1 *)(iVar2 + param_1 / 10 + (param_1 / 100) * -10 + 0x2f);
  uVar1 = *(undefined1 *)(iVar2 + param_1 % 10 + 0x2f);
  param_2[9] = 0;
  param_2[8] = uVar1;
  if (param_1 == 0) {
    *param_2 = *(undefined1 *)(iVar2 + 0x3a);
    param_2[1] = *(undefined1 *)(iVar2 + 0x3a);
    param_2[3] = *(undefined1 *)(iVar2 + 0x3a);
    param_2[4] = *(undefined1 *)(iVar2 + 0x3a);
    param_2[6] = *(undefined1 *)(iVar2 + 0x3a);
    param_2[7] = *(undefined1 *)(iVar2 + 0x3a);
    param_2[8] = *(undefined1 *)(iVar2 + 0x3a);
  }
  return param_2;
}


