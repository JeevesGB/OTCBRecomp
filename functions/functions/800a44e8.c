/* Function: StopPAD */
/* Address: 800a44e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void StopPAD(void)

{
  DisablePAD();
  StopPAD2();
  PAD_OBJ_21C();
  DAT_800ca58c = 0;
  return;
}


