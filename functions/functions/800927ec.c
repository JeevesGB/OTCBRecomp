/* Function: SsSeqSetVol */
/* Address: 800927ec */

void SsSeqSetVol(short param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = (&DAT_800cdee8)[param_1];
  if (*(int *)(iVar1 + 0x98) != 1) {
    *(short *)(iVar1 + 0x58) = param_2;
    *(short *)(iVar1 + 0x5a) = param_3;
    SSVOL_OBJ_E8();
    return;
  }
  _SsVmSetSeqVol((int)param_1,param_2,param_3,1);
  return;
}


