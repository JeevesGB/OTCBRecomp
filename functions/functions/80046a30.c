/* Function: FUN_80046a30 */
/* Address: 80046a30 */

void FUN_80046a30(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar8 = 0;
  if (0 < g_CollisionFlag3) {
    piVar9 = &DAT_800ccca0;
    do {
      iVar7 = *piVar9;
      if ((iVar7 != param_1) && ((*(uint *)(iVar7 + 0x40) & 0x40000000) != 0)) {
        DAT_1f800050[1] = 0;
        uVar3 = FUN_80046584(param_1,iVar7);
        iVar6 = -1;
        if ((((uVar3 & 1) == 0) && (iVar6 = 2, (uVar3 & 2) == 0)) &&
           ((param_3 != 0 || ((iVar6 = -1, (uVar3 & 4) == 0 && (-1 < *DAT_1f800050)))))) {
          iVar6 = *(int *)(iVar7 + 0x60);
          if (*(short *)(iVar7 + 0x15a) != 0) {
            iVar6 = -iVar6;
          }
          iVar6 = *(int *)(param_1 + 0x60) - iVar6;
          if (iVar6 == 0) {
            iVar6 = 1;
          }
          iVar4 = *DAT_1f800050 << 0xc;
          iVar10 = iVar4 / iVar6;
          if (iVar6 == 0) {
            trap(0x1c00);
          }
          if ((iVar6 == -1) && (iVar4 == -0x80000000)) {
            trap(0x1800);
          }
          if ((iVar10 < 0) ||
             (((iVar6 = iVar10, 99 < *DAT_1f800050 || (iVar6 = param_2, param_2 < iVar10)) &&
              (iVar10 = iVar6, param_2 < iVar6)))) {
            iVar6 = -1;
          }
          else {
            iVar6 = 0;
            DAT_1f800050[1] = iVar10;
          }
        }
        if (-1 < iVar6) {
          iVar10 = DAT_1f800050[1];
          piVar5 = (int *)DAT_1f800050[2];
          piVar2 = DAT_1f800050 + 2;
          while ((piVar1 = piVar5, piVar1 != (int *)0x0 && (*(short *)((int)piVar1 + 10) <= iVar10))
                ) {
            piVar2 = piVar1;
            piVar5 = (int *)*piVar1;
          }
          piVar5 = (int *)DAT_1f800050[3];
          DAT_1f800050[3] = *piVar5;
          piVar5[1] = iVar7;
          *(short *)(piVar5 + 2) = (short)iVar6;
          if (iVar10 == 0) {
            iVar10 = 1;
          }
          *(short *)((int)piVar5 + 10) = (short)iVar10;
          *piVar2 = (int)piVar5;
          *piVar5 = (int)piVar1;
        }
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < g_CollisionFlag3);
  }
  return;
}


