/* Function: PlayCarSFX */
/* Address: 8002b7f8 */

void PlayCarSFX(short param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = ((param_2 << 0x10) >> 0xd) + g_GameConfigPtr;
  SsUtKeyOnV(param_1,*(short *)(&g_VabSlots + *(byte *)(iVar1 + 1)),(ushort)*(byte *)(iVar1 + 2),
             (ushort)*(byte *)(iVar1 + 3),(ushort)*(byte *)(iVar1 + 4),(ushort)*(byte *)(iVar1 + 5),
             (short)((uint)*(byte *)(iVar1 + 6) * (int)*(short *)(g_DisplayParams + 0xe) *
                     (int)param_3 * 4 >> 0x10),
             (short)((uint)*(byte *)(iVar1 + 7) * (int)*(short *)(g_DisplayParams + 0xe) *
                     (int)param_3 * 4 >> 0x10));
  return;
}


