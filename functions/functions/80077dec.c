/* Function: FUN_80077dec */
/* Address: 80077dec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077dec(undefined1 param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  psVar1 = (short *)GetChampionshipSpriteData();
  iVar2 = FUN_80067178();
  iVar3 = GetRaceSprite1();
  pbVar4 = (byte *)GetChampionshipCarData();
  DrawRaceSprite(iVar2,iVar2 + 8,iVar3 + 0xc,iVar3 + 0x10,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x10,iVar2 + 0x18,iVar3 + 0xc,iVar3 + 0x10,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x20,iVar2 + 0x28,iVar3 + 0x14,iVar3 + 0x18,_DAT_800c393c,g_MenuAnimPtr + 4
                );
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar4 * 0x14,(int)*psVar1,(int)psVar1[1],g_RaceOTPtr2 + 4,
               0,0xffffffff,0xffffffff);
  return;
}


