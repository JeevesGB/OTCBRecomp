/* Function: chkRC2wait */
/* Address: 800ac59c */

uint chkRC2wait(void)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)TMR_SYSCLOCK_VAL;
  if (uVar1 < DAT_800d12f8) {
    if ((ushort)TMR_SYSCLOCK_MAX != 0) {
      uVar1 = WAITRC2_OBJ_68(uVar1 + (ushort)TMR_SYSCLOCK_MAX);
      return uVar1;
    }
    uVar1 = uVar1 + 0x10000;
  }
  if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
    uVar1 = WAITRC2_OBJ_B4();
    return uVar1;
  }
  return uVar1 - DAT_800d12f8 < DAT_800d12fc ^ 1;
}


