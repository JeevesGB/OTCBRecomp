/* Function: State_RaceResultRouter */
/* Address: 8008af04 */

void State_RaceResultRouter(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  iVar1 = GetCarData();
  puVar2 = (undefined1 *)GetCarReplayData();
  puVar3 = (undefined1 *)GetRaceTypePtr();
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  switch(*(undefined1 *)(iVar1 + 4)) {
  case 0:
    g_GameState = 0xc;
    uVar9 = puVar2[2];
    uVar8 = *puVar2;
    uVar7 = *puVar3;
    break;
  case 1:
    g_GameState = 0xc;
    if (g_DebugFlag == 1) {
      uVar9 = puVar2[2];
      uVar8 = *puVar2;
    }
    else {
      uVar9 = puVar2[7];
      uVar8 = puVar2[5];
    }
    uVar7 = puVar3[1];
    break;
  case 2:
    g_GameState = 0xd;
    uVar9 = puVar2[0xc];
    uVar8 = puVar2[10];
    uVar7 = puVar3[2];
    break;
  case 3:
    iVar1 = GetCarReplayData();
    iVar1 = GetReplayCarData(*(undefined1 *)(iVar1 + 0x11));
    g_GameState = 0x1b;
    *(undefined2 *)(iVar1 + 0xac) = g_ChampionshipFlags._2_2_;
    uVar9 = puVar2[0x11];
    uVar8 = puVar2[0xf];
    uVar7 = puVar3[3];
    uVar4 = GetChampionshipData();
    uVar5 = GetCarReplayData();
    UpdateChampionshipStandings(uVar4,uVar5,(int)g_DebugFlag);
    uVar4 = GetChampionshipData();
    uVar5 = GetCarReplayData();
    iVar1 = IsChampionshipComplete(uVar4,uVar5);
    if (iVar1 != 0) {
      iVar1 = GetCarReplayData();
      pcVar6 = (char *)GetReplayCarData(*(undefined1 *)(iVar1 + 0x11));
      if (*pcVar6 != '\x02') {
        g_GameState = 0x1c;
        break;
      }
    }
    g_GameState = 0x1b;
    break;
  case 4:
    g_GameState = 0x15;
    uVar9 = puVar2[0x11];
    uVar8 = puVar2[0xf];
    uVar7 = puVar3[3];
  }
  if (g_ResultSavePtr1 != 0) {
    SaveRaceResult1(g_ResultSavePtr1,uVar7,uVar8,uVar9);
  }
  if (g_ResultSavePtr2 != 0) {
    SaveRaceResult2(g_ResultSavePtr2,uVar7,uVar8,uVar9);
  }
  return;
}


