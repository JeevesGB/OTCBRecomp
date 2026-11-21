/* Function: RenderTrackEffects */
/* Address: 8005238c */

void RenderTrackEffects(void)

{
  int iVar1;
  
  iVar1 = g_CurrentCarPtr;
  if (g_CollisionFlag == 0) {
    *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) =
         *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) & 0xfffb;
  }
  else {
    *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) =
         *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) | 4;
    if (*(short *)(iVar1 + 0x1a) == 0) {
      FUN_80052198();
    }
  }
  return;
}


