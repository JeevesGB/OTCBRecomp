/* Function: FUN_80044e30 */
/* Address: 80044e30 */

void FUN_80044e30(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  psVar4 = &DAT_800aea40;
  puVar3 = &g_CarCarCollisionPairs;
  do {
    *puVar3 = 0;
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
    iVar5 = iVar5 + 1;
    uVar2 = FUN_80052d6c((int)*(short *)(&DAT_800b34a0 + sVar1 * 2));
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
  } while (iVar5 < 3);
  return;
}


