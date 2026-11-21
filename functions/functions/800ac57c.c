/* Function: setRC2wait */
/* Address: 800ac57c */

void setRC2wait(undefined4 param_1)

{
  DAT_800d12fc = param_1;
  DAT_800d12f8 = (uint)(ushort)TMR_SYSCLOCK_VAL;
  return;
}


