/* Function: FUN_8003e7ec */
/* Address: 8003e7ec */

int FUN_8003e7ec(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_48 [4];
  short local_38;
  short local_36;
  ushort local_34;
  ushort local_32;
  uchar *local_30;
  
  iVar4 = 0;
  iVar5 = *param_2;
  iVar3 = 1;
  piVar1 = param_2;
  if (0 < iVar5) {
    do {
      GetCarTextureData((int)param_2 + piVar1[1],local_48);
      if ((local_48[0] & 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)local_36;
        memcpy((uchar *)((iVar2 - param_4) * 0x20 + (local_38 - param_3) * 2 + param_1),local_30,
               (uint)local_34 * (uint)local_32 * 2);
        iVar2 = (iVar2 - param_4) + (uint)local_32;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 <= iVar5);
  }
  return iVar4;
}


