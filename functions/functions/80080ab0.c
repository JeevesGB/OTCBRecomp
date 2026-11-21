/* Function: FUN_80080ab0 */
/* Address: 80080ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80080ab0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char acStack_68 [64];
  
  iVar1 = GetPartsSpritePositions();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_800671b4();
  pbVar4 = (byte *)FUN_800673ec();
  iVar10 = 0;
  iVar9 = 0;
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar4 * 0x14,(int)*(short *)(iVar1 + 0x28),
               (int)*(short *)(iVar1 + 0x2a),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  iVar8 = 0x78;
  puVar5 = (undefined4 *)FUN_80069778();
  sprintf(acStack_68,"%d",*puVar5);
  FUN_80058a88(acStack_68,(int)*(short *)(iVar1 + 0x48),(int)*(short *)(iVar1 + 0x4a));
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[7] * 0x14,(int)*(short *)(iVar1 + 0x40),
               (int)*(short *)(iVar1 + 0x42),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[8] * 0x14,(int)*(short *)(iVar1 + 0x44),
               (int)*(short *)(iVar1 + 0x46),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  iVar1 = iVar2 + 0xc;
  iVar7 = iVar2 + 0x10;
  DrawRaceSprite(iVar3,iVar3 + 8,iVar1,iVar7,_g_PartsSelectFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar1,iVar7,_g_PartsSelectFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x20,iVar3 + 0x28,iVar1,iVar7,_g_PartsSelectFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar1,iVar7,_g_PartsSelectFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x40,iVar3 + 0x48,iVar2 + 0x14,iVar2 + 0x18,_g_PartsSelectFlag2,
                 g_MenuAnimPtr + 4);
  iVar1 = 0x50;
  FUN_80080624(param_2);
  do {
    if (iVar10 == param_2) {
      iVar7 = iVar2 + 0x1c;
      iVar6 = iVar2 + 0x20;
    }
    else {
      iVar7 = iVar2 + 0x2c;
      iVar6 = iVar2 + 0x30;
    }
    DrawRaceSprite(iVar3 + iVar1,iVar3 + iVar8,iVar7,iVar6,_g_PartsSelectFlag2,g_MenuAnimPtr + 4);
    iVar7 = iVar9 + 0xa0;
    iVar6 = iVar9 + 200;
    iVar9 = iVar9 + 8;
    iVar8 = iVar8 + 8;
    iVar1 = iVar1 + 8;
    iVar10 = iVar10 + 1;
    DrawRaceSpriteEx(iVar3 + iVar7,iVar3 + iVar6,iVar2 + 0xc4,iVar2 + 0xd4,_g_PartsSelectFlag2,
                     g_MenuAnimPtr + 4);
  } while (iVar10 != 5);
  return;
}


