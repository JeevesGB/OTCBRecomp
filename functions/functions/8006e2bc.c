/* Function: FUN_8006e2bc */
/* Address: 8006e2bc */

void FUN_8006e2bc(short *param_1,short *param_2,short *param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = GetSelectedCarData();
  GetMenuItemColor(&local_28,&local_24,g_RaceColorCycle,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar1 + 0x2d) * 0x14,(int)*param_1,(int)param_1[1]
               ,g_MenuAnimPtr + 4,local_28,0xffffffff,local_24);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar1 + 0x2e) * 0x14,(int)*param_2,(int)param_2[1]
               ,g_MenuAnimPtr + 4,local_28,0xffffffff,local_24);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar1 + 0x33) * 0x14,(int)*param_3,(int)param_3[1]
               ,g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  return;
}


