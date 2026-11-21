/* Function: _padStartCom */
/* Address: 800a9dac */

void _padStartCom(void)

{
  undefined *puVar1;
  
  DAT_800cba3c = 0;
  InitGPU_Pre();
  SysDeqIntRP(2,&DAT_800d1058);
  SysEnqIntRP(2,&DAT_800d1058);
  puVar1 = PTR_I_STAT_800cba64;
  *(undefined4 *)PTR_I_STAT_800cba64 = 0xfffffffe;
  *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) | 1;
  ChangeClearRCnt(3,0);
  InitGPU_Post();
  (*DAT_800cba08)(DAT_800cba38);
  (*DAT_800cba08)(DAT_800cba38 + 0xf0);
  DAT_800d106c = 0;
  DAT_800d1068 = 0;
  DAT_800cba3c = 1;
  return;
}


