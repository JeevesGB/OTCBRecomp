/* Function: FadeAudioVolume */
/* Address: 8002b3f4 */

void FadeAudioVolume(int param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  
  psVar5 = g_DisplayParams;
  psVar1 = g_DisplayParams + 2;
  sVar2 = g_DisplayParams[4];
  sVar3 = g_DisplayParams[6];
  sVar4 = g_DisplayParams[8];
  g_DisplayParams[1] = (short)((uint)(*g_DisplayParams * param_1) >> 8);
  psVar5[3] = (short)((uint)(*psVar1 * param_1) >> 8);
  psVar5[5] = (short)((uint)(sVar2 * param_1) >> 8);
  psVar5[7] = (short)((uint)(sVar3 * param_1) >> 8);
  psVar5[9] = (short)((uint)(sVar4 * param_1) >> 8);
  SetAudioVolumes(psVar5[1] * 0xfe00 >> 0x10,psVar5[3] * 0xfe00 >> 0x10,psVar5[5] * 0xfe00 >> 0x10);
  return;
}


