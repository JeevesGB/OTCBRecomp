/* Function: FUN_8003ec94 */
/* Address: 8003ec94 */

void FUN_8003ec94(int param_1,undefined4 param_2,int param_3,short param_4,short param_5,
                 short param_6)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != 0) {
    iVar6 = 0;
    iVar5 = param_1;
    do {
      psVar3 = (short *)(param_1 + *(int *)(iVar5 + 4));
      iVar4 = (int)*psVar3;
      psVar3 = psVar3 + 1;
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        iVar2 = FUN_8003eb50((int)*psVar3,param_2,0);
        if (iVar2 == 4) {
          uVar1 = psVar3[1];
          psVar3[1] = (((short)uVar1 >> 6) + param_4) * 0x40 +
                      (short)((int)(((int)((uint)uVar1 << 0x10) >> 0xc & 0x3ffU) + param_3) >> 4);
        }
        psVar3 = psVar3 + 2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 4);
    iVar6 = 0;
    iVar5 = param_1;
    do {
      psVar3 = (short *)(param_1 + *(int *)(iVar5 + 4));
      iVar4 = (int)*psVar3;
      psVar3 = psVar3 + 1;
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        iVar2 = FUN_8003eb50((int)*psVar3,param_2,6);
        if (iVar2 == 4) {
          uVar1 = psVar3[1];
          psVar3[1] = (((short)uVar1 >> 6) + param_4) * 0x40 +
                      (short)((int)(((int)((uint)uVar1 << 0x10) >> 0xc & 0x3ffU) + param_3) >> 4);
        }
        psVar3 = psVar3 + 2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 4);
    iVar6 = 0;
    iVar5 = param_1;
    do {
      psVar3 = (short *)(param_1 + *(int *)(iVar5 + 4));
      iVar4 = (int)*psVar3;
      psVar3 = psVar3 + 1;
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        iVar2 = FUN_8003eb50((int)*psVar3,param_2,7);
        if (iVar2 == 4) {
          uVar1 = psVar3[1];
          psVar3[1] = (((short)uVar1 >> 6) + param_4) * 0x40 +
                      (short)((int)(((int)((uint)uVar1 << 0x10) >> 0xc & 0x3ffU) + param_3) >> 4);
        }
        psVar3 = psVar3 + 2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 4);
    iVar6 = 0;
    iVar5 = param_1;
    do {
      psVar3 = (short *)(param_1 + *(int *)(iVar5 + 4));
      iVar4 = (int)*psVar3;
      psVar3 = psVar3 + 1;
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        iVar2 = FUN_8003eb50((int)*psVar3,param_2,3);
        if (iVar2 == 6) {
          uVar1 = psVar3[1];
          psVar3[1] = ((uVar1 & 0xff) + param_5 * 4 & 0xff) + ((uVar1 >> 8) + param_6) * 0x100;
        }
        psVar3 = psVar3 + 2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 4);
  }
  return;
}


