/* Function: FUN_800534dc */
/* Address: 800534dc */

void FUN_800534dc(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  undefined1 local_20;
  char local_1f;
  undefined1 local_1e;
  
  iVar1 = DrawSprite(g_TrackConfigBuffer + 100,param_1,param_2,g_RaceOTPtr2 + 0xc);
  *(undefined2 *)(iVar1 + 0x10) = 0xe;
  local_1f = param_4 + '0';
  *(char *)(iVar1 + 0xc) = *(char *)(iVar1 + 0xc) + param_3 * '\x0e';
  local_20 = 0x2f;
  local_1e = 0;
  SetActiveSpriteSlot(2,0);
  DrawText(&local_20,param_1 + 0x10,param_2 + 5);
  return;
}


