/* Function: InitChampionshipDisplay */
/* Address: 800782e0 */

void InitChampionshipDisplay(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  uint local_28;
  undefined4 local_24;
  
  iVar4 = GetRaceSprite1();
  iVar5 = GetChampionshipSpriteData();
  iVar6 = GetChampionshipCarData();
  iVar7 = 0;
  do {
    if (*(char *)(param_1 + iVar7) == 'N') {
      auStack_30 = *(undefined1 (*) [4])(iVar5 + 0x20);
      local_28 = (uint)auStack_30;
      local_24 = CONCAT22(*(undefined2 *)
                           ((uint)*(byte *)(iVar6 + 0xe) * 0x14 + g_CarModelBuffer + 6),
                          *(undefined2 *)
                           ((uint)*(byte *)(iVar6 + 0xe) * 0x14 + g_CarModelBuffer + 4));
      uVar3 = local_24;
      puVar1 = auStack_30 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)auStack_30 >> (3 - uVar2) * 8;
      puVar1 = auStack_2c + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar3 >> (3 - uVar2) * 8;
      auStack_2c = (undefined1  [4])uVar3;
      DrawSpriteScaled(iVar4 + 4,auStack_30,g_RaceOTPtr1 + 4);
    }
    else {
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 0xe) * 0x14,
                   (int)*(short *)(iVar5 + 0x20),(int)*(short *)(iVar5 + 0x22),g_RaceOTPtr1 + 4,0,
                   0xffffffff,0xffffffff);
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar7 != 6);
  return;
}


