/* Function: SsSepSetVol */
/* Address: 80092854 */

void SsSepSetVol(short param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  
  iVar1 = *(int *)((int)&DAT_800cdee8 + ((int)((uint)(ushort)param_1 << 0x10) >> 0xe)) +
          param_2 * 0xb0;
  if (*(int *)(iVar1 + 0x98) != 1) {
    *(short *)(iVar1 + 0x58) = param_3;
    *(short *)(iVar1 + 0x5a) = param_4;
    SSVOL_OBJ_178();
    return;
  }
  _SsVmSetSeqVol((int)(short)(param_1 | param_2 << 8),param_3,param_4,1);
  return;
}


