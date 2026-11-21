/* Function: FUN_8006b8dc */
/* Address: 8006b8dc */

undefined4 FUN_8006b8dc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + param_2 * 6) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}


