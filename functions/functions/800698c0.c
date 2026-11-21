/* Function: HasCourseRecord */
/* Address: 800698c0 */

undefined4 HasCourseRecord(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar8 = 0;
  do {
    piVar2 = (int *)FUN_800679a4(0,iVar8);
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
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
        iVar4 = *piVar2;
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar4);
    }
    iVar6 = 0;
    if (iVar7 == iVar4) {
      iVar6 = -1;
    }
    if (iVar6 != 0) {
      iVar9 = iVar9 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  uVar5 = 0xffffffff;
  if (iVar9 != 4) {
    uVar5 = 0;
  }
  return uVar5;
}


