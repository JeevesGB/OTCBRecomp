/* Function: State_PostRace */
/* Address: 8008d680 */

void State_PostRace(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar3 = GetCarData();
  iVar4 = GetCarReplayData();
  puVar5 = (undefined1 *)GetProgressionPtr();
  uVar1 = GetReplayCarIndex(*(undefined1 *)(iVar4 + 0x11));
  switch(puVar5[1]) {
  case 0:
    uVar1 = GetBestLapCar();
    cVar2 = IsReplaySlotFull(uVar1);
    if (cVar2 == '\0') {
      SaveReplaySlot(uVar1);
      *puVar5 = uVar1;
      g_GameState = 0x1e;
      *(undefined1 *)(iVar3 + 6) = 0;
    }
    break;
  case 1:
    iVar4 = 0;
    do {
      iVar6 = HasLapRecord(iVar4);
      if (iVar6 != 0) {
        uVar1 = GetLapRecordCar(iVar4);
        cVar2 = IsReplaySlotFull(uVar1);
        if (cVar2 == '\0') {
          SaveReplaySlot(uVar1);
          *puVar5 = uVar1;
          g_GameState = 0x1e;
          *(undefined1 *)(iVar3 + 6) = 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    break;
  case 2:
    iVar4 = HasCourseRecord();
    if (iVar4 != 0) {
      uVar1 = GetCourseRecordCar();
      cVar2 = IsReplaySlotFull(uVar1);
      if (cVar2 == '\0') {
        SaveReplaySlot(uVar1);
        *puVar5 = uVar1;
        g_GameState = 0x1e;
        *(undefined1 *)(iVar3 + 6) = 2;
      }
    }
    break;
  case 3:
    iVar3 = HasOverallRecord();
    if (iVar3 != 0) {
      uVar1 = GetOverallRecordCar();
      cVar2 = IsReplaySlotFull(uVar1);
      if (cVar2 == '\0') {
        SaveReplaySlot(uVar1);
        *puVar5 = uVar1;
        g_GameState = 0x1e;
      }
    }
    break;
  case 4:
    if (*(char *)(iVar3 + 6) == '\0') {
      iVar3 = GetCarData(uVar1);
      *(undefined1 *)(iVar3 + 5) = 1;
      g_GameState = 2;
    }
    else {
      InitSaveOperation();
      g_GameState = 8;
    }
    puVar5[1] = 0;
  default:
    goto switchD_8008d6ec_default;
  }
  puVar5[1] = puVar5[1] + '\x01';
switchD_8008d6ec_default:
  return;
}


