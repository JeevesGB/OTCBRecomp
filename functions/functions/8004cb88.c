/* Function: UpdateCarSound */
/* Address: 8004cb88 */

void UpdateCarSound(void)

{
  if (g_RaceFinished != 0) {
    (*(code *)(&g_CarSoundTable)[g_CollisionSoundFlag])();
  }
  return;
}


