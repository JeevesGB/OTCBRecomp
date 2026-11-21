/* Function: MenuSubState_TransmissionRender */
/* Address: 800261f4 */

void MenuSubState_TransmissionRender(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)g_RaceInitFlag;
  if (1 < iVar2) {
    iVar2 = 0;
  }
  sVar1 = (&g_PadState)[iVar2];
  if (sVar1 == 1) {
    g_TransmissionBackup = g_PlayerTransmission;
    g_SelectedPlayer = sVar1;
    DrawTransmission_1P();
    DrawSprite(g_MenuSpriteBuffer + 0x2a8,0xffffff90,0,g_MenuAnimPtr + 4);
    DrawSprite(g_MenuSpriteBuffer + 700,0x10,0,g_MenuAnimPtr + 4);
    DrawMenuBackground(&g_MenuBGSpriteA,&g_MenuBGSpriteB,g_MenuAnimPtr + 4);
    DrawTransmissionInput_1P();
    goto LAB_80026418;
  }
  if (1 < sVar1) {
    if (sVar1 == 2) {
      g_TransmissionBackup = g_PlayerTransmission;
      g_SelectedPlayer = sVar1;
      DrawTransmission_2P();
      DrawSprite(g_MenuSpriteBuffer + 0x2e4,0xffffff90,0,g_MenuAnimPtr + 4);
      DrawSprite(g_MenuSpriteBuffer + 0x2f8,0x10,0,g_MenuAnimPtr + 4);
      DrawMenuBackground(&g_MenuBGSpriteA,&g_MenuBGSpriteB,g_MenuAnimPtr + 4);
      DrawTransmissionInput_2P();
      goto LAB_80026418;
    }
    if (sVar1 == 3) {
      DrawMenuBackground(&g_MenuBGSpriteA,&g_MenuBGSpriteB,g_MenuAnimPtr + 4);
      goto LAB_80026418;
    }
  }
  g_SelectedPlayer = 0;
  g_TransmissionBackup = g_PlayerTransmission;
  DrawTransmission_NoCtrl();
  DrawSprite(g_MenuSpriteBuffer + 0x30c,0xffffff90,0,g_MenuAnimPtr + 4);
  DrawSprite(g_MenuSpriteBuffer + 800,0x10,0,g_MenuAnimPtr + 4);
  DrawMenuBackground(&g_MenuBGSpriteA,&g_MenuBGSpriteB,g_MenuAnimPtr + 4);
  DrawTransmissionInput_NoCtrl();
LAB_80026418:
  g_SubState2 = g_SubState2 + 1;
  return;
}


