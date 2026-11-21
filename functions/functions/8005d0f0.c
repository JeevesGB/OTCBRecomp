/* Function: InitControllers */
/* Address: 8005d0f0 */

void InitControllers(void)

{
  InitGPU_Pre();
  PadInitDirect(&g_PadBuffer1,&g_PadBuffer2);
  PadStartCom();
  InitGPU_Post();
  InitMemoryState();
  return;
}


