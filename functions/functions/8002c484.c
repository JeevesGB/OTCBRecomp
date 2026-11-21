/* Function: UpdateCarPhysics */
/* Address: 8002c484 */

void UpdateCarPhysics(void)

{
  g_PhysicsFlag = 0;
  g_DrawSyncFlag = 0;
  g_TrackGrip = *(undefined2 *)(&g_TrackGripTable + g_TrackSurface * 2);
  if (g_RacePosition == 0) {
    g_DebugFlag = 0xffff;
    g_RaceFinished = 0xffff;
    g_RaceComplete = 0;
    g_CarOnTrack = 0;
    g_CarGrounded = 0;
    g_CarColliding = 0;
    g_SpeedFlag1 = 0;
    g_SpeedFlag2 = 0;
  }
  else {
    g_RaceComplete = 0xffff;
    g_CarOnTrack = 0xffff;
    g_RaceFinished = 0;
  }
  if (g_RaceActive != 0) {
    g_RaceLap = g_RaceLap + 1;
  }
  g_RaceActive = 0;
  g_RacePosition = 0;
  g_PhysicsFlag2 = 0;
  g_PhysicsFlag3 = 0;
  g_PhysicsFlag4 = 0;
  g_PhysicsFlag5 = 0;
  return;
}


