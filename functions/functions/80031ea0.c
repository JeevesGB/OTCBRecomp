/* Function: FUN_80031ea0 */
/* Address: 80031ea0 */

void FUN_80031ea0(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int x;
  int iVar5;
  
  x = (int)*(short *)(param_1 + 0x30);
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
  if (x < 0) {
    x = -x;
  }
  if (*(short *)(param_1 + 0x1a) == 0) {
    iVar1 = -x;
  }
  else {
    *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) ^ 0x800;
    iVar1 = x;
  }
  uVar4 = *(uint *)((int)&g_SinCosTable + (*(int *)(param_1 + 0x44) + 0x800 >> 10 & 0x3ffcU));
  if ((int)uVar4 < 0) {
    uVar3 = (int)uVar4 >> 0x10 | 0xffff8000;
  }
  else {
    uVar3 = (int)uVar4 >> 0x10 & 0x7fff;
  }
  if ((uVar4 & 0x8000) == 0) {
    uVar4 = uVar4 & 0x7fff;
  }
  else {
    uVar4 = uVar4 | 0xffff8000;
  }
  *(int *)(param_1 + 0x54) = ((int)(iVar1 * uVar4) >> 0xc) + *(int *)(iVar5 + 0x4c);
  *(int *)(param_1 + 0x5c) = ((int)(iVar1 * uVar3) >> 0xc) + *(int *)(iVar5 + 0x54);
  iVar1 = (int)*(short *)(param_1 + 0x2c) + *(int *)(iVar5 + 0x50);
  if (*(short *)(param_1 + 0x20) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar1 - *(int *)(param_1 + 0x58)) / 3;
  }
  else {
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x58) = iVar1;
  }
  lVar2 = ratan2(*(int *)(iVar5 + 0x28) - (*(int *)(param_1 + 0x58) + 0x3c),x);
  *(short *)(param_1 + 0x4c) = (*(short *)(param_1 + 0x26) + 0xcf) - (short)lVar2;
  *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x2a);
  return;
}


