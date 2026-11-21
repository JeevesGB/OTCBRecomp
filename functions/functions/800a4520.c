/* Function: PAD_OBJ_1A4 */
/* Address: 800a4520 */

undefined4 PAD_OBJ_1A4(void)

{
  InitGPU_Pre();
  DAT_800d0ca4 = PAD_OBJ_254;
  DAT_800d0ca8 = PAD_OBJ_2BC;
  DAT_800d0ca0 = 0;
  DAT_800d0cac = 0;
  SysDeqIntRP(1,&DAT_800d0ca0);
  SysEnqIntRP(1,&DAT_800d0ca0);
  InitGPU_Post();
  return 1;
}


