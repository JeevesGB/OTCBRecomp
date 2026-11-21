/* Function: FUN_80032014 */
/* Address: 80032014 */

void FUN_80032014(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int x;
  int iVar5;
  VECTOR local_28;
  SVECTOR local_18;
  
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
  uVar4 = *(uint *)((int)&g_SinCosTable +
                   ((*(int *)(param_1 + 0x44) - *(int *)(*(int *)(param_1 + 0x10) + 0x18c)) + 0x800
                    >> 10 & 0x3ffcU));
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
  local_18.vy = 0;
  local_18.vx = (short)((int)(iVar1 * uVar4) >> 0xc);
  local_18.vz = (short)((int)(iVar1 * uVar3) >> 0xc);
  ApplyMatrix((MATRIX *)(iVar5 + 0x38),&local_18,&local_28);
  *(long *)(param_1 + 0x54) = local_28.vx + *(int *)(iVar5 + 0x4c);
  *(long *)(param_1 + 0x5c) = local_28.vz + *(int *)(iVar5 + 0x54);
  iVar1 = local_28.vy + *(int *)(iVar5 + 0x50) + (int)*(short *)(param_1 + 0x2c);
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


