/* Function: MIDICC_OBJ_208 */
/* Address: 800913c4 */

void MIDICC_OBJ_208(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  int unaff_s0;
  
  uVar1 = _SsReadDeltaValue(param_1,(int)param_2);
  *(undefined4 *)(unaff_s0 + 0x90) = uVar1;
  return;
}


