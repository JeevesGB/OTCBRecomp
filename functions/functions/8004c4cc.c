/* Function: FUN_8004c4cc */
/* Address: 8004c4cc */

void FUN_8004c4cc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (&g_SinCosTable)[(int)*(short *)(param_1 + 0x4e) & 0xfff];
  iVar3 = *(int *)(param_1 + 0x60) >> 2;
  if ((int)uVar2 < 0) {
    uVar1 = (int)uVar2 >> 0x10 | 0xffff8000;
  }
  else {
    uVar1 = (int)uVar2 >> 0x10 & 0x7fff;
  }
  if ((uVar2 & 0x8000) == 0) {
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = uVar2 | 0xffff8000;
  }
  *(int *)(param_1 + 0x50) = (int)(iVar3 * uVar2) >> 10;
  *(int *)(param_1 + 0x58) = (int)(iVar3 * uVar1) >> 10;
  return;
}


