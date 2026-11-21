/* Function: ResolveCarCarCollision */
/* Address: 80044670 */

void ResolveCarCarCollision(void)

{
  int iVar1;
  int *piVar2;
  
  bzero((uchar *)&g_CollisionResponseData,0x20);
  iVar1 = 0;
  g_CollisionResponseCount = 0;
  if (0 < g_CollisionFlag2) {
    piVar2 = &g_CollisionPairList;
    do {
      if (*(short *)(*piVar2 + 0x44) == 4) {
        ResolveBarrierCollision();
      }
      else {
        ResolveCarCollision();
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < g_CollisionFlag2);
  }
  return;
}


