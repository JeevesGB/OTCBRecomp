/* Function: SetActiveSpriteSlot */
/* Address: 800589ec */

void SetActiveSpriteSlot(int param_1,short param_2)

{
  g_ActiveSpritePtr = &g_SpriteTable + param_1 * 0xe;
  g_ActiveSpriteOffset = param_2 << 6;
  return;
}


