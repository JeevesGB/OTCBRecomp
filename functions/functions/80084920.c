/* Function: FUN_80084920 */
/* Address: 80084920 */

void FUN_80084920(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar1 = GetRaceSprite1();
  iVar2 = FUN_800671cc();
  iVar3 = GetCarSpriteData();
  iVar4 = FUN_800672bc();
  if (param_3 != -1) {
    iVar5 = iVar4 + param_3 * 4;
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + param_3 + 0xe) * 0x14,
                 (int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar5 + 0x5c),
                 (int)*(short *)(iVar4 + 10) + (int)*(short *)(iVar5 + 0x5e),g_MenuAnimPtr + 4,8,
                 0xffffffff,0xffffffff);
  }
  if (param_4 != -1) {
    iVar7 = iVar3 + 0x1a;
    pbVar9 = (byte *)(*(int *)(param_3 * 8 + param_2 + 4) + param_4);
    uVar6 = (uint)*pbVar9;
    iVar5 = iVar4 + uVar6 * 4;
    iVar8 = (int)*(short *)(iVar4 + 0xc) + (int)*(short *)(iVar5 + 0x8c);
    iVar5 = (int)*(short *)(iVar4 + 0xe) + (int)*(short *)(iVar5 + 0x8e);
    if (*(char *)(iVar7 + uVar6) == *(char *)(iVar7 + (uint)**(byte **)(param_2 + 4))) {
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + param_4 + 0x37) * 0x14,
                   iVar8 + *(short *)(iVar4 + 0x100),iVar5 + *(short *)(iVar4 + 0x102),
                   g_MenuAnimPtr + 4,8,0xffffffff,0xffffffff);
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar7 + (uint)*pbVar9) * 0x14,iVar8,iVar5,
                 g_MenuAnimPtr + 4,8,0xffffffff,0xffffffff);
  }
  DrawRaceSprite(iVar2 + 0x50,iVar2 + 0x50,iVar1 + 0x4c,iVar1 + 0x50,*param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x58,iVar2 + 0x58,iVar1 + 0x54,iVar1 + 0x58,param_1[1],g_MenuAnimPtr + 4);
  return;
}


