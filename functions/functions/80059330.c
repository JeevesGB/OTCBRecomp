/* Function: FUN_80059330 */
/* Address: 80059330 */

void FUN_80059330(int *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = param_1 + *param_2 + 0x101;
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = *(undefined4 *)*piVar2;
  *(undefined4 **)*piVar2 = puVar1;
  *piVar2 = (int)puVar1;
  puVar1[1] = param_2;
  *param_1 = (int)(puVar1 + 2);
  return;
}


