/* Function: SsIsEos */
/* Address: 8008f66c */

short SsIsEos(short param_1,short param_2)

{
  return (short)*(byte *)(*(int *)((int)&DAT_800cdee8 +
                                  ((int)((uint)(ushort)param_1 << 0x10) >> 0xe)) + param_2 * 0xb0 +
                         0x14);
}


