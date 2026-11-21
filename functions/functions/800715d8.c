/* Function: FUN_800715d8 */
/* Address: 800715d8 */

void FUN_800715d8(undefined1 *param_1,char param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  local_30 = GetCarPositionData();
  local_2c = GetSelectedCarData();
  piVar3 = (int *)FUN_800679a4(*param_1,param_1[1]);
  if (param_2 != -1) {
    iVar4 = GetRaceSprite2();
    iVar5 = GetRaceSprite1();
    DrawRaceSprite(iVar4,iVar4 + 8,iVar5 + 0xc,iVar5 + 0x10,param_2,g_MenuAnimPtr + 4);
    DrawRaceSprite(iVar4 + 0x10,iVar4 + 0x18,iVar5 + 0xc,iVar5 + 0x10,param_2,g_MenuAnimPtr + 4);
    iVar4 = GetRaceSprite2();
    iVar5 = GetRaceSprite1();
    DrawRaceSprite(iVar4 + 0x30,iVar4 + 0x38,iVar5 + 0xc,iVar5 + 0x10,param_2,g_RaceOTPtr2 + 4);
  }
  if ((g_RaceFrameCount & 1) == 0) {
    local_40 = 0xff;
    local_3f = 0xff;
    local_46 = GetCarBaseColor();
    local_48 = local_40;
    local_47 = local_3f;
    local_3e = local_46;
    FUN_8006f13c(&local_48,*param_1,param_1[1],*(undefined1 *)(piVar3[1] + param_4));
    iVar5 = 0;
    iVar4 = local_30;
    if (*piVar3 != 0) {
      do {
        bVar1 = *(byte *)(local_2c + iVar5 + 0x1f);
        GetMenuItemColor(&local_38,&local_34,g_RaceColorCycle,param_4 == iVar5);
        cVar2 = IsReplaySlotFull(*(undefined1 *)(piVar3[1] + iVar5));
        if (cVar2 == '\0') {
          local_38 = 1;
        }
        if (param_4 == iVar5) {
          DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar4 + 0x1ac),
                       (int)*(short *)(iVar4 + 0x1ae),g_RaceOTPtr2 + 4,local_38,0xffffffff,local_34)
          ;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 != *piVar3);
    }
  }
  return;
}


