/* Function: FUN_80029f38 */
/* Address: 80029f38 */

void FUN_80029f38(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 local_18;
  undefined1 auStack_14 [4];
  
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd9c >> (3 - uVar2) * 8;
  auStack_28 = (undefined1  [4])DAT_8001bd9c;
  puVar1 = auStack_24 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bda0 >> (3 - uVar2) * 8;
  auStack_24 = (undefined1  [4])DAT_8001bda0;
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bda4 >> (3 - uVar2) * 8;
  auStack_20 = (undefined1  [4])DAT_8001bda4;
  puVar1 = auStack_1c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bda8 >> (3 - uVar2) * 8;
  auStack_1c = (undefined1  [4])DAT_8001bda8;
  iVar3 = GetRaceSprite1();
  g_SubState2 = g_SubState2 + 1;
  DrawSprite(g_ReplayTrackBuffer + 0xb4,0xffffffb0,0xffffff5a,g_MenuAnimPtr + 4);
  GetMenuItemColor(&local_18,auStack_14,g_ColorCycle,0xffffffff);
  DrawSpriteEx(g_ReplayTrackBuffer + 0x50,0xffffff20,0xffffff7c,g_MenuAnimPtr + 4,local_18,
               0xffffffff,0xffffffff);
  FUN_8002b02c(iVar3 + 0x144,auStack_28,g_MenuAnimPtr + 4);
  FUN_8002b02c(iVar3 + 0x154,auStack_20,g_MenuAnimPtr + 4);
  return;
}


