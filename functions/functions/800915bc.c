/* Function: _SsNoteOn */
/* Address: 800915bc */

void _SsNoteOn(short param_1,short param_2,uchar param_3,uchar param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)&DAT_800cdee8 + ((int)((uint)(ushort)param_1 << 0x10) >> 0xe)) +
          param_2 * 0xb0;
  iVar2 = iVar1 + (uint)*(byte *)(iVar1 + 0x17);
  if (param_4 == '\0') {
    _SsVmKeyOff((int)(short)(param_1 | param_2 << 8),(int)*(char *)(iVar1 + 0x26),
                *(undefined1 *)(iVar2 + 0x37),param_3);
  }
  else if (((int)*(short *)(iVar1 + 0x80) >> (*(byte *)(iVar1 + 0x17) & 0x1f) & 1U) == 0) {
    _SsVmKeyOn((int)(short)(param_1 | param_2 << 8),(int)*(char *)(iVar1 + 0x26),
               *(undefined1 *)(iVar2 + 0x37),param_3,param_4,*(undefined1 *)(iVar2 + 0x27));
    MIDINOTE_OBJ_C4();
    return;
  }
  return;
}


