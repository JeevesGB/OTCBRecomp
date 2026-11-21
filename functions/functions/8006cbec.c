/* Function: UpdateCourseSelect */
/* Address: 8006cbec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateCourseSelect(void)

{
  bool bVar1;
  undefined1 *puVar2;
  
  if ((g_PadButtons & 0x1000) == 0) {
    if ((g_PadButtons & 0x4000) == 0) {
      if ((g_PadButtons & 0x60) == 0) {
        if ((g_PadButtons & 0x90) != 0) {
          PlaySFX(0x11);
          g_GameState = 0xb;
        }
      }
      else {
        puVar2 = (undefined1 *)GetCarData();
        PlaySFX(0x10);
        g_GameState = 0xe;
        if (g_CourseSelectData != 1) {
          if (g_CourseSelectData < 2) {
            if (g_CourseSelectData == 0) {
              *puVar2 = 0;
            }
            goto LAB_8006cd0c;
          }
          if (g_CourseSelectData != 2) goto LAB_8006cd0c;
        }
        *puVar2 = (char)g_CourseSelectData;
      }
    }
    else {
      PlaySFX(0xf);
      bVar1 = g_CourseSelectData == 2;
      g_CourseSelectData = g_CourseSelectData + 1;
      if (bVar1) {
        g_CourseSelectData = 0;
      }
    }
  }
  else {
    PlaySFX(0xf);
    bVar1 = g_CourseSelectData == 0;
    g_CourseSelectData = g_CourseSelectData + -1;
    if (bVar1) {
      g_CourseSelectData = 2;
    }
  }
LAB_8006cd0c:
  RenderCourseSelect(_g_CourseDisplayInit & 0xff,g_CourseSelectData,_g_CourseSelectFlag & 0xff);
  _g_CourseSelectFlag = _g_CourseSelectFlag - 6;
  if ((int)_g_CourseSelectFlag < 0x40) {
    _g_CourseSelectFlag = 0xa0;
  }
  _g_CourseDisplayInit = _g_CourseDisplayInit + 8;
  if (0xff < (int)_g_CourseDisplayInit) {
    _g_CourseDisplayInit = 0xff;
  }
  return;
}


