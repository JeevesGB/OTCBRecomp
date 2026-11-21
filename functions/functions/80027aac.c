/* Function: MenuSubState_Transition */
/* Address: 80027aac */

void MenuSubState_Transition(void)

{
  g_SubState2 = g_SubState2 + 1;
  DrawSprite(g_MenuSpriteBuffer + 0x26c,0xffffff80,0xffffff40,g_MenuAnimPtr + 4);
  return;
}


