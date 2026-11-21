/* Function: FUN_8008299c */
/* Address: 8008299c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008299c(undefined1 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined1 uVar2;
  short *psVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  short **ppsVar9;
  int iVar10;
  int iVar11;
  uint local_d0 [4];
  uint local_c0;
  uint local_bc;
  short *local_b8 [4];
  short *local_a8;
  short *local_a4;
  short *local_a0 [4];
  short *local_90;
  short *local_8c;
  int local_88 [4];
  undefined4 local_78;
  int local_70 [4];
  undefined4 local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  int *local_30;
  
  local_38 = param_1;
  local_34 = GetRaceSprite1();
  psVar3 = (short *)FUN_800672c8();
  iVar4 = FUN_800671d8();
  pbVar5 = (byte *)FUN_80067410();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar5 * 0x14,(int)*psVar3,(int)psVar3[1],g_MenuAnimPtr + 4
               ,0,0xffffffff,0xffffffff);
  local_d0[0] = (uint)pbVar5[1];
  local_d0[1] = (uint)pbVar5[2];
  local_d0[2] = (uint)pbVar5[3];
  local_d0[3] = (uint)pbVar5[4];
  local_c0 = (uint)pbVar5[5];
  local_bc = (uint)pbVar5[6];
  local_b8[0] = psVar3 + 2;
  local_b8[1] = psVar3 + 4;
  local_b8[2] = psVar3 + 6;
  local_b8[3] = psVar3 + 8;
  local_a8 = psVar3 + 10;
  local_a4 = psVar3 + 0xc;
  local_a0[0] = psVar3 + 0xe;
  local_a0[1] = psVar3 + 0x10;
  local_a0[2] = psVar3 + 0x12;
  local_a0[3] = psVar3 + 0x14;
  local_90 = psVar3 + 0x16;
  local_8c = psVar3 + 0x18;
  local_30 = &local_58;
  local_88[0] = *(int *)(param_2 + 8);
  local_88[1] = *(undefined4 *)(param_2 + 0x10);
  local_88[2] = *(undefined4 *)(param_2 + 0x18);
  local_88[3] = *(undefined4 *)(param_2 + 0x20);
  local_78 = *(undefined4 *)(param_2 + 0x28);
  iVar11 = 0;
  local_58 = *(int *)(param_2 + 0xc);
  local_54 = *(undefined4 *)(param_2 + 0x14);
  ppsVar9 = local_b8;
  local_50 = *(undefined4 *)(param_2 + 0x1c);
  iVar10 = 0;
  local_4c = *(undefined4 *)(param_2 + 0x24);
  local_48 = *(undefined4 *)(param_2 + 0x2c);
  local_70[0] = *(int *)(param_2 + 0xc);
  local_70[1] = *(undefined4 *)(param_2 + 0x14);
  local_70[2] = *(undefined4 *)(param_2 + 0x1c);
  local_70[3] = *(undefined4 *)(param_2 + 0x24);
  local_60 = *(undefined4 *)(param_2 + 0x2c);
  do {
    if (*(char *)(param_3 + iVar11) != '\0') {
      bVar1 = param_4 == iVar11;
      if (iVar11 != 5) {
        iVar8 = *(int *)((int)local_88 + iVar10);
        if (iVar8 == 0) {
          pcVar7 = "%d";
          iVar8 = 0;
        }
        else {
          pcVar7 = "%+d";
        }
        sprintf((char *)&local_58,pcVar7,iVar8);
        FUN_80058a88(local_30,(int)**ppsVar9 + (int)psVar3[0x1e],
                     (int)(*ppsVar9)[1] + (int)psVar3[0x1f]);
        iVar8 = *(int *)((int)local_70 + iVar10);
        if (iVar8 == 0) {
          pcVar7 = "%d";
          iVar8 = 0;
        }
        else {
          pcVar7 = "%+d";
        }
        sprintf((char *)local_30,pcVar7,iVar8);
        FUN_80058a88(&local_58,(int)**ppsVar9 + (int)psVar3[0x20],
                     (int)(*ppsVar9)[1] + (int)psVar3[0x21]);
        if (!bVar1) {
          local_40 = 0;
        }
        else {
          local_40 = 1;
        }
        local_40 = (uint)bVar1;
        if (*(char *)(param_2 + 0xb8) == '\0') {
          local_40 = 0;
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)pbVar5[0x19] * 0x14,(int)**ppsVar9 + (int)psVar3[0x1a]
                     ,(int)(*ppsVar9)[1] + (int)psVar3[0x1b],g_MenuAnimPtr + 4,local_40,0xffffffff,
                     0x80);
        DrawSpriteEx(g_CarModelBuffer + (uint)pbVar5[0x1a] * 0x14,(int)**ppsVar9 + (int)psVar3[0x1c]
                     ,(int)(*ppsVar9)[1] + (int)psVar3[0x1d],g_MenuAnimPtr + 4,local_40,0xffffffff,
                     0x80);
      }
      GetMenuItemColor(&local_40,&local_3c,DAT_800cdd50,bVar1);
      if (bVar1) {
        local_40 = 8;
      }
      else {
        local_40 = 0;
      }
      if (*(char *)(param_2 + 0xb8) == '\0') {
        local_40 = 0;
      }
      DrawSpriteEx(g_CarModelBuffer + *(int *)((int)local_d0 + iVar10) * 0x14,
                   (int)**ppsVar9 + (int)**(short **)((int)local_a0 + iVar10),
                   (int)(*ppsVar9)[1] + (int)(*(short **)((int)local_a0 + iVar10))[1],
                   g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
      GetMenuItemColor(&local_40,&local_3c,DAT_800cdd50,bVar1);
      if (!bVar1) {
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
      local_40 = (uint)bVar1;
      if (*(char *)(param_2 + 0xb8) == '\0') {
        local_40 = 2;
      }
      DrawSpriteEx(g_CarModelBuffer + (uint)pbVar5[0x18] * 0x14,(int)**ppsVar9,(int)(*ppsVar9)[1],
                   g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
    }
    ppsVar9 = ppsVar9 + 1;
    iVar10 = iVar10 + 4;
    iVar11 = iVar11 + 1;
    param_2 = param_2 + 1;
  } while (iVar11 != 6);
  puVar6 = (undefined4 *)FUN_80069778();
  sprintf((char *)local_d0,"%d",*puVar6);
  FUN_80058a88(local_d0,(int)psVar3[0x40],(int)psVar3[0x41]);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar5[0x1b] * 0x14,(int)psVar3[0x3c],(int)psVar3[0x3d],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar5[0x1c] * 0x14,(int)psVar3[0x3e],(int)psVar3[0x3f],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar5[0x1d] * 0x14,(int)psVar3[0x42],(int)psVar3[0x43],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  uVar2 = local_38;
  iVar10 = local_34 + 0xc;
  iVar11 = local_34 + 0x10;
  DrawRaceSprite(iVar4,iVar4 + 8,iVar10,iVar11,local_38,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x10,iVar4 + 0x18,iVar10,iVar11,uVar2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x20,iVar4 + 0x28,iVar10,iVar11,uVar2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x30,iVar4 + 0x38,iVar10,iVar11,uVar2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x40,iVar4 + 0x48,local_34 + 0x14,local_34 + 0x18,_g_CarTuningFlag,
                 g_MenuAnimPtr + 4);
  return;
}


