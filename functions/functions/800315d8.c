/* Function: UpdateCamera */
/* Address: 800315d8 */

void UpdateCamera(void)

{
  g_CameraFlag1 = 0;
  g_CameraFlag2 = 0;
  g_CameraFlag3 = 0;
  g_CameraActive = 1;
  if ((g_RaceComplete != 0) && (g_RaceMode == 4)) {
    UpdateVSCamera();
  }
  return;
}


