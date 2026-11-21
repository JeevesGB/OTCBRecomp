/* Function: MIDICC_OBJ_210 */
/* Address: 800913cc */

void MIDICC_OBJ_210(void)

{
  undefined4 uVar1;
  int unaff_s0;
  
  uVar1 = _SsReadDeltaValue();
  *(undefined4 *)(unaff_s0 + 0x90) = uVar1;
  return;
}


