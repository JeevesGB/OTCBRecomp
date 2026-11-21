/* Function: InitRaceVRAM */
/* Address: 8005dafc */

void InitRaceVRAM(void)

{
  u_short uVar1;
  RECT local_10;
  
  g_VRAMRegionPtr = &DAT_800b54fc;
  local_10.x = 0x3f0;
  local_10.y = 0x1fd;
  local_10.w = 0x10;
  local_10.h = 1;
  uVar1 = GetClut(0x3f0,0x1fd);
  g_CLUTValue = (uint)uVar1;
  LoadImage(&local_10,(u_long *)&g_CLUTTable);
  return;
}


