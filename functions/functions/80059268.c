/* Function: RenderPlayerCar */
/* Address: 80059268 */

void RenderPlayerCar(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  
  for (piVar3 = (int *)(param_1 + 4U & 0xffffff); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((int)piVar3 < 0) {
      puVar2 = (uint *)piVar3[1];
      puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)puVar2 + 1) * 4);
      *puVar2 = *puVar1 & 0xffffff | *puVar2 & 0xff000000;
      *puVar1 = (uint)puVar2 & 0xffffff;
    }
  }
  return;
}


