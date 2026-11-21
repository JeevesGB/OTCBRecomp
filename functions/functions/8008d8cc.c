/* Function: FUN_8008d8cc */
/* Address: 8008d8cc */

void FUN_8008d8cc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = FUN_80067298();
  pbVar3 = (byte *)FUN_800673e0();
  iVar4 = GetRaceSprite1();
  iVar5 = GetResultsSpriteData();
  if (param_2 == 1) {
    iVar9 = iVar2 + param_3 * 4;
    uVar6 = (uint)pbVar3[param_3 + 0xc];
    iVar8 = (int)*(short *)(iVar9 + 0x1c);
    iVar9 = (int)*(short *)(iVar9 + 0x1e);
LAB_8008da24:
    iVar7 = g_CarModelBuffer + uVar6 * 0x14;
    iVar10 = g_MenuAnimPtr;
  }
  else {
    if (1 < param_2) {
      if (param_2 == 2) {
        uVar6 = (uint)pbVar3[0x10];
        iVar8 = (int)*(short *)(iVar2 + 0x2c);
        iVar9 = (int)*(short *)(iVar2 + 0x2e);
      }
      else {
        if (param_2 != 3) goto LAB_8008da60;
        uVar6 = (uint)pbVar3[0x11];
        iVar8 = (int)*(short *)(iVar2 + 0x30);
        iVar9 = (int)*(short *)(iVar2 + 0x32);
      }
      goto LAB_8008da24;
    }
    if (param_2 != 0) goto LAB_8008da60;
    DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0xb] * 0x14,(int)*(short *)(iVar2 + 0x18),
                 (int)*(short *)(iVar2 + 0x1a),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    iVar8 = (int)*(short *)(iVar2 + 0x10);
    iVar9 = (int)*(short *)(iVar2 + 0x12);
    iVar7 = g_CarModelBuffer + (uint)pbVar3[7] * 0x14;
    iVar10 = DAT_800cbba0;
  }
  DrawSpriteEx(iVar7,iVar8,iVar9,iVar10 + 4,0,0xffffffff,0xffffffff);
LAB_8008da60:
  if (param_2 == 3) {
    if (DAT_800c3b58 == 0) {
      DAT_800c3b5c = DAT_800c3b5c + 8;
      if (0xff < DAT_800c3b5c) {
        DAT_800c3b58 = 1;
        DAT_800c3b5c = 0xff;
      }
    }
    else {
      DAT_800c3b5c = DAT_800c3b5c + -0x18;
      if (DAT_800c3b5c < 0) {
        DAT_800c3b58 = 0;
        DAT_800c3b5c = 0;
      }
    }
    FUN_80065cb8(g_CarModelBuffer + (uint)pbVar3[1] * 0x14,iVar5 + 0x70,iVar5 + 0x68,iVar4,iVar4,
                 DAT_800c3b5c,g_MenuAnimPtr + 4);
    DrawSpriteScaled(iVar4 + 4,iVar5 + 0x70,g_RaceOTPtr1 + 4);
  }
  else {
    DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar3 * 0x14,(int)*(short *)(iVar2 + 4),
                 (int)*(short *)(iVar2 + 6),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[5] * 0x14,(int)*(short *)(iVar2 + 8),
               (int)*(short *)(iVar2 + 10),DAT_800cbba0 + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[6] * 0x14,(int)*(short *)(iVar2 + 0xc),
               (int)*(short *)(iVar2 + 0xe),DAT_800cbba0 + 4,0,0xffffffff,0xffffffff);
  bVar1 = pbVar3[8];
  if (param_4 != 0) {
    bVar1 = pbVar3[9];
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar2 + 0x14),
               (int)*(short *)(iVar2 + 0x16),g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  return;
}


