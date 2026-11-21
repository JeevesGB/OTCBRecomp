/* Function: FUN_80047c4c */
/* Address: 80047c4c */

void FUN_80047c4c(int param_1,short *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar7 + 0x3e) != 0) {
    iVar4 = (int)*(short *)(param_1 + 0x3c0);
    iVar7 = *(short *)(iVar7 + 0x50) * 0x20 + (int)*(short *)(param_1 + 0x3c2);
    iVar5 = param_2[1] * param_3 >> 7;
    if (iVar7 < iVar4) {
      iVar4 = iVar4 - iVar5;
      bVar1 = iVar4 < iVar7;
    }
    else {
      iVar4 = iVar4 + iVar5;
      bVar1 = iVar7 < iVar4;
    }
    uVar3 = (undefined2)iVar4;
    if (bVar1) {
      uVar3 = (undefined2)iVar7;
    }
    *(undefined2 *)(param_1 + 0x3c0) = uVar3;
    return;
  }
  iVar2 = (int)*(short *)(param_1 + 0x3c0);
  iVar4 = param_2[1] * param_3 >> 7;
  iVar5 = (int)*param_2;
  iVar6 = param_2[3] * param_3 >> 7;
  iVar8 = param_2[2] * param_3 >> 7;
  if ((*(ushort *)(iVar7 + 0x4c) & 2) == 0) {
    if ((*(ushort *)(iVar7 + 0x4c) & 1) == 0) {
      *(undefined2 *)(iVar7 + 0x6a) = 0;
      iVar5 = (int)*(short *)(param_1 + 0x3c2);
      if (iVar2 < iVar5) {
        iVar2 = iVar2 + iVar8;
        bVar1 = iVar5 < iVar2;
        goto LAB_80047da4;
      }
    }
    else {
      if (0 < iVar2) {
        *(undefined2 *)(iVar7 + 0x6a) = 0xffff;
      }
      if (*(short *)(iVar7 + 0x6a) != 0) {
        iVar4 = iVar6;
      }
      iVar5 = -iVar5;
      iVar8 = iVar4;
    }
    iVar2 = iVar2 - iVar8;
    bVar1 = iVar2 < iVar5;
  }
  else {
    if (iVar2 < 0) {
      *(undefined2 *)(iVar7 + 0x6a) = 0xffff;
    }
    if (*(short *)(iVar7 + 0x6a) != 0) {
      iVar4 = iVar6;
    }
    iVar2 = iVar2 + iVar4;
    bVar1 = iVar5 < iVar2;
  }
LAB_80047da4:
  uVar3 = (undefined2)iVar2;
  if (bVar1) {
    uVar3 = (undefined2)iVar5;
  }
  *(undefined2 *)(param_1 + 0x3c0) = uVar3;
  return;
}


