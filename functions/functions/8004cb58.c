/* Function: UpdateRaceSound */
/* Address: 8004cb58 */

void UpdateRaceSound(void)

{
  if (1 < g_CollisionFlag4) {
    g_CollisionSoundFlag = 1;
    return;
  }
  g_CollisionSoundFlag = 0;
  return;
}


