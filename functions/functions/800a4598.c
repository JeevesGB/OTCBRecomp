/* Function: PAD_OBJ_21C */
/* Address: 800a4598 */

undefined4 PAD_OBJ_21C(void)

{
  InitGPU_Pre();
  SysDeqIntRP(1,&DAT_800d0ca0);
  InitGPU_Post();
  return 1;
}


