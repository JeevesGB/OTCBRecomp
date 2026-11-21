/* Function: PADPORTD_OBJ_35C */
/* Address: 800abdb8 */

undefined1 PADPORTD_OBJ_35C(int param_1)

{
  undefined1 uVar1;
  int in_v1;
  
  uVar1 = 0;
  if (in_v1 < (int)(uint)*(byte *)(param_1 + 0x36)) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x2c) + in_v1);
  }
  return uVar1;
}


