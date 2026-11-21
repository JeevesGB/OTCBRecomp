/* Function: SaveMenuSettings */
/* Address: 80023d80 */

void SaveMenuSettings(void)

{
  if (0x80 < g_PlayerVolume) {
    g_PlayerVolume = 0x80;
  }
  if (0x80 < g_PlayerSFXVolume) {
    g_PlayerSFXVolume = 0x80;
  }
  g_SavedVolume = (undefined1)g_PlayerVolume;
  g_SavedCourse = (undefined1)g_PlayerCourse;
  g_SavedCar = (undefined1)g_PlayerCar;
  g_SavedSFXVolume = (undefined1)g_PlayerSFXVolume;
  g_SavedClass = (undefined1)g_PlayerClass;
  g_SavedCarColor3 = (undefined1)g_PlayerCarColor3;
  g_SavedCarColor4 = (undefined1)g_PlayerCarColor4;
  g_SavedCarColor1 = g_PlayerCarColor1;
  g_SavedCarColor2 = g_PlayerCarColor2;
  g_SavedCarIndex1 = (&g_CarTable)[g_MenuCarIndex1];
  g_SavedCarIndex2 = (&g_CarTable)[g_MenuCarIndex2];
  g_SavedCourseIndex1 = (&g_CourseTable)[g_MenuCourseIndex1];
  g_SavedCourseIndex2 = (&g_CourseTable)[g_MenuCourseIndex2];
  return;
}


