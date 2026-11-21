/* Function: GetSoundHandle */
/* Address: 8002c048 */

int GetSoundHandle(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = param_1 * 8 + g_GameConfigPtr;
  sVar1 = SsUtKeyOn((ushort)*(byte *)(iVar2 + 1),(ushort)*(byte *)(iVar2 + 2),
                    (ushort)*(byte *)(iVar2 + 3),(ushort)*(byte *)(iVar2 + 4),
                    (ushort)*(byte *)(iVar2 + 5),0,0);
  return (int)sVar1;
}


