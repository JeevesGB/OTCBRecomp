/* Function: _padStopCom */
/* Address: 800a9e78 */

void _padStopCom(void)

{
  InitGPU_Pre();
  ChangeClearRCnt(3,1);
  SysDeqIntRP(2,&DAT_800d1058);
  InitGPU_Post();
  return;
}


