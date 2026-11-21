/* Function: FUN_8005937c */
/* Address: 8005937c */

void FUN_8005937c(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)*param_1;
  for (; param_2 < param_3; param_2 = (uint *)((int)param_2 + uVar3)) {
    uVar3 = *param_2;
    if (0xffffff < uVar3) {
      piVar1 = param_1 + (uVar3 & 0xff) + 0x101;
      *puVar2 = *(undefined4 *)*piVar1;
      *(undefined4 **)*piVar1 = puVar2;
      *piVar1 = (int)puVar2;
      puVar2[1] = param_2;
      puVar2 = puVar2 + 2;
      uVar3 = ((uVar3 & 0xff000000) >> 0x16) + 4;
    }
  }
  *param_1 = (int)puVar2;
  return;
}


