/* Function: SSSTART_OBJ_170 */
/* Address: 80091f5c */

void SSSTART_OBJ_170(void)

{
  code *pcVar1;
  ushort unaff_s1;
  ulong unaff_s2;
  
  if (DAT_800c3ba0 != '\0') {
    InitGPU_Pre();
    VSyncCallback((f *)PTR_SsSeqCalledTbyT_800c3b98);
    SSSTART_OBJ_210();
    return;
  }
  InitGPU_Pre();
  ResetRCnt(unaff_s2);
  SetRCnt(unaff_s2,unaff_s1,0x1000);
  if (DAT_800c3ba2 == 0) {
    DAT_800c3b9c = InterruptCallback(0,0);
    SSSTART_OBJ_208((int)DAT_800c3ba2,SSSTART_OBJ_270);
    return;
  }
  pcVar1 = SSSTART_OBJ_2BC;
  if (DAT_800c3ba1 == '\0') {
    pcVar1 = (code *)PTR_SsSeqCalledTbyT_800c3b98;
  }
  InterruptCallback((int)DAT_800c3ba2,pcVar1);
  InitGPU_Post();
  return;
}


