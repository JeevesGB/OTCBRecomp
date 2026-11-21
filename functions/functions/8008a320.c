/* Function: State_RaceSetup */
/* Address: 8008a320 */

void State_RaceSetup(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  iVar1 = GetCarData();
  puVar2 = (undefined1 *)GetRaceTypePtr();
  uVar3 = puVar2[3];
  InitMenuHeap();
  InitMemoryState();
  switch(*(undefined1 *)(iVar1 + 4)) {
  case 0:
    uVar3 = *puVar2;
    SetupRace_Type0(&g_DebugFlag);
    break;
  case 1:
    uVar3 = *puVar2;
    SetupRace_Type1(&g_DebugFlag);
    break;
  case 2:
    uVar3 = puVar2[2];
    SetupRace_Type2(&g_DebugFlag);
    break;
  case 3:
    uVar3 = puVar2[3];
    SetupRace_Type3(&g_DebugFlag);
    break;
  case 4:
    uVar3 = puVar2[3];
    SetupRace_Type4(&g_DebugFlag);
  }
  g_ResultSavePtr1 = GetResultSavePtr1(uVar3);
  g_ResultSavePtr2 = GetResultSavePtr2(uVar3);
  g_GameState = 7;
  return;
}


