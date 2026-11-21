/* Function: SSSTART_OBJ_270 */
/* Address: 8009205c */

void SSSTART_OBJ_270(void)

{
  if (DAT_800c3b9c != (code *)0x0) {
    (*DAT_800c3b9c)();
  }
  (*(code *)PTR_SsSeqCalledTbyT_800c3b98)();
  return;
}


