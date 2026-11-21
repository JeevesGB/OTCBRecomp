/* Function: CD_initintr */
/* Address: 800a7538 */

void CD_initintr(void)

{
  DAT_800cb5d8 = 0;
  DAT_800cb5d4 = 0;
  DAT_800cb5e4 = 0;
  DAT_800cb5e0 = 0;
  ResetCallback();
  InterruptCallback(2,BIOS_OBJ_1688);
  return;
}


