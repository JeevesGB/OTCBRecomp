/* Function: PAD_OBJ_2BC */
/* Address: 800a4638 */

undefined4 PAD_OBJ_2BC(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(uint *)(PTR_I_STAT_800ca594 + 4) & 1) != 0) &&
     (uVar1 = 1, (*(uint *)PTR_I_STAT_800ca594 & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


