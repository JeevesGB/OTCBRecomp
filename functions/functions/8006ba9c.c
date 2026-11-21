/* Function: RenderCarSelect */
/* Address: 8006ba9c */

void RenderCarSelect(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = GetCarSpritePositions();
  pbVar2 = (byte *)FUN_8006735c();
  GetMenuItemColor(&local_30,&local_2c,param_3,param_2 == 0);
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar2 * 0x14,(int)*(short *)(iVar1 + 0x18),
               (int)*(short *)(iVar1 + 0x1a),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
  GetMenuItemColor(&local_30,&local_2c,param_3,param_2 == 1);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar2[2] * 0x14,(int)*(short *)(iVar1 + 0x1c),
               (int)*(short *)(iVar1 + 0x1e),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
  GetMenuItemColor(&local_30,&local_2c,param_3,param_2 == 2);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar2[1] * 0x14,(int)*(short *)(iVar1 + 0x20),
               (int)*(short *)(iVar1 + 0x22),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
  GetMenuItemColor(&local_30,&local_2c,param_3,param_2 == 3);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar2[4] * 0x14,(int)*(short *)(iVar1 + 0x24),
               (int)*(short *)(iVar1 + 0x26),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
  GetMenuItemColor(&local_30,&local_2c,param_3,param_2 == 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar2[3] * 0x14,(int)*(short *)(iVar1 + 0x28),
               (int)*(short *)(iVar1 + 0x2a),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
  return;
}


