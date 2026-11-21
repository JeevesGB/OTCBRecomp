/* Function: FUN_8005348c */
/* Address: 8005348c */

void FUN_8005348c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = g_CollisionFlag1;
  iVar5 = 0;
  g_CarRenderStart = 0;
  if (0 < g_CollisionFlag1) {
    puVar4 = &g_CarRenderList;
    puVar3 = &DAT_800ccc68;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + 1;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}


