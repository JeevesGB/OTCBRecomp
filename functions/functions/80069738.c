/* Function: GetReplayCarData */
/* Address: 80069738 */

undefined * GetReplayCarData(void)

{
  uint uVar1;
  
  uVar1 = GetReplayCarIndex();
  return &g_CarDisplayObjects + (uVar1 & 0xff) * 0xb0;
}


