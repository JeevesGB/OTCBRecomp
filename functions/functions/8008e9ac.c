/* Function: _SsSndPause */
/* Address: 8008e9ac */

void _SsSndPause(ushort param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_800cdee8 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar1 = *piVar2;
  _SsVmSeqKeyOff((int)(short)(param_1 | param_2 << 8));
  *(undefined1 *)(iVar1 + param_2 * 0xb0 + 0x14) = 0;
  iVar1 = param_2 * 0xb0 + *piVar2;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) & 0xfffffffd;
  return;
}


