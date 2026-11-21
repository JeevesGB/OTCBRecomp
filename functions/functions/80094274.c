/* Function: VM_ALOC2_OBJ_E8 */
/* Address: 80094274 */

void VM_ALOC2_OBJ_E8(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 in_v0;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int in_t0;
  
  *(undefined2 *)((int)&DAT_800cece6 + (param_1 >> 0xf)) = in_v0;
  (&DAT_800cecc0)[*(short *)(param_2 + 2)] = (&DAT_800cecc0)[*(short *)(param_2 + 2)] | 8;
  iVar4 = (in_t0 << 0x10) >> 0xf;
  iVar2 = (DAT_800cefb7 * 0x10 + (int)DAT_800cefbc) * 0x20 + DAT_800cefa0;
  *(undefined2 *)((int)&DAT_800cece8 + iVar4) = *(undefined2 *)(iVar2 + 0x10);
  uVar1 = *(ushort *)(iVar2 + 0x12);
  uVar3 = DAT_800cef48 + (uVar1 & 0x1f);
  if (0x1f < (short)uVar3) {
    uVar3 = 0x1f;
  }
  *(ushort *)((int)&DAT_800cecea + iVar4) = uVar3 | uVar1 & 0xffe0;
  (&DAT_800cecc0)[DAT_800cefc8] = (&DAT_800cecc0)[DAT_800cefc8] | 0x30;
  return;
}


