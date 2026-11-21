/* Function: FUN_80071828 */
/* Address: 80071828 */

void FUN_80071828(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = GetCarPositionData();
  iVar4 = GetSelectedCarData();
  piVar5 = (int *)FUN_800679a4(*param_1,param_1[1]);
  if ((g_RaceFrameCount & 1) != 0) {
    local_38 = 0xff;
    local_37 = 0xff;
    local_3e = GetCarBaseColor();
    local_40 = local_38;
    local_3f = local_37;
    local_36 = local_3e;
    FUN_8006f304(&local_40,*param_1,param_1[1],*(undefined1 *)(piVar5[1] + param_4));
    iVar6 = 0;
    if (*piVar5 != 0) {
      do {
        bVar1 = *(byte *)(iVar4 + iVar6 + 0x25);
        GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,param_4 == iVar6);
        cVar2 = IsReplaySlotFull(*(undefined1 *)(piVar5[1] + iVar6));
        if (cVar2 == '\0') {
          local_30 = 1;
        }
        if (param_4 == iVar6) {
          DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar3 + 0x1c4),
                       (int)*(short *)(iVar3 + 0x1c6),g_RaceOTPtr2 + 4,local_30,0xffffffff,local_2c)
          ;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 != *piVar5);
    }
  }
  return;
}


