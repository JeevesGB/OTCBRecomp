/* Function: FUN_80056754 */
/* Address: 80056754 */

int FUN_80056754(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  piVar2 = (int *)(param_1 + param_2 * 0x1c + 0xc);
  iVar10 = 0;
  iVar11 = piVar2[5];
  iVar9 = param_1 + piVar2[4] + 0xc;
  param_1 = param_1 + *piVar2 + 0xc;
  if (0 < iVar11) {
    do {
      uVar1 = *(ushort *)(iVar9 + 2);
      uVar3 = uVar1 & 0x3d04;
      if (uVar3 == 0x2d00) goto LAB_80056998;
      if (uVar3 < 0x2d01) {
        if (uVar3 == 0x2500) goto LAB_800568e8;
        if (uVar3 < 0x2501) {
          if (uVar3 == 0x2004) goto LAB_800568e8;
          if (uVar3 < 0x2005) {
            iVar4 = 0x1000;
            if (uVar3 != 0x2000) {
LAB_80056998:
              iVar6 = (int)*(short *)(iVar9 + 0x1a);
              iVar7 = (int)*(short *)(iVar9 + 0x1c);
              iVar8 = (int)*(short *)(iVar9 + 0x1e);
              iVar4 = (int)*(short *)(iVar9 + 0x18) << 3;
              goto LAB_800569dc;
            }
          }
          else {
            if (uVar3 == 0x2100) goto LAB_800568e8;
            iVar4 = 0x1000;
            if (uVar3 != 0x2400) goto LAB_80056998;
          }
        }
        else {
          if (uVar3 == 0x2804) {
            iVar6 = (int)*(short *)(iVar9 + 0x18);
            iVar7 = (int)*(short *)(iVar9 + 0x1a);
            iVar8 = (int)*(short *)(iVar9 + 0x1c);
            iVar4 = (int)*(short *)(iVar9 + 0x16) << 3;
          }
          else if (uVar3 < 0x2805) {
            if (uVar3 != 0x2800) goto LAB_80056998;
            iVar6 = (int)*(short *)(iVar9 + 0xc);
            iVar7 = (int)*(short *)(iVar9 + 0xe);
            iVar8 = (int)*(short *)(iVar9 + 0x10);
            iVar4 = (int)*(short *)(iVar9 + 10) << 3;
          }
          else if (uVar3 == 0x2900) {
            iVar6 = (int)*(short *)(iVar9 + 10);
            iVar7 = (int)*(short *)(iVar9 + 0xc);
            iVar8 = (int)*(short *)(iVar9 + 0xe);
            iVar4 = (int)*(short *)(iVar9 + 8) << 3;
          }
          else {
            if (uVar3 != 0x2c00) goto LAB_80056998;
            iVar6 = (int)*(short *)(iVar9 + 0x18);
            iVar7 = (int)*(short *)(iVar9 + 0x1a);
            iVar8 = (int)*(short *)(iVar9 + 0x1c);
            iVar4 = (int)*(short *)(iVar9 + 0x16) << 3;
          }
LAB_800569dc:
          iVar4 = FUN_8005664c(param_1 + iVar4,param_1 + iVar6 * 8,param_1 + iVar7 * 8,
                               param_1 + iVar8 * 8);
        }
      }
      else {
        if (uVar3 != 0x3500) {
          if (0x3500 < uVar3) {
            if (uVar3 == 0x3900) {
              iVar6 = (int)*(short *)(iVar9 + 0x16);
              iVar7 = (int)*(short *)(iVar9 + 0x18);
              iVar8 = (int)*(short *)(iVar9 + 0x1a);
              iVar4 = (int)*(short *)(iVar9 + 0x14) << 3;
            }
            else if (uVar3 < 0x3901) {
              if (uVar3 == 0x3800) {
                iVar6 = (int)*(short *)(iVar9 + 0xe);
                iVar7 = (int)*(short *)(iVar9 + 0x12);
                iVar8 = (int)*(short *)(iVar9 + 0x16);
                iVar4 = (int)*(short *)(iVar9 + 10) << 3;
              }
              else {
                if (uVar3 != 0x3804) goto LAB_80056998;
                iVar6 = (int)*(short *)(iVar9 + 0x1a);
                iVar7 = (int)*(short *)(iVar9 + 0x1e);
                iVar8 = (int)*(short *)(iVar9 + 0x22);
                iVar4 = (int)*(short *)(iVar9 + 0x16) << 3;
              }
            }
            else if (uVar3 == 0x3c00) {
              iVar6 = (int)*(short *)(iVar9 + 0x1a);
              iVar7 = (int)*(short *)(iVar9 + 0x1e);
              iVar8 = (int)*(short *)(iVar9 + 0x22);
              iVar4 = (int)*(short *)(iVar9 + 0x16) << 3;
            }
            else {
              if (uVar3 != 0x3d00) goto LAB_80056998;
              iVar6 = (int)*(short *)(iVar9 + 0x26);
              iVar7 = (int)*(short *)(iVar9 + 0x28);
              iVar8 = (int)*(short *)(iVar9 + 0x2a);
              iVar4 = (int)*(short *)(iVar9 + 0x24) << 3;
            }
            goto LAB_800569dc;
          }
          if (uVar3 != 0x3004) {
            if (uVar3 < 0x3005) {
              iVar4 = 0x1000;
              if (uVar3 != 0x3000) goto LAB_80056998;
            }
            else {
              if (uVar3 == 0x3100) goto LAB_800568e8;
              iVar4 = 0x1000;
              if (uVar3 != 0x3400) goto LAB_80056998;
            }
            goto LAB_80056a00;
          }
        }
LAB_800568e8:
        iVar4 = 0x1000;
      }
LAB_80056a00:
      sVar5 = 0;
      if (iVar4 < 0x1001) {
        if (iVar4 < 0x400) {
          sVar5 = 1;
        }
      }
      else {
        sVar5 = (iVar4 < 0x4001 ^ 1) << 1;
      }
      iVar10 = iVar10 + 1;
      *(ushort *)(iVar9 + 2) = uVar1 | sVar5 << 3;
      iVar9 = iVar9 + (*(byte *)(iVar9 + 1) + 1) * 4;
    } while (iVar10 < iVar11);
  }
  return iVar11;
}


