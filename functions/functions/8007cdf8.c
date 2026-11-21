/* Function: FUN_8007cdf8 */
/* Address: 8007cdf8 */

void FUN_8007cdf8(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  uint local_68;
  undefined4 local_64;
  char acStack_60 [64];
  
  uVar4 = GetRaceSprite1();
  iVar5 = GetReplaySpritePositions2();
  iVar6 = FUN_800673bc();
  iVar8 = iVar6 + **(int **)(param_1 + 0xc) + -1;
  iVar9 = 0;
  do {
    local_6c = (undefined1  [4])0x0;
    local_70._2_2_ =
         *(short *)(iVar5 + 0x4a) +
         (*(ushort *)((uint)*(byte *)(iVar8 + 2) * 0x14 + g_CarModelBuffer + 6) >> 1);
    local_70._0_2_ =
         *(short *)(iVar5 + 0x48) +
         (*(ushort *)((uint)*(byte *)(iVar8 + 2) * 0x14 + g_CarModelBuffer + 4) >> 1);
    puVar1 = auStack_78 + 3;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)local_70 >> (3 - uVar2) * 8;
    auStack_78 = local_70;
    puVar1 = auStack_74 + 3;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | 0U >> (3 - uVar2) * 8;
    auStack_74 = (undefined1  [4])0x0;
    local_70 = *(undefined1 (*) [4])(iVar5 + 0x48);
    local_68 = (uint)local_70;
    local_64 = CONCAT22(*(short *)((uint)*(byte *)(iVar8 + 2) * 0x14 + g_CarModelBuffer + 6) + 0x10,
                        *(short *)((uint)*(byte *)(iVar8 + 2) * 0x14 + g_CarModelBuffer + 4) + 0x10)
    ;
    uVar3 = local_64;
    puVar1 = local_70 + 3;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)local_70 >> (3 - uVar2) * 8;
    puVar1 = local_6c + 3;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar3 >> (3 - uVar2) * 8;
    local_6c = (undefined1  [4])uVar3;
    iVar10 = iVar9 + 2;
    FUN_80065cb8(g_CarModelBuffer + (uint)*(byte *)(iVar8 + 2) * 0x14,auStack_78,local_70,uVar4,
                 uVar4,iVar9,g_MenuAnimPtr + 4);
    VsyncWait();
    iVar9 = iVar10;
  } while (iVar10 != 0x100);
  puVar7 = (undefined4 *)FUN_80069778();
  sprintf(acStack_60,"%d",*puVar7);
  FUN_80058a88(acStack_60,(int)*(short *)(iVar5 + 0x78),(int)*(short *)(iVar5 + 0x7a));
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 0xd) * 0x14,(int)*(short *)(iVar5 + 0x70),
               (int)*(short *)(iVar5 + 0x72),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 0xe) * 0x14,(int)*(short *)(iVar5 + 0x74),
               (int)*(short *)(iVar5 + 0x76),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  return;
}


