/* Function: UpdateWallCollision */
/* Address: 80045274 */

void UpdateWallCollision(void)

{
  if (g_CollisionFlag3 != 0) {
    AddRenderQueueItem(0xc,&LAB_80044f38);
    g_WallCollisionFlag = 0xffffffff;
  }
  return;
}


