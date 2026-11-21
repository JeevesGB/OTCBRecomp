/* Function: FUN_8003e740 */
/* Address: 8003e740 */

int FUN_8003e740(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint local_38 [4];
  short local_28;
  short local_26;
  ushort local_24;
  ushort local_22;
  uchar *local_20;
  
  GetCarTextureData(param_2,local_38);
  iVar1 = 0;
  if ((local_38[0] & 8) != 0) {
    memcpy((uchar *)((local_26 - param_4) * 0x20 + (local_28 - param_3) * 2 + param_1),local_20,
           (uint)local_24 * (uint)local_22 * 2);
    iVar1 = (local_26 - param_4) + (uint)local_22;
  }
  return iVar1;
}


