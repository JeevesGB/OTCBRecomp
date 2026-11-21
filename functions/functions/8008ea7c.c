/* Function: _SsSeqPlay */
/* Address: 8008ea7c */

void _SsSeqPlay(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)&DAT_800cdee8 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  iVar1 = *(int *)(iVar3 + 0x90);
  iVar2 = iVar1 - *(short *)(iVar3 + 0x54);
  if (iVar2 < 1) {
    if (iVar1 <= *(short *)(iVar3 + 0x54)) {
      do {
        do {
          _SsGetSeqData((param_1 << 0x10) >> 0x10,(int)param_2);
        } while (*(int *)(iVar3 + 0x90) == 0);
        iVar1 = iVar1 + *(int *)(iVar3 + 0x90);
      } while (iVar1 < *(short *)(iVar3 + 0x54));
      *(int *)(iVar3 + 0x90) = iVar1 - *(short *)(iVar3 + 0x54);
    }
    return;
  }
  if (0 < *(short *)(iVar3 + 0x52)) {
    *(short *)(iVar3 + 0x52) = *(short *)(iVar3 + 0x52) + -1;
    MIDIREAD_OBJ_E0();
    return;
  }
  if (*(short *)(iVar3 + 0x52) == 0) {
    *(undefined2 *)(iVar3 + 0x52) = *(undefined2 *)(iVar3 + 0x54);
    MIDIREAD_OBJ_DC();
    return;
  }
  *(int *)(iVar3 + 0x90) = iVar2;
  MIDIREAD_OBJ_E0();
  return;
}


