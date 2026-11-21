/* Function: FUN_8007138c */
/* Address: 8007138c */

void FUN_8007138c(undefined1 *param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_40 [8];
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar6 = GetCarPositionData();
  iVar7 = GetSelectedCarData();
  local_48 = param_2;
  local_4f = GetCarBaseColor();
  local_46 = 0;
  local_50 = local_48;
  local_4e = 0;
  iVar9 = 0;
  local_47 = local_4f;
  FUN_8006ee80(&local_50,*param_1,param_4,0x4e);
  local_40._0_4_ = *(uint *)(iVar7 + 0xc);
  local_38 = local_40._0_4_;
  puVar1 = local_40 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | (uint)local_40._0_4_ >> (3 - uVar5) * 8;
  do {
    iVar8 = FUN_80069c3c(*param_1,iVar9);
    if (iVar8 == 0) {
      GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,param_4 == iVar9);
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar7 + 0xb) * 0x14,
                   (int)*(short *)(iVar6 + 0x17c),(int)*(short *)(iVar6 + 0x17e),g_RaceOTPtr2 + 4,1,
                   0xffffffff,local_2c);
      bVar2 = local_40[iVar9];
      sVar3 = *(short *)(iVar6 + 0x19c);
      sVar4 = *(short *)(iVar6 + 0x19e);
      uVar10 = 1;
    }
    else {
      GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,param_4 == iVar9);
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar7 + 0xb) * 0x14,
                   (int)*(short *)(iVar6 + 0x17c),(int)*(short *)(iVar6 + 0x17e),g_RaceOTPtr2 + 4,
                   local_30,0xffffffff,local_2c);
      bVar2 = local_40[iVar9];
      sVar3 = *(short *)(iVar6 + 0x19c);
      sVar4 = *(short *)(iVar6 + 0x19e);
      uVar10 = local_30;
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)bVar2 * 0x14,(int)sVar3,(int)sVar4,g_RaceOTPtr2 + 4,uVar10
                 ,0xffffffff,local_2c);
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar9 != 4);
  return;
}


