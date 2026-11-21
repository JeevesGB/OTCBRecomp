/* Function: FUN_8003cd80 */
/* Address: 8003cd80 */

void FUN_8003cd80(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(short *)(param_1 + 2) == 0) {
    uVar6 = *(uint *)(param_1 + 0x18);
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x14);
    iVar9 = *(int *)(param_1 + 0x28);
    if (0 < iVar1) {
      uVar4 = uVar6 & 7;
      uVar3 = iVar1 << 3;
      if (iVar1 < 0x2000) {
        iVar7 = 8;
        if (iVar1 < 0x20) {
          uVar3 = uVar3 | 5;
        }
        else {
          uVar3 = uVar3 | 6;
          iVar7 = 0x10;
        }
      }
      else {
        uVar3 = uVar3 | 7;
        iVar7 = 0x18;
      }
      pbVar5 = (byte *)(iVar9 + ((int)uVar6 >> 3));
      uVar2 = iVar7 + uVar4;
      iVar1 = uVar3 << uVar4;
      *pbVar5 = *pbVar5 & (byte)(0xff >> (8 - uVar4 & 0x1f)) | (byte)iVar1;
      if (8 < uVar2) {
        pbVar5[1] = (byte)((uint)iVar1 >> 8);
      }
      if (0x10 < uVar2) {
        pbVar5[2] = (byte)((uint)iVar1 >> 0x10);
      }
      if (0x18 < uVar2) {
        pbVar5[3] = (byte)((uint)iVar1 >> 0x18);
      }
      uVar6 = uVar6 + iVar7;
      iVar8 = iVar8 + iVar7;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    uVar3 = uVar6 & 7;
    iVar1 = param_3 + uVar3;
    pbVar5 = (byte *)(iVar9 + ((int)uVar6 >> 3));
    param_2 = param_2 << uVar3;
    *pbVar5 = *pbVar5 & (byte)(0xff >> (8 - uVar3 & 0x1f)) | (byte)param_2;
    if (8 < iVar1) {
      pbVar5[1] = (byte)((uint)param_2 >> 8);
    }
    if (0x10 < iVar1) {
      pbVar5[2] = (byte)((uint)param_2 >> 0x10);
    }
    if (0x18 < iVar1) {
      pbVar5[3] = (byte)((uint)param_2 >> 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar6 + param_3;
    *(int *)(param_1 + 0x1c) = iVar8 + param_3;
    if (*(int *)(param_1 + 0x20) < iVar8 + param_3) {
      *(undefined2 *)(param_1 + 2) = 0xffff;
    }
  }
  return;
}


