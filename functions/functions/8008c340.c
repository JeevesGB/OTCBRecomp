/* Function: FUN_8008c340 */
/* Address: 8008c340 */

void FUN_8008c340(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  uint local_28;
  undefined4 local_24;
  
  puVar7 = (uint *)FUN_800672e0();
  pbVar8 = (byte *)FUN_80067428();
  iVar9 = GetRaceSprite1();
  auStack_30 = (undefined1  [4])*puVar7;
  local_28 = (uint)auStack_30;
  local_24 = CONCAT22(*(undefined2 *)((uint)*pbVar8 * 0x14 + g_CarModelBuffer + 6),
                      *(undefined2 *)((uint)*pbVar8 * 0x14 + g_CarModelBuffer + 4));
  uVar6 = local_24;
  puVar1 = auStack_30 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | (uint)auStack_30 >> (3 - uVar5) * 8;
  puVar1 = auStack_2c + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | uVar6 >> (3 - uVar5) * 8;
  auStack_2c = (undefined1  [4])uVar6;
  uVar10 = GetCarBaseColor();
  FUN_80065cb8(g_CarModelBuffer + (uint)*pbVar8 * 0x14,auStack_30,auStack_30,iVar9 + 0x5c,
               iVar9 + 0x60,uVar10,g_MenuAnimPtr + 4);
  if (param_2 == 0) {
    DrawSpriteEx(g_CarModelBuffer + (uint)pbVar8[param_3 + 9] * 0x14,(int)(short)puVar7[1],
                 (int)*(short *)((int)puVar7 + 6),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)pbVar8[0x11] * 0x14,(int)(short)puVar7[2],
                 (int)*(short *)((int)puVar7 + 10),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    bVar2 = pbVar8[0x13];
    sVar4 = (short)puVar7[4];
    sVar3 = *(short *)((int)puVar7 + 0x12);
  }
  else {
    DrawSpriteEx(g_CarModelBuffer + (uint)pbVar8[param_3 + 1] * 0x14,(int)(short)puVar7[1],
                 (int)*(short *)((int)puVar7 + 6),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)pbVar8[0x12] * 0x14,(int)(short)puVar7[param_2 + 2],
                 (int)*(short *)((int)puVar7 + param_2 * 4 + 10),g_MenuAnimPtr + 4,0,0xffffffff,
                 0xffffffff);
    bVar2 = pbVar8[0x13];
    sVar4 = (short)puVar7[param_2 + 4];
    sVar3 = *(short *)((int)puVar7 + param_2 * 4 + 0x12);
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)bVar2 * 0x14,(int)sVar4,(int)sVar3,g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  return;
}


