/* Function: FUN_80060ba0 */
/* Address: 80060ba0 */

void FUN_80060ba0(void)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar6 = 4 - DAT_800b5994;
  if (4 < iVar6) {
    iVar6 = 4;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    psVar5 = &DAT_800b5b1c;
    do {
      if (DAT_800cda08 == 0) {
        psVar2 = (short *)(DAT_800cda24 + (iVar4 + DAT_800b5994) * 0xc);
        uVar3 = 0;
        if ((((int)*psVar2 & 0x8000U) == 0) && (uVar3 = 1, psVar2[2] == DAT_800cda02)) {
          uVar3 = 2;
        }
        if (iVar4 + DAT_800b5994 == (int)DAT_800cda12) {
          uVar3 = uVar3 | 0x8000;
        }
      }
      else {
        uVar3 = 0;
      }
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
      iVar4 = iVar4 + 1;
      FUN_80060834(uVar3,(int)sVar1);
    } while (iVar4 < iVar6);
  }
  return;
}


