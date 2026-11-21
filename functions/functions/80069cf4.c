/* Function: IsCarUnlocked */
/* Address: 80069cf4 */

undefined4 IsCarUnlocked(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar8 = 0;
  do {
    piVar3 = (int *)FUN_800679a4(param_1,iVar8);
    iVar7 = 0;
    iVar6 = 0;
    if (*piVar3 != 0) {
      do {
        bVar1 = *(byte *)(piVar3[1] + iVar6);
        iVar4 = FUN_80069fe8();
        cVar2 = -1;
        if (iVar4 == 0) {
          cVar2 = (&DAT_800ba768)[bVar1];
        }
        if (cVar2 != '\0') {
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != *piVar3);
    }
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = -1;
    }
    if (iVar6 != 0) {
      iVar9 = iVar9 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  uVar5 = 0xffffffff;
  if (iVar9 == 0) {
    uVar5 = 0;
  }
  return uVar5;
}


