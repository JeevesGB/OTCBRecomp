/* Function: CalcDistance2D */
/* Address: 800540e0 */

int CalcDistance2D(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long local_8 [2];
  
  piVar4 = local_8;
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  iVar1 = param_2;
  if (param_2 < param_1) {
    iVar1 = param_1;
  }
  gte_Lzc(iVar1,local_8);
  uVar3 = 0x11 - *piVar4;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  param_1 = param_1 >> (uVar3 & 0x1f);
  param_2 = param_2 >> (uVar3 & 0x1f);
  iVar1 = param_1 * param_1 + param_2 * param_2;
  gte_ldLZCS(iVar1);
  gte_stlzc(piVar4 + 1);
  if ((int)*(uint *)((int)piVar4 + 4) < 0x20) {
    uVar2 = *(uint *)((int)piVar4 + 4) & 0xfffffffe;
    *(uint *)((int)piVar4 + 4) = uVar2;
    if ((int)uVar2 < 0x18) {
      iVar1 = iVar1 >> (0x18 - uVar2 & 0x1f);
    }
    else {
      iVar1 = iVar1 << (uVar2 - 0x18 & 0x1f);
    }
    iVar1 = ((int)*(short *)(&DAT_800c577c + (iVar1 + -0x40) * 2) <<
            ((int)(0x1f - uVar2) >> 1 & 0x1fU)) >> 0xc;
  }
  return iVar1 << (uVar3 & 0x1f);
}


