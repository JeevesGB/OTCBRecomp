/* Function: FUN_8004cc90 */
/* Address: 8004cc90 */

void FUN_8004cc90(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = g_VRAMRectPtr;
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  g_VRAMRectPtr = g_VRAMRectPtr + 10;
  FUN_8005741c(puVar1,g_TrackConfigBuffer + 0x78);
  FUN_80057b74(puVar1,0x53,0x46,0x1e,2,0x17,1,(param_1 * 0x8f2) / 10000 + -0x235);
                    /* Probable PsyQ macro: addPrim(). */
  *puVar1 = *puVar1 & 0xff000000 | *(uint *)(g_RaceOTPtr2 + 0xc) & 0xffffff;
  iVar2 = g_TrackConfigBuffer;
  *(uint *)(g_RaceOTPtr2 + 0xc) =
       *(uint *)(g_RaceOTPtr2 + 0xc) & 0xff000000 | (uint)puVar1 & 0xffffff;
  DrawSprite(iVar2 + 0x1e0,0x46,0x28,g_RaceOTPtr2 + 0xc);
  return;
}


