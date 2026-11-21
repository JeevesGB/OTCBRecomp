/* Function: UpdateCarPhysicsStep */
/* Address: 80047f90 */

void UpdateCarPhysicsStep(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x3d0) == 0) {
    iVar3 = *(int *)(param_1 + 0x60) >> 0xf;
    if (0x1e < iVar3) {
      iVar3 = 0x1e;
    }
    FUN_80047c4c(param_1,&DAT_800aea78,(int)*(short *)(&DAT_800aea88 + iVar3 * 2));
    iVar2 = (int)*(short *)(iVar3 * 2 + *(int *)(param_1 + 0x34)) * (int)*(short *)(param_1 + 0x3c0)
    ;
    uVar1 = iVar2 - *(int *)(param_1 + 0x198);
    if ((uVar1 & 0x800000) == 0) {
      uVar1 = uVar1 & 0x7fffff;
    }
    else {
      uVar1 = uVar1 | 0xff800000;
    }
    iVar3 = (int)(uVar1 * (int)*(short *)(iVar3 * 2 + -0x7ff514f8)) >> 4;
    if (iVar3 < 0x113001) {
      if (iVar3 < -0x113000) {
        iVar3 = -0x113000;
      }
    }
    else {
      iVar3 = 0x113000;
    }
    iVar2 = iVar2 + iVar3;
    if (iVar2 < -0x1ef000) {
      iVar2 = -0x1ef000;
    }
    else if (0x1ef000 < iVar2) {
      iVar2 = 0x1ef000;
    }
    *(int *)(param_1 + 0x3c8) = iVar2;
  }
  else {
    FUN_80047db8();
  }
  iVar3 = (*(int *)(param_1 + 0x3cc) * 2 + *(int *)(param_1 + 0x3c8)) / 3;
  if (iVar3 < -0x181000) {
    iVar3 = -0x181000;
  }
  else if (0x181000 < iVar3) {
    iVar3 = 0x181000;
  }
  *(int *)(param_1 + 0x3cc) = iVar3;
  return;
}


