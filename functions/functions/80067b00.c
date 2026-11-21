/* Function: GetReplayLapData */
/* Address: 80067b00 */

int GetReplayLapData(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = GetReplayCarIndex();
  if (1 < param_2) {
    param_2 = 1;
  }
  return (uVar1 & 0xff) * 0x10 + param_2 * 8 + -0x7ff45a28;
}


