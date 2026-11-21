/* Function: InitCollisionResponse */
/* Address: 8003ef48 */

void InitCollisionResponse(int param_1,int param_2,ushort *param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  int *piVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    piVar3 = (int *)MemAllocTemp(0x10);
    *(int **)(param_1 + 0x20) = piVar3;
    *piVar3 = param_2;
    piVar3[1] = (int)param_3;
    *(undefined2 *)((int)piVar3 + 0xe) = 0;
    *(undefined2 *)(piVar3 + 3) = 0;
    *(undefined2 *)((int)piVar3 + 10) = 0;
    *(undefined2 *)(piVar3 + 2) = 0;
    iVar8 = (short)*param_3 + -1;
    if (iVar8 != -1) {
      puVar9 = param_3 + iVar8;
      do {
        iVar10 = *(int *)(*(int *)(param_1 + 0x14) + 4);
        if (param_2 != 0) {
          psVar5 = (short *)(param_2 + *(int *)(param_2 + (short)puVar9[1] * 4 + 4));
          iVar6 = (int)*psVar5;
          while (iVar6 = iVar6 + -1, iVar6 != -1) {
            psVar4 = psVar5 + 1;
            psVar5 = psVar5 + 2;
            psVar4 = (short *)(iVar10 + *psVar4);
            sVar1 = *psVar4;
            *psVar4 = *psVar5;
            *psVar5 = sVar1;
          }
        }
        iVar8 = iVar8 + -1;
        puVar9 = puVar9 + -1;
      } while (iVar8 != -1);
    }
    *param_3 = 0;
    iVar10 = 0;
    iVar8 = param_2;
    do {
      if ((param_4 & 1) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 4);
        if (param_2 != 0) {
          psVar5 = (short *)(param_2 + *(int *)(iVar8 + 4));
          iVar7 = (int)*psVar5;
          while (iVar7 = iVar7 + -1, iVar7 != -1) {
            psVar4 = psVar5 + 1;
            psVar5 = psVar5 + 2;
            psVar4 = (short *)(iVar6 + *psVar4);
            sVar1 = *psVar4;
            *psVar4 = *psVar5;
            *psVar5 = sVar1;
          }
        }
        uVar2 = *param_3;
        *param_3 = uVar2 + 1;
        *(short *)((int)param_3 + ((int)((uint)uVar2 << 0x10) >> 0xf) + 2) = (short)iVar10;
        *(undefined2 *)(piVar3 + 2) = 0xffff;
      }
      param_4 = (int)param_4 >> 1;
      piVar3 = (int *)((int)piVar3 + 2);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < 4);
  }
  return;
}


