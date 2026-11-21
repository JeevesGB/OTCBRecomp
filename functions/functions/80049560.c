/* Function: SetObstacleSpeed */
/* Address: 80049560 */

void SetObstacleSpeed(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (short)(param_2 * *(short *)(*(int *)(param_1 + 0x10) + 0x54) >> 0xc);
  sVar2 = (short)param_2 * 2 - sVar1;
  *(short *)(param_1 + 0x322) = sVar1;
  *(short *)(param_1 + 800) = sVar1;
  *(short *)(param_1 + 0x326) = sVar2;
  *(short *)(param_1 + 0x324) = sVar2;
  return;
}


