/* Function: FUN_8006e570 */
/* Address: 8006e570 */

void FUN_8006e570(undefined4 param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = GetCarPositionData();
  iVar4 = GetSelectedCarData();
  pbVar5 = (byte *)FUN_800678c0(param_1);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 2) * 0x14,(int)*(short *)(iVar3 + 0x8c),
               (int)*(short *)(iVar3 + 0x8e),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 3) * 0x14,(int)*(short *)(iVar3 + 0x90),
               (int)*(short *)(iVar3 + 0x92),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 4) * 0x14,(int)*(short *)(iVar3 + 0x94),
               (int)*(short *)(iVar3 + 0x96),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  uVar7 = 0;
  iVar6 = iVar3;
  if (*pbVar5 != 0) {
    do {
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 5) * 0x14,
                   (int)*(short *)(iVar6 + 0x98),(int)*(short *)(iVar6 + 0x9a),g_MenuAnimPtr + 4,
                   uVar7,0xffffffff,0xffffffff);
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar7 != *pbVar5);
  }
  uVar7 = 0;
  iVar6 = iVar3;
  if (pbVar5[1] != 0) {
    do {
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 5) * 0x14,
                   (int)*(short *)(iVar6 + 0xc0),(int)*(short *)(iVar6 + 0xc2),g_MenuAnimPtr + 4,
                   uVar7,0xffffffff,0xffffffff);
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar7 != pbVar5[1]);
  }
  uVar7 = 0;
  if (pbVar5[2] != 0) {
    do {
      psVar1 = (short *)(iVar3 + 0xe8);
      psVar2 = (short *)(iVar3 + 0xea);
      iVar3 = iVar3 + 4;
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 5) * 0x14,(int)*psVar1,(int)*psVar2,
                   g_MenuAnimPtr + 4,uVar7,0xffffffff,0xffffffff);
      uVar7 = uVar7 + 1;
    } while (uVar7 != pbVar5[2]);
  }
  iVar6 = GetRaceSprite1();
  iVar3 = GetRaceSprite2();
  DrawSpriteScaled(iVar6 + 4,iVar3 + 0x1e8,g_RaceOTPtr1 + 4);
  return;
}


