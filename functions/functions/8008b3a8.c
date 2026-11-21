/* Function: FUN_8008b3a8 */
/* Address: 8008b3a8 */

void FUN_8008b3a8(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = GetChampionshipData();
  iVar3 = GetCarReplayData();
  pbVar4 = (byte *)GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
  puVar5 = (undefined4 *)GetReplayLapData(*(undefined1 *)(iVar3 + 0x11),*pbVar4);
  uVar7 = *puVar5;
  uVar6 = FUN_80069778();
  FUN_8006a020(uVar6,uVar2,(int)g_DebugFlag);
  uVar2 = GetChampionshipData();
  uVar6 = GetCarReplayData();
  iVar3 = IsChampionshipComplete(uVar2,uVar6);
  if (iVar3 != 0) {
    FUN_8006a11c(pbVar4,uVar7);
    bVar1 = *pbVar4;
    if (bVar1 == 1) {
      *pbVar4 = 2;
      g_GameState = 0x1f;
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *pbVar4 = 1;
      g_GameState = 0x12;
      return;
    }
    if (bVar1 != 2) {
      return;
    }
  }
  g_GameState = 0x12;
  return;
}


