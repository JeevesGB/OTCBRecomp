/* Function: UpdateGhostCarSelect */
/* Address: 8007a828 */

code * UpdateGhostCarSelect(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  
  pcVar7 = UpdateGhostCarSelect;
  if ((g_PadButtons & 0x2000) == 0) {
    if ((g_PadButtons & 0x8000) == 0) {
      if ((g_PadButtons & 0x60) == 0) {
        if ((g_PadButtons & 0x90) != 0) {
          PlaySFX(0x11);
          iVar2 = GetCarData();
          switch(*(undefined1 *)(iVar2 + 2)) {
          case 0:
            g_GameState = 0xe;
            break;
          case 1:
            g_GameState = 0xe;
            break;
          case 2:
            g_GameState = 0xe;
            break;
          case 3:
            g_GameState = 0xd;
            break;
          case 4:
            g_GameState = 0x15;
          }
        }
      }
      else {
        PlaySFX(0x10);
        pcVar7 = (code *)&UNK_8007aaec;
      }
      goto switchD_8007a9f0_default;
    }
    iVar2 = *param_1;
    *param_1 = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *param_1 = 0;
      goto switchD_8007a9f0_default;
    }
  }
  else {
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    if (2 < iVar2 + 1) {
      *param_1 = 2;
      goto switchD_8007a9f0_default;
    }
  }
  param_1[1] = 0;
  PlaySFX(0xf);
  iVar2 = GetGhostCarTable(*param_1);
  bVar1 = *(byte *)(iVar2 + param_1[1]);
  iVar2 = GetGhostCarData();
  iVar3 = GetGhostTrackData();
  InitGhostCarDisplay(g_GhostCarBuffer,*(undefined1 *)(iVar3 + (uint)bVar1),
                      g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x2a) * 0x14);
  iVar2 = param_1[2];
  iVar3 = *param_1;
  iVar4 = param_1[1];
  SetupGhostRaceBuffers((char)iVar2);
  RenderGhostCarSelect((char)iVar2,0x80,iVar3,iVar4,0xffffffff);
  VsyncWait();
  iVar2 = param_1[2];
  iVar3 = *param_1;
  iVar4 = param_1[1];
  SetupGhostRaceBuffers((char)iVar2);
  RenderGhostCarSelect((char)iVar2,0x80,iVar3,iVar4,0);
  VsyncWait();
switchD_8007a9f0_default:
  uVar6 = 0;
  uVar5 = 0;
  iVar2 = param_1[2];
  iVar3 = *param_1;
  iVar4 = param_1[3];
  if (iVar3 != 0) {
    uVar5 = 0xffffffff;
  }
  if (iVar3 != 2) {
    uVar6 = 0xffffffff;
  }
  SetupGhostRaceBuffers((char)iVar2);
  FUN_80079b00((char)iVar2,iVar4,iVar3,uVar5,uVar6);
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 8;
  if (0xff < iVar2 + 8) {
    param_1[2] = 0xff;
  }
  iVar2 = param_1[3];
  param_1[3] = iVar2 + -8;
  if (iVar2 + -8 < 0) {
    param_1[3] = 0xff;
  }
  return pcVar7;
}


