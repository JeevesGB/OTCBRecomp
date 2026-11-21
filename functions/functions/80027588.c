/* Function: InitMenuState */
/* Address: 80027588 */

void InitMenuState(void)

{
  uint uVar1;
  byte bVar2;
  
  g_SubState1 = 0;
  g_SubState2 = 0;
  g_MenuSelection = 0;
  g_MenuPage = 0;
  g_MenuFlag = 0;
  g_AnimTimer = 0;
  g_ColorCycle = 0;
  g_MenuTimer = 0;
  g_MenuVisible = 1;
  g_MenuActive = 1;
  g_PlayerCarColor1 = g_SavedCarColor1;
  g_PlayerCarColor2 = g_SavedCarColor2;
  g_PlayerCarColor3 = (ushort)g_SavedCarColor3;
  g_PlayerCarColor4 = (ushort)g_SavedCarColor4;
  g_PlayerCar = (ushort)g_SavedCar;
  g_PlayerCourse = (ushort)g_SavedCourse;
  g_PlayerClass = (ushort)g_SavedClass;
  g_PlayerVolume = (ushort)g_SavedVolume;
  g_PlayerSFXVolume = (ushort)g_SavedSFXVolume;
  if (0x80 < g_SavedVolume) {
    g_PlayerVolume = 0x80;
  }
  bVar2 = 0;
  if (0x80 < g_SavedSFXVolume) {
    g_PlayerSFXVolume = 0x80;
  }
  g_PlayerTransmission = (ushort)g_SavedTransmission;
  g_PlayerTransmission2 = (ushort)g_SavedTransmission;
  uVar1 = 0;
  do {
    bVar2 = bVar2 + 1;
    if (g_SavedCarIndex1 == (&g_CarTable)[uVar1]) goto LAB_800276c0;
    uVar1 = (uint)bVar2;
  } while (bVar2 < 4);
  uVar1 = 1;
LAB_800276c0:
  bVar2 = 0;
  g_MenuCarIndex1 = (short)uVar1;
  uVar1 = 0;
  do {
    bVar2 = bVar2 + 1;
    if (g_SavedCarIndex2 == (&g_CarTable)[uVar1]) goto LAB_80027708;
    uVar1 = (uint)bVar2;
  } while (bVar2 < 4);
  uVar1 = 1;
LAB_80027708:
  bVar2 = 0;
  g_MenuCarIndex2 = (short)uVar1;
  uVar1 = 0;
  do {
    bVar2 = bVar2 + 1;
    if (g_SavedCourseIndex1 == (&g_CourseTable)[uVar1]) goto LAB_80027750;
    uVar1 = (uint)bVar2;
  } while (bVar2 < 5);
  uVar1 = 1;
LAB_80027750:
  bVar2 = 0;
  g_MenuCourseIndex1 = (short)uVar1;
  uVar1 = 0;
  do {
    bVar2 = bVar2 + 1;
    if (g_SavedCourseIndex2 == (&g_CourseTable)[uVar1]) goto LAB_80027798;
    uVar1 = (uint)bVar2;
  } while (bVar2 < 5);
  uVar1 = 1;
LAB_80027798:
  g_MenuCourseIndex2 = (short)uVar1;
  return;
}


