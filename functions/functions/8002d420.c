/* Function: UpdateCarPhysics2 */
/* Address: 8002d420 */

void UpdateCarPhysics2(void)

{
  (*(code *)(&g_CarPhysicsTable)[g_RaceFrameFlag])();
  if ((g_PadAnalog1 & 4) != 0) {
    DAT_800cbaf0 = DAT_800cbaf0 + 1;
  }
  if ((g_PadAnalog1 & 1) != 0) {
    DAT_800cbaf0 = DAT_800cbaf0 + -1;
  }
  return;
}


