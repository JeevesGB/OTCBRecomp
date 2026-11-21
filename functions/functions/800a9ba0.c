/* Function: PADMAIN_OBJ_144 */
/* Address: 800a9ba0 */

undefined4 PADMAIN_OBJ_144(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(uint *)(PTR_I_STAT_800cba64 + 4) & 1) != 0) &&
     (uVar1 = 0, (*(uint *)PTR_I_STAT_800cba64 & 1) != 0)) {
    if (DAT_800cba2c != (code *)0x0) {
      (*DAT_800cba2c)();
    }
    uVar1 = 1;
  }
  return uVar1;
}


