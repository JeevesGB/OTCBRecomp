/* Function: UpdateTrackCollision */
/* Address: 8003c9f8 */

void UpdateTrackCollision(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  g_CollisionFlag1 = 0;
  g_CollisionFlag2 = 0;
  g_CollisionFlag3 = 0;
  g_CollisionFlag4 = 0;
  g_CollisionFlag5 = 0;
  InitCollisionFrame();
  bVar1 = *param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (99 < uVar2) {
      UpdateWallCollision();
      UpdateCarCarCollision();
      return;
    }
    if (uVar2 < 5) break;
    bVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x8003ca98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_8003ca98::g_TrackCollisionTable)[uVar2])();
  return;
}


