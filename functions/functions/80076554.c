/* Function: LoadReplayData */
/* Address: 80076554 */

void LoadReplayData(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  
  pbVar7 = (byte *)GetCarData();
  piVar8 = (int *)FUN_800679a4(*param_2,param_2[1]);
  *param_1 = *param_2;
  uVar6 = param_2[1];
  param_1[2] = 0;
  param_1[1] = uVar6;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  iVar12 = 0;
  if (*piVar8 != 0) {
    do {
      cVar3 = param_2[2];
      if (*pbVar7 - 4 < 2) {
        cVar3 = GetReplayCarIndex();
      }
      if (*(char *)(piVar8[1] + iVar12) == cVar3) {
        param_1[2] = (char)iVar12;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != *piVar8);
  }
  FUN_8006e3f4(param_1,0);
  bVar1 = param_2[2];
  iVar12 = GetSelectedCarData();
  iVar9 = FUN_80067458();
  InitGhostCarDisplay(g_TrackGeometryBuffer,*(undefined1 *)(iVar9 + (uint)bVar1),
                      g_CarModelBuffer + (uint)*(byte *)(iVar12 + 0x1d) * 0x14);
  uVar10 = GetDefaultCarIndex(param_2[2]);
  iVar12 = GetSelectedCarData();
  iVar9 = FUN_80067470();
  cVar3 = FUN_80067870(uVar10 & 0xff);
  if (cVar3 == '\0') {
    bVar1 = *(byte *)(iVar12 + 0x31);
  }
  else {
    bVar1 = *(byte *)(iVar12 + 0x32);
  }
  iVar12 = 0;
  InitGhostCarDisplay(g_TrackObjectBuffer,*(undefined1 *)(iVar9 + (uVar10 & 0xff)),
                      g_CarModelBuffer + (uint)bVar1 * 0x14);
  do {
    iVar12 = iVar12 + 1;
    FUN_8006e570(param_2[2]);
    VsyncWait();
  } while (iVar12 != 2);
  uVar6 = param_2[2];
  uVar4 = GetChampionshipTrackIndex(uVar6,0xffffffff);
  uVar5 = GetChampionshipCarIndex(uVar6);
  uVar2 = param_1[3];
  sVar11 = 0;
  if (*pbVar7 - 4 < 2) {
    iVar12 = GetReplayCarData(uVar6);
    uVar6 = FUN_8006781c(uVar6);
    if (*(short *)(iVar12 + 0xae) != 0) {
      uVar4 = GetChampionshipTrackIndex(uVar6,0xffffffff);
      uVar5 = GetChampionshipCarIndex(uVar6);
    }
    sVar11 = *(short *)(iVar12 + 0xac);
  }
  FUN_80066d68(&g_RaceBuffer1,uVar4,uVar5,uVar2,(int)sVar11);
  return;
}


