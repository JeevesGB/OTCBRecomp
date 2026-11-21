/* Function: FUN_800300fc */
/* Address: 800300fc */

void FUN_800300fc(void)

{
  uint *puVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  sVar3 = 0x2a;
  iVar7 = 0;
  if (0 < DAT_800ccac2) {
    do {
      sVar4 = (&DAT_800ccac8)[(short)iVar7];
      if ((int)DAT_800ccac0 == (int)(short)iVar7) {
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
      }
      SetActiveSpriteSlot(0,uVar5);
      iVar6 = (int)sVar3;
      sVar3 = sVar3 + 0xc;
      DrawText((&PTR_s_REPLAY_800addf4)[sVar4 * 2],*(undefined4 *)(&DAT_800addf0 + sVar4 * 8),iVar6)
      ;
      iVar7 = iVar7 + 1;
    } while (iVar7 * 0x10000 >> 0x10 < (int)DAT_800ccac2);
  }
  puVar2 = g_VRAMRectPtr;
  puVar1 = g_VRAMRectPtr + 2;
  g_VRAMRectPtr = g_VRAMRectPtr + 6;
  *(undefined2 *)puVar1 = 0xffd0;
  *(undefined2 *)(puVar2 + 4) = 0xffd0;
  *(undefined1 *)((int)puVar2 + 3) = 5;
                    /* Probable PsyQ macro: setPolyF4() */
  *(undefined1 *)((int)puVar2 + 7) = 0x28;
  sVar3 = DAT_800ccac0;
  *(undefined1 *)(puVar2 + 1) = 0x96;
  *(undefined1 *)((int)puVar2 + 5) = 0x69;
  *(undefined2 *)(puVar2 + 3) = 0x31;
  *(undefined2 *)(puVar2 + 5) = 0x31;
  *(undefined1 *)((int)puVar2 + 6) = 0x2d;
  sVar4 = sVar3 * 0xc + 0x29;
  sVar3 = sVar3 * 0xc + 0x35;
  *(short *)((int)puVar2 + 10) = sVar4;
  *(short *)((int)puVar2 + 0xe) = sVar4;
  *(short *)((int)puVar2 + 0x12) = sVar3;
  *(short *)((int)puVar2 + 0x16) = sVar3;
                    /* Probable PsyQ macro: addPrim(). */
  *puVar2 = *puVar2 & 0xff000000 | *(uint *)(g_RaceOTPtr2 + 8) & 0xffffff;
  puVar1 = g_VRAMRectPtr;
  g_VRAMRectPtr = g_VRAMRectPtr + 6;
  *(uint *)(g_RaceOTPtr2 + 8) = *(uint *)(g_RaceOTPtr2 + 8) & 0xff000000 | (uint)puVar2 & 0xffffff;
  *(undefined1 *)((int)puVar1 + 3) = 5;
                    /* Probable PsyQ macro: setPolyF4() */
  *(undefined1 *)((int)puVar1 + 7) = 0x28;
  sVar3 = DAT_800ccac2;
  *(undefined2 *)(puVar1 + 2) = 0xffcf;
  *(undefined2 *)((int)puVar1 + 10) = 0x28;
  *(undefined2 *)(puVar1 + 3) = 0x31;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x28;
  *(undefined2 *)(puVar1 + 4) = 0xffcf;
  sVar3 = sVar3 * 0xc + 0x2a;
  *(short *)((int)puVar1 + 0x12) = sVar3;
  *(short *)((int)puVar1 + 0x16) = sVar3;
  *(undefined2 *)(puVar1 + 5) = 0x31;
  *(undefined1 *)(puVar1 + 1) = 0x3c;
                    /* Possible PsyQ macro: setPolyGT4() */
  *(undefined1 *)((int)puVar1 + 5) = 0x3c;
  *(undefined1 *)((int)puVar1 + 6) = 0x3c;
                    /* Probable PsyQ macro: setPolyF4() + setSemiTrans(polyF4, 1) */
  *(undefined1 *)((int)puVar1 + 7) = 0x2a;
                    /* Probable PsyQ macro: addPrim(). */
  *puVar1 = *puVar1 & 0xff000000 | *(uint *)(g_RaceOTPtr2 + 8) & 0xffffff;
  *(uint *)(g_RaceOTPtr2 + 8) = *(uint *)(g_RaceOTPtr2 + 8) & 0xff000000 | (uint)puVar1 & 0xffffff;
  AddTPagePrim(g_RaceOTPtr2 + 8,1,0,0);
  return;
}


