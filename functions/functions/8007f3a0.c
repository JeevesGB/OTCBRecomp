/* Function: InitTuningShopDisplay */
/* Address: 8007f3a0 */

void InitTuningShopDisplay(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  psVar1 = (short *)FUN_80067280();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_80067190();
  pbVar4 = (byte *)FUN_800673c8();
  iVar5 = 0;
  do {
    DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar4 * 0x14,(int)*psVar1,(int)psVar1[1],
                 g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    iVar5 = iVar5 + 1;
    DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[0x12] * 0x14,(int)psVar1[0x14],(int)psVar1[0x15],
                 g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    DrawRaceSpriteEx(iVar3,iVar3,iVar2 + 0x144,iVar2 + 0x144,0xff,g_RaceOTPtr1 + 4);
    DrawRaceSpriteEx(iVar3 + 8,iVar3 + 8,iVar2 + 0x154,iVar2 + 0x154,0xff,g_RaceOTPtr1 + 4);
    VsyncWait();
  } while (iVar5 != 2);
  return;
}


