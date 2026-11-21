/* Function: PADPORTD_OBJ_2BC */
/* Address: 800abd18 */

void PADPORTD_OBJ_2BC(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x37);
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  return;
}


