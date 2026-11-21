/* Function: FUN_80058af0 */
/* Address: 80058af0 */

void FUN_80058af0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_20;
  undefined1 local_1f [23];
  
  puVar5 = &local_20;
  if (param_1 < 0) {
    local_20 = 0x2d;
    puVar5 = local_1f;
    param_1 = -param_1;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    iVar4 = iVar3 + 1;
    iVar2 = param_1 / 10;
    puVar5[iVar3] = (char)param_1 + (char)iVar2 * -10 + '0';
    param_1 = iVar2;
  } while (0 < iVar2);
  puVar5[iVar4] = 0;
  puVar6 = puVar5 + (iVar3 + 2) / 2;
  puVar5 = puVar5 + (iVar3 + -1) / 2;
  for (iVar4 = iVar4 / 2; 0 < iVar4; iVar4 = iVar4 + -1) {
    uVar1 = *puVar6;
    *puVar6 = *puVar5;
    *puVar5 = uVar1;
    puVar5 = puVar5 + -1;
    puVar6 = puVar6 + 1;
  }
  DrawText(&local_20);
  return;
}


