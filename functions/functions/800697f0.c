/* Function: HasLapRecord */
/* Address: 800697f0 */

undefined4 HasLapRecord(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = (int *)FUN_800679a4(0,param_1);
  iVar7 = 0;
  iVar6 = 0;
  if (*piVar2 != 0) {
    do {
      uVar3 = GetBestLapCar(*(undefined1 *)(piVar2[1] + iVar6));
      iVar4 = FUN_80069fe8();
      cVar1 = -1;
      if (iVar4 == 0) {
        cVar1 = (&DAT_800ba768)[uVar3 & 0xff];
      }
      if (cVar1 != '\0') {
        iVar7 = iVar7 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != *piVar2);
  }
  uVar5 = 0xffffffff;
  if (iVar7 != *piVar2) {
    uVar5 = 0;
  }
  return uVar5;
}


