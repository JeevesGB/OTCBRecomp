/* Function: InitFrameBuffers */
/* Address: 8002fab4 */

void InitFrameBuffers(void)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  
  FUN_80054b90();
  pvVar2 = g_VRAMRectPtr;
  DAT_800cca82 = 0;
  DAT_800cca8c = 0;
  g_DisplayBufferIdx = 0;
  DAT_800cca84 = 0;
  g_FrameBufferFlag = 0;
  g_VRAMRectBase = g_VRAMRectPtr;
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = (void *)((int)g_VRAMRectPtr + 8);
  *puVar1 = 1;
                    /* Probable PsyQ macro: setDrawTPage() if setlen(p, 1), setDrawMode() if
                       setlen(p, 2). */
  *(undefined4 *)((int)pvVar2 + 4) = 0xe1000600;
  DrawPrim(pvVar2);
  pvVar2 = g_VRAMRectPtr;
  local_18 = 10;
  local_17 = 10;
  local_16 = 10;
  local_20 = 0xff60;
  local_1e = 0xff88;
  local_1c = 0x140;
  local_1a = 0xf0;
  g_VRAMRectPtr = (void *)((int)g_VRAMRectPtr + 0x18);
  FUN_8005759c(pvVar2,&local_18,&local_20);
  DrawPrim(pvVar2);
  iVar5 = 1;
  g_DisplayStateTable = 0;
  if (g_RaceComplete != 0) {
    DAT_800cca94 = 1;
    iVar5 = 2;
  }
  (&g_DisplayStateTable)[iVar5] = 2;
  iVar6 = iVar5 + 1;
  iVar4 = FUN_800463fc();
  if ((iVar4 != 0) || (iVar4 = FUN_8004643c(), iVar4 != 0)) {
    (&g_DisplayStateTable)[iVar6] = 3;
    iVar6 = iVar5 + 2;
  }
  if (g_RaceComplete == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = 5;
  }
  (&g_DisplayStateTable)[iVar6] = uVar3;
  DAT_800cca8e = (short)iVar6 + 1;
  DAT_800ccaa8 = (int)g_VRAMRectPtr + 0x8000;
  DAT_800ccab0 = (u_long *)((int)g_VRAMRectPtr + 0x10000);
  DAT_800ccab4 = (u_long *)((int)g_VRAMRectPtr + 0x10028);
  DAT_800ccaa4 = (int)g_VRAMRectPtr;
  ClearOTag(DAT_800ccab0,10);
  ClearOTag(DAT_800ccab4,10);
  DAT_800ccaac = (&DAT_800ccab0)[DAT_800cca8c];
  SsSetMute('\x01');
  FUN_8005d168(0,0,0);
  FUN_8005d168(1,0,0);
  DrawSync(0);
  PutDrawEnv(*(DRAWENV **)
              (g_DisplayConfig + ((int)((g_DisplayBufferIndex ^ 1) << 0x10) >> 0xe) + 0x2c));
  return;
}


