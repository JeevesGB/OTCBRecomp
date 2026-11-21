/* Function: TriggerSlipstream */
/* Address: 80034e7c */

void TriggerSlipstream(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = 0;
  uVar8 = *(int *)(param_1 + 0x18c) >> 0xc;
  iVar6 = param_2;
  do {
    uVar5 = *(int *)(iVar6 + 0xf8) - *(int *)(param_1 + 0xf8);
    uVar4 = *(int *)(iVar6 + 0xfc) - *(int *)(param_1 + 0xfc);
    uVar1 = uVar4;
    if ((int)uVar4 < 0) {
      uVar1 = -uVar4;
    }
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = -uVar5;
    }
    if (uVar1 == 0 && uVar3 == 0) {
      iVar2 = 0;
LAB_8003503c:
      uVar1 = iVar2 - (uVar8 ^ 0x800);
    }
    else {
      if ((int)uVar3 < (int)uVar1) {
        iVar2 = (int)uVar1 >> 10;
        if ((uVar3 & 0x7fe00000) == 0) {
          iVar9 = (int)(uVar3 << 10) / (int)uVar1;
          if (uVar1 == 0) {
            trap(0x1c00);
          }
          if ((uVar1 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
            trap(0x1800);
          }
        }
        else {
          iVar9 = (int)uVar3 / iVar2;
          if (iVar2 == 0) {
            trap(0x1c00);
          }
          if ((iVar2 == -1) && (uVar3 == 0x80000000)) {
            trap(0x1800);
          }
        }
        iVar2 = (int)*(short *)(&DAT_800c990c + iVar9 * 2);
      }
      else {
        iVar2 = (int)uVar3 >> 10;
        if ((uVar1 & 0x7fe00000) == 0) {
          iVar9 = (int)(uVar1 << 10) / (int)uVar3;
          if (uVar3 == 0) {
            trap(0x1c00);
          }
          if ((uVar3 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
            trap(0x1800);
          }
        }
        else {
          iVar9 = (int)uVar1 / iVar2;
          if (iVar2 == 0) {
            trap(0x1c00);
          }
          if ((iVar2 == -1) && (uVar1 == 0x80000000)) {
            trap(0x1800);
          }
        }
        iVar2 = 0x400 - *(short *)(&DAT_800c990c + iVar9 * 2);
      }
      if ((int)uVar4 < 0) {
        iVar2 = 0x800 - iVar2;
      }
      uVar1 = iVar2 - (uVar8 ^ 0x800);
      if ((int)uVar5 < 0) {
        iVar2 = -iVar2;
        goto LAB_8003503c;
      }
    }
    if ((uVar1 & 0xfff) < 0x401) {
      uVar5 = *(int *)(iVar6 + 0xf8) - *(int *)(param_1 + 0x110);
      uVar4 = *(int *)(iVar6 + 0xfc) - *(int *)(param_1 + 0x114);
      uVar1 = uVar4;
      if ((int)uVar4 < 0) {
        uVar1 = -uVar4;
      }
      uVar3 = uVar5;
      if ((int)uVar5 < 0) {
        uVar3 = -uVar5;
      }
      if (uVar1 == 0 && uVar3 == 0) {
        iVar2 = 0;
LAB_800351b8:
        uVar1 = iVar2 - uVar8;
      }
      else {
        if ((int)uVar3 < (int)uVar1) {
          iVar2 = (int)uVar1 >> 10;
          if ((uVar3 & 0x7fe00000) == 0) {
            iVar9 = (int)(uVar3 << 10) / (int)uVar1;
            if (uVar1 == 0) {
              trap(0x1c00);
            }
            if ((uVar1 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar9 = (int)uVar3 / iVar2;
            if (iVar2 == 0) {
              trap(0x1c00);
            }
            if ((iVar2 == -1) && (uVar3 == 0x80000000)) {
              trap(0x1800);
            }
          }
          iVar2 = (int)*(short *)(&DAT_800c990c + iVar9 * 2);
        }
        else {
          iVar2 = (int)uVar3 >> 10;
          if ((uVar1 & 0x7fe00000) == 0) {
            iVar9 = (int)(uVar1 << 10) / (int)uVar3;
            if (uVar3 == 0) {
              trap(0x1c00);
            }
            if ((uVar3 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar9 = (int)uVar1 / iVar2;
            if (iVar2 == 0) {
              trap(0x1c00);
            }
            if ((iVar2 == -1) && (uVar1 == 0x80000000)) {
              trap(0x1800);
            }
          }
          iVar2 = 0x400 - *(short *)(&DAT_800c990c + iVar9 * 2);
        }
        if ((int)uVar4 < 0) {
          iVar2 = 0x800 - iVar2;
        }
        uVar1 = iVar2 - uVar8;
        if ((int)uVar5 < 0) {
          iVar2 = -iVar2;
          goto LAB_800351b8;
        }
      }
      if ((uVar1 & 0xfff) < 0x401) goto LAB_80035510;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 8;
  } while (iVar7 < 4);
  iVar7 = 0;
  uVar8 = *(int *)(param_2 + 0x18c) >> 0xc;
  iVar6 = param_1;
  do {
    uVar5 = *(int *)(iVar6 + 0xf8) - *(int *)(param_2 + 0xf8);
    uVar4 = *(int *)(iVar6 + 0xfc) - *(int *)(param_2 + 0xfc);
    uVar1 = uVar4;
    if ((int)uVar4 < 0) {
      uVar1 = -uVar4;
    }
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = -uVar5;
    }
    if (uVar1 == 0 && uVar3 == 0) {
      iVar2 = 0;
LAB_8003537c:
      uVar1 = iVar2 - (uVar8 ^ 0x800);
    }
    else {
      if ((int)uVar3 < (int)uVar1) {
        iVar2 = (int)uVar1 >> 10;
        if ((uVar3 & 0x7fe00000) == 0) {
          iVar9 = (int)(uVar3 << 10) / (int)uVar1;
          if (uVar1 == 0) {
            trap(0x1c00);
          }
          if ((uVar1 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
            trap(0x1800);
          }
        }
        else {
          iVar9 = (int)uVar3 / iVar2;
          if (iVar2 == 0) {
            trap(0x1c00);
          }
          if ((iVar2 == -1) && (uVar3 == 0x80000000)) {
            trap(0x1800);
          }
        }
        iVar2 = (int)*(short *)(&DAT_800c990c + iVar9 * 2);
      }
      else {
        iVar2 = (int)uVar3 >> 10;
        if ((uVar1 & 0x7fe00000) == 0) {
          iVar9 = (int)(uVar1 << 10) / (int)uVar3;
          if (uVar3 == 0) {
            trap(0x1c00);
          }
          if ((uVar3 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
            trap(0x1800);
          }
        }
        else {
          iVar9 = (int)uVar1 / iVar2;
          if (iVar2 == 0) {
            trap(0x1c00);
          }
          if ((iVar2 == -1) && (uVar1 == 0x80000000)) {
            trap(0x1800);
          }
        }
        iVar2 = 0x400 - *(short *)(&DAT_800c990c + iVar9 * 2);
      }
      if ((int)uVar4 < 0) {
        iVar2 = 0x800 - iVar2;
      }
      uVar1 = iVar2 - (uVar8 ^ 0x800);
      if ((int)uVar5 < 0) {
        iVar2 = -iVar2;
        goto LAB_8003537c;
      }
    }
    if ((uVar1 & 0xfff) < 0x401) {
      uVar5 = *(int *)(iVar6 + 0xf8) - *(int *)(param_2 + 0x110);
      uVar4 = *(int *)(iVar6 + 0xfc) - *(int *)(param_2 + 0x114);
      uVar1 = uVar4;
      if ((int)uVar4 < 0) {
        uVar1 = -uVar4;
      }
      uVar3 = uVar5;
      if ((int)uVar5 < 0) {
        uVar3 = -uVar5;
      }
      if (uVar1 == 0 && uVar3 == 0) {
        iVar2 = 0;
LAB_800354f8:
        uVar1 = iVar2 - uVar8;
      }
      else {
        if ((int)uVar3 < (int)uVar1) {
          iVar2 = (int)uVar1 >> 10;
          if ((uVar3 & 0x7fe00000) == 0) {
            iVar9 = (int)(uVar3 << 10) / (int)uVar1;
            if (uVar1 == 0) {
              trap(0x1c00);
            }
            if ((uVar1 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar9 = (int)uVar3 / iVar2;
            if (iVar2 == 0) {
              trap(0x1c00);
            }
            if ((iVar2 == -1) && (uVar3 == 0x80000000)) {
              trap(0x1800);
            }
          }
          iVar2 = (int)*(short *)(&DAT_800c990c + iVar9 * 2);
        }
        else {
          iVar2 = (int)uVar3 >> 10;
          if ((uVar1 & 0x7fe00000) == 0) {
            iVar9 = (int)(uVar1 << 10) / (int)uVar3;
            if (uVar3 == 0) {
              trap(0x1c00);
            }
            if ((uVar3 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar9 = (int)uVar1 / iVar2;
            if (iVar2 == 0) {
              trap(0x1c00);
            }
            if ((iVar2 == -1) && (uVar1 == 0x80000000)) {
              trap(0x1800);
            }
          }
          iVar2 = 0x400 - *(short *)(&DAT_800c990c + iVar9 * 2);
        }
        if ((int)uVar4 < 0) {
          iVar2 = 0x800 - iVar2;
        }
        uVar1 = iVar2 - uVar8;
        if ((int)uVar5 < 0) {
          iVar2 = -iVar2;
          goto LAB_800354f8;
        }
      }
      if ((uVar1 & 0xfff) < 0x401) {
LAB_80035510:
        iVar6 = FUN_80034960(param_1,param_2);
        if (iVar6 < 0xfa1) {
          return;
        }
        *(undefined2 *)(param_2 + 0x174) = 0xffff;
        *(undefined2 *)(param_1 + 0x174) = 0xffff;
        if ((*(uint *)(param_1 + 0x40) & 0x10000) != 0) {
          TriggerSlipstreamEffect(iVar6 >> 1,(int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a));
          *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 8;
        }
        if ((*(uint *)(param_2 + 0x40) & 0x10000) == 0) {
          return;
        }
        TriggerSlipstreamEffect(iVar6 >> 1,(int)*(short *)(*(int *)(param_2 + 0x18) + 0x4a));
        *(undefined2 *)(*(int *)(param_2 + 0x28) + 0x78) = 8;
        return;
      }
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 8;
    if (3 < iVar7) {
      return;
    }
  } while( true );
}


