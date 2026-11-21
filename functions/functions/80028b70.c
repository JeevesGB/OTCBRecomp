/* Function: FUN_80028b70 */
/* Address: 80028b70 */

void FUN_80028b70(void)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int local_30;
  
  puVar1 = auStack_40 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd78 >> (3 - uVar3) * 8;
  auStack_40 = (undefined1  [4])DAT_8001bd78;
  puVar1 = auStack_3c + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd7c >> (3 - uVar3) * 8;
  auStack_3c = (undefined1  [4])DAT_8001bd7c;
  puVar1 = auStack_38 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd80 >> (3 - uVar3) * 8;
  auStack_38 = (undefined1  [4])DAT_8001bd80;
  puVar1 = auStack_34 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd84 >> (3 - uVar3) * 8;
  auStack_34 = (undefined1  [4])DAT_8001bd84;
  iVar9 = 0;
  local_30 = GetRaceSprite1();
  g_SubState2 = g_SubState2 + 1;
  DrawSprite(g_ReplaySpriteBuffer + 0x244,0xffffffb0,0xffffff5a,g_MenuAnimPtr + 4);
  psVar4 = &DAT_800ad17c;
  iVar5 = -0x50;
  iVar6 = -0x4e;
  iVar7 = -0x58;
  iVar8 = -0x38;
  do {
    iVar9 = iVar9 + 1;
    DrawSpriteEx(g_ReplaySpriteBuffer + *psVar4 * 0x14,0xfffffee0,iVar5,g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
    DrawSpriteEx(g_ReplaySpriteBuffer + sVar2 * 0x14,0xfffffee2,iVar6,g_MenuAnimPtr + 4,2,0xffffffff
                 ,0xffffffff);
    DrawSprite(g_ReplaySpriteBuffer + 0x294,0xffffff20,iVar7,g_MenuAnimPtr + 4);
    DrawSprite(g_ReplaySpriteBuffer + 0x21c,0xffffff20,iVar8,g_MenuAnimPtr + 4);
    iVar5 = iVar5 + 0x50;
    iVar6 = iVar6 + 0x50;
    iVar7 = iVar7 + 0x50;
    iVar8 = iVar8 + 0x50;
  } while (iVar9 < 3);
  FUN_8002b02c(local_30 + 0x144,auStack_40,g_MenuAnimPtr + 4);
  FUN_8002b02c(local_30 + 0x154,auStack_38,g_MenuAnimPtr + 4);
  return;
}


