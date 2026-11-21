/* Function: PlaySFX */
/* Address: 8002b554 */

void PlaySFX(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = ((param_1 << 0x10) >> 0xd) + g_GameConfigPtr;
    SsUtKeyOn(*(short *)(&g_VabSlots + *(byte *)(iVar1 + 1)),(ushort)*(byte *)(iVar1 + 2),
              (ushort)*(byte *)(iVar1 + 3),(ushort)*(byte *)(iVar1 + 4),(ushort)*(byte *)(iVar1 + 5)
              ,(short)((uint)*(byte *)(iVar1 + 6) * (int)*(short *)(g_DisplayParams + 0xe) * 0x200
                      >> 0x10),
              (short)((uint)*(byte *)(iVar1 + 7) * (int)*(short *)(g_DisplayParams + 0xe) * 0x200 >>
                     0x10));
    param_1 = param_1 + 1;
  } while (*(char *)((param_1 * 0x10000 >> 0xd) + g_GameConfigPtr) != '\0');
  return;
}


