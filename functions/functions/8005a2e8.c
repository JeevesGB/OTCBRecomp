/* Function: FUN_8005a2e8 */
/* Address: 8005a2e8 */

void FUN_8005a2e8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined1 uVar5;
  
  FadeAudioVolume(0x100 - param_1);
  puVar3 = g_VRAMRectPtr;
  if (*(short *)(g_DisplayConfig + 0xe) == 0) {
    puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
    g_VRAMRectPtr = g_VRAMRectPtr + 6;
    *puVar1 = 5;
                    /* Probable PsyQ macro: setPolyF4() */
    *(undefined1 *)((int)puVar3 + 7) = 0x28;
    iVar2 = g_DisplayConfig;
    *(short *)(puVar3 + 2) = -*(short *)(*(int *)(g_DisplayConfig + 0x2c) + 8);
    *(short *)((int)puVar3 + 10) = -*(short *)(*(int *)(iVar2 + 0x2c) + 10);
    *(short *)(puVar3 + 3) =
         *(short *)(*(int *)(iVar2 + 0x2c) + 0x60) - *(short *)(*(int *)(iVar2 + 0x2c) + 8);
    *(short *)((int)puVar3 + 0xe) = -*(short *)(*(int *)(iVar2 + 0x2c) + 10);
    *(short *)(puVar3 + 4) = -*(short *)(*(int *)(iVar2 + 0x2c) + 8);
    *(short *)((int)puVar3 + 0x12) =
         *(short *)(*(int *)(iVar2 + 0x2c) + 0x62) - *(short *)(*(int *)(iVar2 + 0x2c) + 10);
    *(short *)(puVar3 + 5) =
         *(short *)(*(int *)(iVar2 + 0x2c) + 0x60) - *(short *)(*(int *)(iVar2 + 0x2c) + 8);
    *(short *)((int)puVar3 + 0x16) =
         *(short *)(*(int *)(iVar2 + 0x2c) + 0x62) - *(short *)(*(int *)(iVar2 + 0x2c) + 10);
    if (0xff < param_1) {
      param_1 = 0xff;
    }
    uVar5 = (undefined1)param_1;
    *(undefined1 *)(puVar3 + 1) = uVar5;
    *(undefined1 *)((int)puVar3 + 5) = uVar5;
    *(undefined1 *)((int)puVar3 + 6) = uVar5;
    *(byte *)((int)puVar3 + 7) = *(byte *)((int)puVar3 + 7) | 2;
    iVar2 = g_OTBasePtr;
    iVar4 = g_OTBasePtr + 4;
    *puVar3 = *puVar3 & 0xff000000 | *(uint *)(g_OTBasePtr + 4) & 0xffffff;
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xff000000 | (uint)puVar3 & 0xffffff;
    AddTPagePrim(iVar4,1,0,0x4f);
  }
  return;
}


