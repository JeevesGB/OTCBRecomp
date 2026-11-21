/* Function: VsyncWait */
/* Address: 80055570 */

void VsyncWait(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  short *psVar9;
  
  iVar1 = g_DisplayConfig;
  psVar9 = *(short **)(g_DisplayConfig + 0x1c);
  DAT_800cbbb0 = DAT_800cbbb0 + 1;
  g_FrameCount = (u_long *)FUN_80058de4(DAT_800cbaf4,psVar9);
  DAT_800cbb84 = *(ushort *)(iVar1 + 0x20) ^ 1;
  *(ushort *)(iVar1 + 0x20) = DAT_800cbb84;
  puVar4 = *(undefined4 **)(iVar1 + ((int)((uint)DAT_800cbb84 << 0x10) >> 0xe) + 0x24);
  DAT_800cbaf4 = puVar4;
  lVar2 = GetRCnt(0xf2000001);
  DAT_800cbb08 = (*(short *)(g_DisplayConfig + 0x16) - g_VsyncCount) * 0xf0 - lVar2;
  if (*(short *)(iVar1 + 0xe) == 0) {
    DrawSync(0);
    FUN_80058f20(puVar4,psVar9);
  }
  iVar8 = (int)*psVar9;
  iVar5 = 0;
  if (0 < iVar8) {
    puVar7 = &g_RaceOTPtr1;
    puVar6 = puVar4;
    do {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
    } while (iVar5 < iVar8);
  }
  g_OTBasePtr = (&g_RaceOTPtr1)[iVar8 + -1];
  g_VRAMRectPtr = puVar4[6];
  VSync(0);
  SetDispMask((uint)(g_DisplayActive == 0));
  if (g_VsyncCount < *(short *)(iVar1 + 0x16)) {
    do {
      VSync(0);
    } while (g_VsyncCount < *(short *)(iVar1 + 0x16));
  }
  g_VsyncCount = 0;
  if (*(short *)(iVar1 + 0xe) == 0) {
    g_DisplayBufferIndex = *(ushort *)(iVar1 + 0x22) ^ 1;
    *(ushort *)(iVar1 + 0x22) = g_DisplayBufferIndex;
    g_CurrentOT = *(DRAWENV **)(iVar1 + ((int)((uint)g_DisplayBufferIndex << 0x10) >> 0xe) + 0x2c);
    PutDispEnv((DISPENV *)(g_CurrentOT + 1));
    PutDrawEnv(g_CurrentOT);
    if (g_FrameCount != (u_long *)0x0) {
      DrawOTag(g_FrameCount);
    }
  }
  else {
    FUN_80058f20(puVar4,psVar9);
  }
  InitControllerPorts();
  return;
}


