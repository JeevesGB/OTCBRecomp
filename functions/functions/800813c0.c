/* Function: FUN_800813c0 */
/* Address: 800813c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800813c0(byte param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  char acStack_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  byte local_30;
  byte *local_2c;
  
  local_30 = param_1;
  iVar3 = GetRaceSprite1();
  psVar4 = (short *)FUN_800672b0();
  iVar5 = FUN_800671c0();
  local_2c = (byte *)FUN_800673f8();
  DrawSpriteEx(g_CarModelBuffer + (uint)*local_2c * 0x14,(int)*psVar4,(int)psVar4[1],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  iVar10 = iVar3 + 0xc;
  iVar11 = iVar3 + 0x10;
  DrawRaceSprite(iVar5,iVar5 + 8,iVar10,iVar11,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar5 + 0x10,iVar5 + 0x18,iVar10,iVar11,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar5 + 0x20,iVar5 + 0x28,iVar10,iVar11,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar5 + 0x30,iVar5 + 0x38,iVar10,iVar11,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar5 + 0x40,iVar5 + 0x48,iVar3 + 0x14,iVar3 + 0x18,_g_AnimTimer,g_MenuAnimPtr + 4)
  ;
  iVar10 = 0;
  psVar12 = psVar4;
  do {
    if (param_2 == iVar10) {
      uVar6 = GetCarBaseColor();
      iVar8 = iVar3 + 0x1c;
      iVar9 = iVar3 + 0x20;
      iVar11 = param_2;
    }
    else {
      iVar8 = iVar3 + 0x34;
      iVar9 = iVar3 + 0x38;
      uVar6 = (uint)local_30;
      iVar11 = iVar10;
    }
    iVar11 = iVar5 + iVar11 * 8 + 0x80;
    FUN_800650e0(iVar11,iVar11,4,3,iVar8,iVar9,uVar6,g_MenuAnimPtr + 4);
    psVar1 = psVar12 + 4;
    psVar2 = psVar12 + 5;
    psVar12 = psVar12 + 2;
    iVar11 = iVar10 + 1;
    DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[iVar10 + 5] * 0x14,(int)*psVar1,(int)*psVar2,
                 g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    iVar10 = iVar11;
  } while (iVar11 != 0xc);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd44,param_2 == 0xc);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[0x1f] * 0x14,(int)psVar4[0x38],(int)psVar4[0x39],
               g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  puVar7 = (undefined4 *)FUN_80069778();
  sprintf(acStack_78,"%d",*puVar7);
  FUN_80058a88(acStack_78,(int)psVar4[0x34],(int)psVar4[0x35]);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[0x1c] * 0x14,(int)psVar4[0x30],(int)psVar4[0x31],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[0x1d] * 0x14,(int)psVar4[0x32],(int)psVar4[0x33],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[0x1e] * 0x14,(int)psVar4[0x36],(int)psVar4[0x37],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[0x19] * 0x14,(int)psVar4[0x2a],(int)psVar4[0x2b],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_2c[1] * 0x14,(int)psVar4[2],(int)psVar4[3],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawRaceSpriteEx(iVar5 + 0x50,iVar5 + 0x58,iVar3 + 0xc4,iVar3 + 0xd4,local_30,g_MenuAnimPtr + 4);
  return;
}


