/* Function: _SsVmDoAllocate */
/* Address: 8009418c */

void _SsVmDoAllocate(void)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  uVar2 = (uint)DAT_800cefc8;
  puVar4 = &DAT_800cee68;
  (&DAT_800ce786)[(short)DAT_800cefc8 * 0x1c] = 0x7fff;
  do {
    iVar5 = iVar5 + 1;
    *puVar4 = *puVar4 & ~(1 << ((int)(short)DAT_800cefc8 & 0x1fU));
    puVar4 = puVar4 + 1;
  } while (iVar5 < 0x10);
  if ((DAT_800cefc6 & 1) != 0) {
    VM_ALOC2_OBJ_E8(uVar2 << 0x13);
    return;
  }
  *(undefined2 *)((int)&DAT_800cece6 + ((int)(uVar2 << 0x13) >> 0xf)) =
       *(undefined2 *)((((short)DAT_800cefc6 + -1) / 2) * 0x10 + DAT_800cef94 + 0xe);
  (&DAT_800cecc0)[(short)DAT_800cefc8] = (&DAT_800cecc0)[(short)DAT_800cefc8] | 8;
  iVar6 = (int)(uVar2 << 0x13) >> 0xf;
  iVar5 = (DAT_800cefb7 * 0x10 + (int)DAT_800cefbc) * 0x20 + DAT_800cefa0;
  *(undefined2 *)((int)&DAT_800cece8 + iVar6) = *(undefined2 *)(iVar5 + 0x10);
  uVar1 = *(ushort *)(iVar5 + 0x12);
  uVar3 = DAT_800cef48 + (uVar1 & 0x1f);
  if (0x1f < (short)uVar3) {
    uVar3 = 0x1f;
  }
  *(ushort *)((int)&DAT_800cecea + iVar6) = uVar3 | uVar1 & 0xffe0;
  (&DAT_800cecc0)[(short)DAT_800cefc8] = (&DAT_800cecc0)[(short)DAT_800cefc8] | 0x30;
  return;
}


