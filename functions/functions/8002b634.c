/* Function: FUN_8002b634 */
/* Address: 8002b634 */

void FUN_8002b634(short param_1,int param_2)

{
  int iVar1;
  
  iVar1 = ((param_2 << 0x10) >> 0xd) + g_GameConfigPtr;
  SsUtKeyOnV(param_1,*(short *)(&g_VabSlots + *(byte *)(iVar1 + 1)),(ushort)*(byte *)(iVar1 + 2),
             (ushort)*(byte *)(iVar1 + 3),(ushort)*(byte *)(iVar1 + 4),(ushort)*(byte *)(iVar1 + 5),
             (short)((uint)*(byte *)(iVar1 + 6) * (int)*(short *)(g_DisplayParams + 0xe) * 0x200 >>
                    0x10),
             (short)((uint)*(byte *)(iVar1 + 7) * (int)*(short *)(g_DisplayParams + 0xe) * 0x200 >>
                    0x10));
  return;
}


