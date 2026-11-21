/* Function: _SsSndReplay */
/* Address: 8008f31c */

void _SsSndReplay(int param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_800cdee8 + ((param_1 << 0x10) >> 0xe));
  *(undefined1 *)(*piVar2 + param_2 * 0xb0 + 0x14) = 1;
  iVar1 = param_2 * 0xb0 + *piVar2;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xfffffff7;
  return;
}


