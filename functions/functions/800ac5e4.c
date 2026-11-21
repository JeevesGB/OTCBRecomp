/* Function: WAITRC2_OBJ_68 */
/* Address: 800ac5e4 */

uint WAITRC2_OBJ_68(int param_1)

{
  uint uVar1;
  
  if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
    uVar1 = WAITRC2_OBJ_B4();
    return uVar1;
  }
  return (uint)(param_1 - DAT_800d12f8) < DAT_800d12fc ^ 1;
}


