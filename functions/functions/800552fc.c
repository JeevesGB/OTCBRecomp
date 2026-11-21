/* Function: InitRenderer */
/* Address: 800552fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitRenderer(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  g_FrameCount = 0;
  g_DrawBuffer = 0;
  BreakDraw();
  VSync(0);
  ResetGraph(0);
  InitGPU_Pre();
  VSyncCallback((f *)&LAB_800562e0);
  InitGPU_Post();
  g_DisplayConfig = param_1;
  uVar2 = MemAllocAligned(0x1c);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = MemAllocAligned(0x1c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = MemAllocAligned(*(int *)(param_1 + 0x18) >> 1);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18) = uVar2;
  uVar2 = MemAllocAligned(*(int *)(param_1 + 0x18) >> 1);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18) = uVar2;
  uVar2 = MemAllocAligned(0x70);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = MemAllocAligned(0x70);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  SetupDrawEnvs(param_1);
  DAT_800cbb84 = 0;
  DAT_800cbaf4 = *(undefined4 **)(param_1 + 0x24);
  g_CurrentOT = *(undefined4 *)(param_1 + 0x2c);
  *(undefined2 *)(param_1 + 0x20) = 0;
  g_DisplayBufferIndex = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  InitOrderingTable(DAT_800cbaf4,*(undefined4 *)(param_1 + 0x1c));
  InitOrderingTable(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  CopyOrderingTable(DAT_800cbaf4,*(undefined4 *)(param_1 + 0x1c));
  iVar3 = 0;
  if (0 < **(short **)(param_1 + 0x1c)) {
    puVar5 = &g_RaceOTPtr1;
    puVar4 = DAT_800cbaf4;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar2;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < **(short **)(param_1 + 0x1c));
  }
  g_OTBasePtr = (&g_RaceOTPtr1)[iVar3 + -1];
  g_VRAMRectPtr = DAT_800cbaf4[6];
  _GTE_IR0 = _g_MatrixScaleX;
  DMA_OTC_MADR = g_TranslateX;
  DMA_OTC_BCR = g_TranslateY;
  DMA_OTC_CHCR = g_TranslateZ;
  GTE_VZ1 = (undefined2)((uint)g_MatrixRotXZ >> 0x10);
  GTE_VXY1 = (undefined2)g_MatrixRotXZ;
  GTE_RGB = (undefined2)g_MatrixRotXY;
  GTE_VZ2 = (undefined2)((uint)g_MatrixScaleY >> 0x10);
  GTE_OTZ = (undefined2)((uint)g_MatrixRotXY >> 0x10);
  uVar1 = GTE_OTZ;
  _GTE_VXY0 = CONCAT22(GTE_VZ1,(short)g_MatrixScaleZ);
  uVar2 = CONCAT22((short)((uint)g_MatrixScaleZ >> 0x10),GTE_RGB);
  _GTE_RGB = CONCAT22(GTE_VZ2,GTE_VXY1);
  _GTE_VXY2 = CONCAT22(uVar1,(short)g_MatrixScaleY);
  _GTE_VXY1 = uVar2;
  FlushRenderer();
  VSync(0);
  InitGPU_Pre();
  VSyncCallback((f *)&VsyncHandler);
  InitGPU_Post();
  InitControllerPorts();
  return;
}


