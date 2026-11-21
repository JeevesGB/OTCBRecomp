/* Function: SPRINTF_OBJ_754 */
/* Address: 800a1320 */

void SPRINTF_OBJ_754(void)

{
  undefined4 unaff_s2;
  uint in_stack_00000210;
  undefined4 *in_stack_00000220;
  
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    *(short *)*in_stack_00000220 = (short)unaff_s2;
    SPRINTF_OBJ_82C();
    return;
  }
  *(undefined4 *)*in_stack_00000220 = unaff_s2;
  SPRINTF_OBJ_82C();
  return;
}


