/* Function: FUN_80063e18 */
/* Address: 80063e18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80063e18(int param_1)

{
  if ((*(short *)(param_1 + 0x34) != 0) && (*(short *)(param_1 + 0x38) != _DAT_800cd598)) {
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x36);
  }
  (*(code *)(&PTR_LAB_800b5d4c)[*(short *)(param_1 + 0x34)])();
  return;
}


