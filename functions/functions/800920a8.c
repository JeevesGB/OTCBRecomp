/* Function: SSSTART_OBJ_2BC */
/* Address: 800920a8 */

void SSSTART_OBJ_2BC(void)

{
  if (DAT_800c3ba4 == 0) {
    DAT_800c3ba4 = 1;
    SSSTART_OBJ_2F4();
    return;
  }
  DAT_800c3ba4 = 0;
  (*(code *)PTR_SsSeqCalledTbyT_800c3b98)();
  return;
}


