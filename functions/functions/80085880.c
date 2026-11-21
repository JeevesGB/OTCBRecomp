/* Function: FUN_80085880 */
/* Address: 80085880 */

void FUN_80085880(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined1 param_6,undefined4 param_7,int param_8,int param_9,int param_10,
                 int param_11)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char acStack_78 [64];
  int local_38;
  undefined2 *local_34;
  undefined2 *local_30;
  
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_800672bc();
  local_38 = FUN_800671cc();
  iVar4 = GetCarSpriteData();
  iVar11 = 0;
  iVar12 = 0x108;
  uVar10 = (uint)*(byte *)(*(int *)(param_8 * 8 + param_3 + 4) + param_9);
  FUN_800847f8(param_6);
  local_34 = &DAT_800c3a9a;
  local_30 = &DAT_800c3a54;
  do {
    if (*(char *)(param_5 + iVar11) != '\0') {
      if (iVar11 < (int)(uint)*(byte *)(param_2 + uVar10 * 6)) {
        iVar5 = FUN_8006b614(param_1,param_2,uVar10,iVar11);
        DrawSpriteFlipped((int)*(short *)(iVar3 + 0x11c),(int)*(short *)(iVar3 + 0x11e),local_30,
                          g_MenuAnimPtr + 4);
        DrawSpriteFlipped(*(short *)(iVar3 + 0x11c) + 0x100,(int)*(short *)(iVar3 + 0x11e),local_34,
                          g_MenuAnimPtr + 4);
        bVar1 = FUN_80069548(param_4,uVar10,*(undefined1 *)(param_2 + iVar11 + uVar10 * 6 + 1));
        if (bVar1 == 1) {
          bVar1 = *(byte *)(iVar4 + 0x4d);
LAB_80085a4c:
          DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar3 + 0x164),
                       (int)*(short *)(iVar3 + 0x166),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
        }
        else if (bVar1 < 2) {
          if (bVar1 == 0) {
            sprintf(acStack_78,"%d CP",(uint)*(byte *)(iVar5 + 2));
            FUN_80058a88(acStack_78,*(short *)(iVar3 + 0x134) + 0x20,(int)*(short *)(iVar3 + 0x136))
            ;
          }
        }
        else if (bVar1 == 2) {
          bVar1 = *(byte *)(iVar4 + 0x4e);
          goto LAB_80085a4c;
        }
        if ((param_11 != 0) && ((*(byte *)(iVar5 + 3) & 1) != 0)) {
          DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x4c) * 0x14,
                       (int)*(short *)(iVar3 + 0x14c),(int)*(short *)(iVar3 + 0x14e),
                       g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
        }
        if (*(byte *)(iVar5 + 1) != 0xc) {
          DrawSpriteEx(g_CarModelBuffer +
                       (uint)*(byte *)(iVar4 + (uint)*(byte *)(iVar5 + 1) + 0x3b) * 0x14,
                       (int)*(short *)(iVar3 + 0x104),(int)*(short *)(iVar3 + 0x106),
                       g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
        }
        iVar8 = iVar2 + 0x34;
        if (param_10 == iVar11) {
          uVar6 = GetCarBaseColor();
          iVar8 = iVar2 + 0x24;
          iVar9 = iVar2 + 0x28;
          iVar7 = local_38 + iVar12;
          iVar5 = g_MenuAnimPtr + 4;
        }
        else {
          iVar9 = iVar2 + 0x38;
          uVar6 = 0xff;
          iVar7 = local_38 + iVar12;
          iVar5 = g_MenuAnimPtr + 4;
        }
      }
      else {
        iVar8 = iVar2 + 0x54;
        iVar9 = iVar2 + 0x58;
        uVar6 = 0;
        iVar7 = local_38 + iVar12;
        iVar5 = g_MenuAnimPtr + 4;
      }
      DrawRaceSprite(iVar7,iVar7,iVar8,iVar9,uVar6,iVar5);
    }
    iVar12 = iVar12 + 8;
    iVar3 = iVar3 + 4;
    iVar11 = iVar11 + 1;
    local_34 = local_34 + 7;
    local_30 = local_30 + 7;
    if (iVar11 == 5) {
      return;
    }
  } while( true );
}


