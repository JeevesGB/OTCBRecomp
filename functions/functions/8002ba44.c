/* Function: UpdateRaceMusic */
/* Address: 8002ba44 */

void UpdateRaceMusic(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  
  puVar5 = g_DisplayParams;
  puVar1 = g_DisplayParams + 2;
  uVar2 = g_DisplayParams[4];
  uVar3 = g_DisplayParams[6];
  uVar4 = g_DisplayParams[8];
  g_DisplayParams[1] = *g_DisplayParams;
  puVar5[3] = *puVar1;
  puVar5[5] = uVar2;
  puVar5[7] = uVar3;
  puVar5[9] = uVar4;
  return;
}


