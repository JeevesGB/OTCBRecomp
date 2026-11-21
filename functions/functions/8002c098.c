/* Function: UpdateEngineRPMSound */
/* Address: 8002c098 */

void UpdateEngineRPMSound(int param_1,short param_2,ushort param_3,short param_4)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *(short *)(g_DisplayParams + 0xe);
  iVar1 = ((param_1 << 0x10) >> 0xd) + g_GameConfigPtr;
  SsUtChangePitch(param_2,(ushort)*(byte *)(iVar1 + 1),(ushort)*(byte *)(iVar1 + 2),
                  (ushort)*(byte *)(iVar1 + 4),(ushort)*(byte *)(iVar1 + 5),(short)param_3 >> 7,
                  param_3 & 0x7f);
  sVar2 = (short)((int)param_4 * (int)sVar2 >> 7);
  SsUtSetVVol(param_2,sVar2,sVar2);
  return;
}


