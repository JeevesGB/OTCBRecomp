/* Function: InitAudioAndDisplay */
/* Address: 8002b2a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitAudioAndDisplay(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 7;
  puVar3 = &DAT_800cc744;
  g_SeqCount = 0;
  g_VabCount = 0;
  g_ResetFlag = 0;
  _g_CurrentSeqHandle = 0xffffffff;
  do {
    *puVar3 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar2);
  iVar2 = 0;
  puVar3 = &g_SeqSlots;
  do {
    *puVar3 = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 1);
  InitSoundSystem();
  SsSetTableSize(&DAT_800cbc18,0x10,1);
  SsSetTickMode(0x1000);
  SsStart();
  UnmuteAllSound();
  do {
    sVar1 = SsUtSetReverbType(9);
  } while (sVar1 == -1);
  InitReverbSystem();
  SsSetSerialAttr('\0','\0','\x01');
  SsSetSerialAttr('\0','\x01','\0');
  InitCDAudio();
  g_DisplayParams = &g_DisplayParamsData;
  SetDisplayParams(0x80,0,0x80,0x80,0x80);
  FadeAudioVolume(0);
  FUN_8002bbc4();
  g_GameConfigPtr = &g_GameConfig;
  return;
}


