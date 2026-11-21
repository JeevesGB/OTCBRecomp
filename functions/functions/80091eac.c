/* Function: SSSTART_OBJ_C0 */
/* Address: 80091eac */

/* WARNING: Removing unreachable block (ram,0x80091f50) */
/* WARNING: Removing unreachable block (ram,0x80091f04) */

void SSSTART_OBJ_C0(void)

{
  code *pcVar1;
  ulong unaff_s2;
  int iVar2;
  
  if (DAT_800c3b94 == 0) {
    if (DAT_800c3b90 < 0x46) {
      if (DAT_800c3b90 == 0) {
        trap(0x1c00);
      }
      DAT_800c3ba1 = DAT_800c3ba1 + '\x01';
      SSSTART_OBJ_170();
      return;
    }
    iVar2 = 0x409980 / DAT_800c3b90;
    if (DAT_800c3b90 == 0) {
      trap(0x1c00);
    }
    if (DAT_800c3ba0 != '\0') {
      InitGPU_Pre();
      VSyncCallback((f *)PTR_SsSeqCalledTbyT_800c3b98);
      SSSTART_OBJ_210();
      return;
    }
    InitGPU_Pre();
    ResetRCnt(unaff_s2);
    SetRCnt(unaff_s2,(ushort)iVar2,0x1000);
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
  }
  return;
}


