/* Function: FUN_8006fe98 */
/* Address: 8006fe98 */

void FUN_8006fe98(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = GetSelectedCarData();
  GetMenuItemColor(&local_18,&local_14,g_RaceColorCycle,param_2 == 0);
  if (param_2 == 0) {
    local_18 = 2;
  }
  else {
    local_18 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar1 + 0x2f) * 0x14,0x90,0xb0,g_RaceOTPtr2 + 4,
               local_18,0xffffffff,local_14);
  GetMenuItemColor(&local_18,&local_14,g_RaceColorCycle,param_2 == 1);
  if (param_2 == 1) {
    local_18 = 2;
  }
  else {
    local_18 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar1 + 0x30) * 0x14,0xd8,0xb0,g_RaceOTPtr2 + 4,
               local_18,0xffffffff,local_14);
  DrawSpriteFlipped(0xfffffef0,0xb8,&DAT_800c3920,g_MenuAnimPtr + 4);
  DrawSpriteFlipped(0xfffffff0,0xb8,&DAT_800c392e,g_MenuAnimPtr + 4);
  return;
}


