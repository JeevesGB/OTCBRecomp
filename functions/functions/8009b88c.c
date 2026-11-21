/* Function: startIntrVSync */
/* Address: 8009b88c */

code * startIntrVSync(void)

{
  *(undefined4 *)PTR_TMR_HRETRACE_MODE_800c5730 = 0x100;
  DAT_800c572c = 0;
  INTR_VB_OBJ_F0(&DAT_800c570c,8);
  InterruptCallback(0,INTR_VB_OBJ_58);
  return INTR_VB_OBJ_C4;
}


