/* Function: SSSTART_OBJ_0 */
/* Address: 80091dec */

/* WARNING: Removing unreachable block (ram,0x80091f74) */

void SSSTART_OBJ_0(int param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = 0x3e6;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  DAT_800c3ba2 = '\x06';
  DAT_800c3ba0 = 0;
  DAT_800c3ba1 = '\0';
  DAT_800c3b9c = 0;
  if (DAT_800c3b90 == 2) {
    InitGPU_Pre();
    ResetRCnt(0xf2000002);
    SetRCnt(0xf2000002,0x44e8,0x1000);
    if (DAT_800c3ba2 != 0) {
      pcVar3 = SSSTART_OBJ_2BC;
      if (DAT_800c3ba1 == '\0') {
        pcVar3 = (code *)PTR_SsSeqCalledTbyT_800c3b98;
      }
      InterruptCallback((int)DAT_800c3ba2,pcVar3);
      InitGPU_Post();
      return;
    }
    DAT_800c3b9c = InterruptCallback(0,0);
    SSSTART_OBJ_208((int)DAT_800c3ba2,SSSTART_OBJ_270);
    return;
  }
  if (DAT_800c3b90 < 3) {
    if (DAT_800c3b90 == 0) {
      DAT_800c3ba2 = 0x7f;
      SSSTART_OBJ_218();
      return;
    }
    SSSTART_OBJ_C0();
    return;
  }
  if (DAT_800c3b90 != 3) {
    if (DAT_800c3b90 != 5) {
      SSSTART_OBJ_C0();
      return;
    }
    DAT_800c3ba2 = 0;
    if (param_1 != 0) {
      SSSTART_OBJ_170();
      return;
    }
    DAT_800c3ba0 = 1;
    SSSTART_OBJ_170();
    return;
  }
  SSSTART_OBJ_170();
  return;
}


