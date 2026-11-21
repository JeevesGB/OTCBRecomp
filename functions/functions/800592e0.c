/* Function: SetCarMatrix */
/* Address: 800592e0 */

void SetCarMatrix(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  *param_1 = (int)(param_1 + 0x201);
  puVar1 = (uint *)(param_1 + 1);
  piVar3 = param_1 + 0x101;
  uVar2 = (uint)(param_1 + 2) & 0xffffff;
  iVar4 = 0;
  do {
    *piVar3 = (int)puVar1;
    piVar3 = piVar3 + 1;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 + 4;
  } while (iVar4 < 0xff);
  *piVar3 = (int)puVar1;
  *puVar1 = 0;
  return;
}


