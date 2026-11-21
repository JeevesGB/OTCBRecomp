/* Function: FUN_8003c790 */
/* Address: 8003c790 */

void FUN_8003c790(int param_1)

{
  if (((*(int *)(param_1 + 0x18c) >> 0xc) -
       (int)*(short *)(((int)((uint)*(ushort *)(param_1 + 0x15c) << 0x10) >> 0x14) * 2 +
                      DAT_800cca18) & 0xfffU) < 0x801) {
    *(undefined2 *)(param_1 + 0x15a) = 0xffff;
    return;
  }
  *(undefined2 *)(param_1 + 0x15a) = 0;
  return;
}


