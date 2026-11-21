/* Function: LoadCLUT */
/* Address: 8005da38 */

void LoadCLUT(int param_1,int param_2,int param_3)

{
  u_short uVar1;
  RECT local_10;
  
  local_10.w = 0x10;
  local_10.x = (short)param_2;
  local_10.y = (short)param_3;
  local_10.h = 1;
  uVar1 = GetClut(param_2,param_3);
  g_CLUTValue = (uint)uVar1;
  LoadImage(&local_10,(u_long *)(&g_CLUTTable + param_1 * 0x20));
  return;
}


