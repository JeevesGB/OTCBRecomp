/* Function: UpdateCarSelect */
/* Address: 8006bcdc */

void UpdateCarSelect(void)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = g_CarSelectMenuItem;
  if ((g_PadButtons & 0x1000) == 0) {
    if ((g_PadButtons & 0x4000) == 0) {
      if ((g_PadButtons & 0x60) != 0) {
        puVar3 = (undefined1 *)GetCarData();
        switch(iVar2) {
        case 0:
          PlaySFX(0x10);
          g_GameState = 0xc;
          break;
        case 1:
          PlaySFX(0x10);
          *puVar3 = 4;
          g_GameState = 0xe;
          break;
        case 2:
          PlaySFX(0x10);
          g_GameState = 1;
          break;
        case 3:
          PlaySFX(0x10);
          g_GameState = 0;
          break;
        case 4:
          PlaySFX(0x10);
          g_GameState = 8;
        }
      }
      goto switchD_8006bd9c_default;
    }
    PlaySFX(0xf);
    bVar1 = g_CarSelectMenuItem == 4;
    g_CarSelectMenuItem = g_CarSelectMenuItem + 1;
    if (bVar1) {
      g_CarSelectMenuItem = 0;
    }
  }
  else {
    PlaySFX(0xf);
    bVar1 = g_CarSelectMenuItem == 0;
    g_CarSelectMenuItem = g_CarSelectMenuItem + -1;
    if (bVar1) {
      g_CarSelectMenuItem = 4;
    }
  }
  g_CarSelectFlag2 = 0;
switchD_8006bd9c_default:
  RenderCarSelect(g_CarSelectFlag1,g_CarSelectMenuItem,g_CarSelectColorCycle);
  g_CarSelectColorCycle = g_CarSelectColorCycle + -6;
  if (g_CarSelectColorCycle < 0x40) {
    g_CarSelectColorCycle = 0xa0;
  }
  g_CarSelectFlag1 = g_CarSelectFlag1 + 8;
  if (0xff < g_CarSelectFlag1) {
    g_CarSelectFlag1 = 0xff;
  }
  g_CarSelectFlag2 = g_CarSelectFlag2 + 1;
  if (g_CarSelectFlag2 == 0x708) {
    g_GameState = 5;
  }
  return;
}


