/* Function: FUN_80043c20 */
/* Address: 80043c20 */

undefined4 FUN_80043c20(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x3c);
  if (*(short *)(iVar9 + 8) == 0) {
    if (*(short *)(iVar9 + 6) != 0) {
      *(short *)(iVar9 + 6) = *(short *)(iVar9 + 6) + -1;
    }
    if (param_2 != (int *)0x0) {
      piVar8 = param_2;
      do {
        if (((int)(short)piVar8[2] < (int)((DAT_800cce64 - 0x32) * 0x10000) >> 0x10) &&
           ((int)((DAT_800cce64 + 0x32) * 0x10000) >> 0x10 < (int)*(short *)((int)piVar8 + 10))) {
          iVar2 = piVar8[3];
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          iVar4 = -1;
          if (0x14 < iVar2) {
            iVar4 = 0;
          }
          goto LAB_80043df0;
        }
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)0x0);
    }
    iVar4 = 0;
LAB_80043df0:
    if (iVar4 != 0) {
      return 0;
    }
    iVar4 = 0;
    if (*(short *)(iVar9 + 6) < 1) {
      iVar2 = 0x7fff;
      if (param_2 != (int *)0x0) {
        do {
          iVar7 = 3;
          piVar8 = &DAT_800cca5c;
          do {
            iVar6 = (int)*(short *)(((int)((uint)DAT_800cce68 << 0x10) >> 0x14) * 2 + *piVar8);
            if (((int)(short)param_2[2] <= iVar6 + -0x32) &&
               (iVar6 + 0x32 <= (int)*(short *)((int)param_2 + 10))) {
              iVar3 = param_2[3];
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              iVar6 = DAT_800cce66 - iVar6;
              if (iVar3 < 0x15) {
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar6 < iVar2) {
                  iVar2 = iVar6;
                  iVar4 = iVar7;
                }
              }
            }
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar7 < 6);
          param_2 = (int *)*param_2;
        } while (param_2 != (int *)0x0);
      }
      if (iVar4 != 0) {
        *(undefined2 *)(iVar9 + 8) = 1;
        *(short *)(iVar9 + 2) = (short)iVar4;
        return 2;
      }
    }
    return 1;
  }
  if (param_2 != (int *)0x0) {
    do {
      if (((int)(short)param_2[2] < (int)((DAT_800cce64 - 0x32) * 0x10000) >> 0x10) &&
         ((int)((DAT_800cce64 + 0x32) * 0x10000) >> 0x10 < (int)*(short *)((int)param_2 + 10))) {
        iVar2 = param_2[3];
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        iVar4 = -1;
        if (0x14 < iVar2) {
          iVar4 = 0;
        }
        goto LAB_80043cc0;
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)0x0);
  }
  iVar4 = 0;
LAB_80043cc0:
  uVar5 = 2;
  if (iVar4 == 0) {
    uVar5 = 1;
    sVar1 = *(short *)(iVar9 + 8) + 2;
  }
  else {
    sVar1 = *(short *)(iVar9 + 8) + 1;
  }
  *(short *)(iVar9 + 8) = sVar1;
  iVar4 = (int)(short)DAT_800cce64 - (int)DAT_800cce66;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  iVar2 = 0;
  if (iVar4 < 0x50) {
    iVar2 = -1;
  }
  if (iVar2 == 0) {
    if (0x32 < *(short *)(iVar9 + 8)) {
      *(undefined2 *)(iVar9 + 8) = 0;
      *(undefined2 *)(iVar9 + 6) = 0;
    }
  }
  else {
    *(undefined2 *)(iVar9 + 8) = 0;
    *(undefined2 *)(iVar9 + 6) = 0x1e;
  }
  return uVar5;
}


