/* Function: SetupGhostRaceBuffers */
/* Address: 8007999c */

void SetupGhostRaceBuffers(undefined1 param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
  psVar3 = (short *)FUN_80067250();
  iVar4 = FUN_80067184();
  iVar5 = GetRaceSprite1();
  iVar6 = GetGhostCarData();
  iVar8 = 0;
  DrawRaceSprite(iVar4,iVar4 + 8,iVar5 + 0xc,iVar5 + 0x10,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x10,iVar4 + 0x18,iVar5 + 0xc,iVar5 + 0x10,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x20,iVar4 + 0x28,iVar5 + 0x14,iVar5 + 0x18,param_1,g_MenuAnimPtr + 4);
  do {
    sVar2 = *psVar3;
    psVar1 = psVar3 + 1;
    psVar3 = psVar3 + 2;
    pbVar7 = (byte *)(iVar6 + iVar8);
    iVar8 = iVar8 + 1;
    DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar7 * 0x14,(int)sVar2,(int)*psVar1,g_MenuAnimPtr + 4,0
                 ,0xffffffff,0xffffffff);
  } while (iVar8 != 2);
  return;
}


