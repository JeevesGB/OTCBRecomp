/* Function: FlipDisplayBuffers */
/* Address: 8002fef0 */

void FlipDisplayBuffers(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  sVar4 = -6;
  iVar3 = 0;
  g_ActiveSpriteOffset = 0x40;
  g_ActiveSpritePtr = &DAT_800cd4dc;
  g_SpriteTableDirty = DAT_800ccaac + 4;
  DrawText("PAUSE",0xffffffe8,0xffffffe2);
  g_ActiveSpritePtr = &g_SpriteTable;
  if (0 < DAT_800cca8e) {
    do {
      if (g_DisplayBufferIdx == (short)iVar3) {
        g_ActiveSpriteOffset = 0xc0;
      }
      else {
        g_ActiveSpriteOffset = 0;
      }
      iVar1 = (int)*(short *)((int)&g_DisplayStateTable + ((iVar3 << 0x10) >> 0xf));
      iVar2 = (int)sVar4;
      sVar4 = sVar4 + 0xc;
      DrawText((&PTR_s_CANCEL_800addc4)[iVar1 * 2],*(undefined4 *)(&DAT_800addc0 + iVar1 * 8),iVar2)
      ;
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < (int)DAT_800cca8e);
  }
  return;
}


