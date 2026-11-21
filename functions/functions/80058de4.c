/* Function: FUN_80058de4 */
/* Address: 80058de4 */

uint FUN_80058de4(int param_1,short *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *param_2 + -1;
  uVar2 = 0;
  if (-1 < iVar4) {
    puVar3 = (uint *)(iVar4 * 4 + param_1);
    param_2 = param_2 + iVar4 * 2;
    do {
      if ((param_2[1] & 4U) != 0) {
        if ((param_2[1] & 1U) == 0) {
          if (uVar2 != 0) {
            iVar1 = param_2[2] * 4 + *puVar3;
            *(uint *)(iVar1 + -4) = *(uint *)(iVar1 + -4) & 0xff000000 | uVar2 & 0xffffff;
          }
          uVar2 = *puVar3;
        }
        else {
          if (uVar2 != 0) {
            *(uint *)*puVar3 = *(uint *)*puVar3 & 0xff000000 | uVar2 & 0xffffff;
          }
          uVar2 = (*puVar3 + param_2[2] * 4) - 4;
        }
      }
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
      param_2 = param_2 + -2;
    } while (-1 < iVar4);
  }
  return uVar2;
}


