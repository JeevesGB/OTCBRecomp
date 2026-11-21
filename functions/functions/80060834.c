/* Function: FUN_80060834 */
/* Address: 80060834 */

void FUN_80060834(uint param_1,short param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined2 local_20;
  short local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  uVar6 = param_1 & 7;
  if (((param_1 & 0x8000) != 0) && (DAT_800cbbb0 % 9 < 1)) {
    uVar6 = 5;
  }
  local_1c = 400;
  iVar7 = uVar6 * 4;
  local_1a = 0x26;
  local_20 = 0xff38;
  local_1e = param_2;
  DrawSpriteScaled((undefined1 *)(iVar7 + -0x7ff4a664),&local_20,g_MenuAnimPtr + 4);
  puVar3 = g_VRAMRectPtr;
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = g_VRAMRectPtr + 9;
  *puVar1 = 8;
                    /* Probable PsyQ macro: setPolyG4() */
  *(undefined1 *)((int)puVar3 + 7) = 0x38;
  puVar4 = g_VRAMRectPtr;
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = g_VRAMRectPtr + 9;
  *puVar1 = 8;
                    /* Probable PsyQ macro: setPolyG4() */
  *(undefined1 *)((int)puVar4 + 7) = 0x38;
  *(undefined1 *)((int)puVar4 + 0x1e) = 0;
  *(undefined1 *)((int)puVar4 + 0xe) = 0;
  *(undefined1 *)((int)puVar4 + 0x1d) = 0;
  *(undefined1 *)((int)puVar4 + 0xd) = 0;
  *(undefined1 *)(puVar4 + 7) = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined1 *)((int)puVar3 + 0x16) = 0;
  *(undefined1 *)((int)puVar3 + 6) = 0;
  *(undefined1 *)((int)puVar3 + 0x15) = 0;
  *(undefined1 *)((int)puVar3 + 5) = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  uVar2 = *(undefined1 *)(iVar7 + -0x7ff4a664);
  *(undefined1 *)(puVar4 + 5) = uVar2;
  *(undefined1 *)(puVar4 + 1) = uVar2;
  *(undefined1 *)(puVar3 + 7) = uVar2;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  uVar2 = *(undefined1 *)(iVar7 + -0x7ff4a663);
  *(undefined1 *)((int)puVar4 + 0x15) = uVar2;
  *(undefined1 *)((int)puVar4 + 5) = uVar2;
  *(undefined1 *)((int)puVar3 + 0x1d) = uVar2;
  *(undefined1 *)((int)puVar3 + 0xd) = uVar2;
  uVar2 = *(undefined1 *)(iVar7 + -0x7ff4a662);
  *(undefined1 *)((int)puVar4 + 0x16) = uVar2;
  *(undefined1 *)((int)puVar4 + 6) = uVar2;
  *(undefined1 *)((int)puVar3 + 0x1e) = uVar2;
  *(undefined1 *)((int)puVar3 + 0xe) = uVar2;
  *(undefined2 *)(puVar3 + 2) = 0xff1a;
  *(undefined2 *)(puVar3 + 6) = 0xff1a;
  sVar5 = param_2 + 0x26;
  *(short *)((int)puVar3 + 10) = param_2;
  *(undefined2 *)(puVar3 + 4) = 0xff38;
  *(short *)((int)puVar3 + 0x12) = param_2;
  *(short *)((int)puVar3 + 0x1a) = sVar5;
  *(undefined2 *)(puVar3 + 8) = 0xff38;
  *(short *)((int)puVar3 + 0x22) = sVar5;
  *(undefined2 *)(puVar4 + 2) = 200;
  *(undefined2 *)(puVar4 + 6) = 200;
  *(short *)((int)puVar4 + 10) = param_2;
  *(undefined2 *)(puVar4 + 4) = 0xe6;
  *(short *)((int)puVar4 + 0x12) = param_2;
  *(short *)((int)puVar4 + 0x1a) = sVar5;
  *(undefined2 *)(puVar4 + 8) = 0xe6;
  *(short *)((int)puVar4 + 0x22) = sVar5;
                    /* Probable PsyQ macro: addPrim(). */
  *puVar3 = *puVar3 & 0xff000000 | *(uint *)(g_MenuAnimPtr + 4) & 0xffffff;
  *(uint *)(g_MenuAnimPtr + 4) = *(uint *)(g_MenuAnimPtr + 4) & 0xff000000 | (uint)puVar3 & 0xffffff
  ;
                    /* Probable PsyQ macro: addPrim(). */
  *puVar4 = *puVar4 & 0xff000000 | *(uint *)(g_MenuAnimPtr + 4) & 0xffffff;
  *(uint *)(g_MenuAnimPtr + 4) = *(uint *)(g_MenuAnimPtr + 4) & 0xff000000 | (uint)puVar4 & 0xffffff
  ;
  return;
}


