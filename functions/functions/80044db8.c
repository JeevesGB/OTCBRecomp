/* Function: UpdateCarCarCollision */
/* Address: 80044db8 */

void UpdateCarCarCollision(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (g_CollisionFlag2 != 0) {
    AddRenderQueueItem(0xc,&LAB_80044b20);
    g_CarCarCollisionFlag = 0;
    g_CarCarCollisionTimer = 0x96;
    ResolveCarCarCollision();
    iVar2 = 0;
    puVar1 = &g_CarCarCollisionPairs;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(puVar1[1] + 0x4a) = 1;
      puVar1 = puVar1 + 2;
    } while (iVar2 < 3);
  }
  return;
}


