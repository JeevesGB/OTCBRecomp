/* Function: InitGearDisplay */
/* Address: 80087340 */

void InitGearDisplay(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  char acStack_60 [64];
  
  iVar1 = FUN_800672bc();
  iVar2 = GetCarSpriteData();
  iVar3 = GetCarData();
  psVar4 = (short *)FUN_800672bc();
  pbVar5 = (byte *)GetCarSpriteData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar5 * 0x14,(int)*psVar4,(int)psVar4[1],g_MenuAnimPtr + 4
               ,0,0xffffffff,0xffffffff);
  if (*(char *)(iVar3 + 3) == '\0') {
    pbVar5 = (byte *)GetSelectedCarPtr();
    FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar2 + (uint)*pbVar5 + 2) * 0x14,
                 (int)*(short *)(iVar1 + 4),(int)*(short *)(iVar1 + 6),0xa0,0x50,g_MenuAnimPtr + 4);
  }
  puVar6 = (undefined4 *)FUN_80069778();
  sprintf(acStack_60,"%d",*puVar6);
  FUN_80058a88(acStack_60,(int)*(short *)(iVar1 + 0x19c),(int)*(short *)(iVar1 + 0x19e));
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x53) * 0x14,
               (int)*(short *)(iVar1 + 0x194),(int)*(short *)(iVar1 + 0x196),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x54) * 0x14,
               (int)*(short *)(iVar1 + 0x198),(int)*(short *)(iVar1 + 0x19a),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x55) * 0x14,
               (int)*(short *)(iVar1 + 0x1a0),(int)*(short *)(iVar1 + 0x1a2),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  return;
}


