/* Function: PlayMusicTrack */
/* Address: 8002bdcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayMusicTrack(undefined4 param_1,short param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (short)param_1;
  sVar2 = SsIsEos(sVar1,0);
  if (sVar2 == 0) {
    sVar2 = *(short *)(g_DisplayParams + 0x12);
    StopCurrentSEQ();
    sVar2 = (short)(sVar2 * 0x7f >> 7);
    SsSeqSetVol(sVar1,sVar2,sVar2);
    SsSeqPlay(sVar1,'\x01',param_2);
    _g_CurrentSeqHandle = param_1;
  }
  return;
}


