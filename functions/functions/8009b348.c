/* Function: SetIntrMask */
/* Address: 8009b348 */

undefined2 SetIntrMask(undefined2 param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)PTR_I_MASK_800c56f4;
  *(undefined2 *)PTR_I_MASK_800c56f4 = param_1;
  return uVar1;
}


