/* Function: FUN_80035d50 */
/* Address: 80035d50 */

void FUN_80035d50(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = (int *)(param_2 + param_3 * 0x1c + 0xc);
  iVar7 = 0;
  iVar8 = piVar2[5];
  iVar6 = param_2 + piVar2[4] + 0xc;
  param_2 = param_2 + *piVar2 + 0xc;
  if (0 < iVar8) {
    do {
      uVar3 = *(ushort *)(iVar6 + 2) & 0x3d04;
      if (uVar3 == 0x2d00) {
        psVar5 = (short *)(*(short *)(iVar6 + 0x18) * 8 + param_2);
        iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
        if (iVar4 < *param_1) {
          *param_1 = (short)iVar4;
        }
        if (param_1[1] < iVar4) {
          param_1[1] = (short)iVar4;
        }
        if (psVar5[1] < param_1[2]) {
          param_1[2] = psVar5[1];
        }
        if (param_1[3] < psVar5[1]) {
          param_1[3] = psVar5[1];
        }
        iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
        if (iVar4 < param_1[4]) {
          param_1[4] = (short)iVar4;
        }
        if (param_1[5] < iVar4) {
          param_1[5] = (short)iVar4;
        }
        psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
        iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
        if (iVar4 < *param_1) {
          *param_1 = (short)iVar4;
        }
        if (param_1[1] < iVar4) {
          param_1[1] = (short)iVar4;
        }
        if (psVar5[1] < param_1[2]) {
          param_1[2] = psVar5[1];
        }
        if (param_1[3] < psVar5[1]) {
          param_1[3] = psVar5[1];
        }
        iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
        if (iVar4 < param_1[4]) {
          param_1[4] = (short)iVar4;
        }
        if (param_1[5] < iVar4) {
          param_1[5] = (short)iVar4;
        }
        psVar5 = (short *)(*(short *)(iVar6 + 0x1c) * 8 + param_2);
        iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
        if (iVar4 < *param_1) {
          *param_1 = (short)iVar4;
        }
        if (param_1[1] < iVar4) {
          param_1[1] = (short)iVar4;
        }
        if (psVar5[1] < param_1[2]) {
          param_1[2] = psVar5[1];
        }
        if (param_1[3] < psVar5[1]) {
          param_1[3] = psVar5[1];
        }
        iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
        if (iVar4 < param_1[4]) {
          param_1[4] = (short)iVar4;
        }
        if (param_1[5] < iVar4) {
          param_1[5] = (short)iVar4;
        }
        psVar5 = (short *)(*(short *)(iVar6 + 0x1e) * 8 + param_2);
        iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
        if (iVar4 < *param_1) {
          *param_1 = (short)iVar4;
        }
        if (param_1[1] < iVar4) {
          param_1[1] = (short)iVar4;
        }
        if (psVar5[1] < param_1[2]) {
          param_1[2] = psVar5[1];
        }
        bVar1 = param_1[3] < psVar5[1];
LAB_80039ad0:
        if (bVar1) {
          param_1[3] = psVar5[1];
        }
        iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
        if (iVar4 < param_1[4]) {
          param_1[4] = (short)iVar4;
        }
        if (param_1[5] < iVar4) {
          param_1[5] = (short)iVar4;
        }
      }
      else {
        if (0x2d00 < uVar3) {
          if (uVar3 == 0x3500) {
            psVar5 = (short *)(*(short *)(iVar6 + 0x1c) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1e) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x20) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else if (uVar3 < 0x3501) {
            if (uVar3 == 0x3004) {
              psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              bVar1 = param_1[3] < psVar5[1];
            }
            else if (uVar3 < 0x3005) {
              if (uVar3 != 0x3000) goto LAB_80039b34;
              psVar5 = (short *)(*(short *)(iVar6 + 10) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0xe) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              bVar1 = param_1[3] < psVar5[1];
            }
            else if (uVar3 == 0x3100) {
              psVar5 = (short *)(*(short *)(iVar6 + 0x10) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x14) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              bVar1 = param_1[3] < psVar5[1];
            }
            else {
              if (uVar3 != 0x3400) goto LAB_80039b34;
              psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              bVar1 = param_1[3] < psVar5[1];
            }
          }
          else if (uVar3 == 0x3900) {
            psVar5 = (short *)(*(short *)(iVar6 + 0x14) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x18) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else if (uVar3 < 0x3901) {
            if (uVar3 == 0x3800) {
              psVar5 = (short *)(*(short *)(iVar6 + 10) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0xe) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              bVar1 = param_1[3] < psVar5[1];
            }
            else {
              if (uVar3 != 0x3804) goto LAB_80039b34;
              psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x1e) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              if (param_1[3] < psVar5[1]) {
                param_1[3] = psVar5[1];
              }
              iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
              if (iVar4 < param_1[4]) {
                param_1[4] = (short)iVar4;
              }
              if (param_1[5] < iVar4) {
                param_1[5] = (short)iVar4;
              }
              psVar5 = (short *)(*(short *)(iVar6 + 0x22) * 8 + param_2);
              iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
              if (iVar4 < *param_1) {
                *param_1 = (short)iVar4;
              }
              if (param_1[1] < iVar4) {
                param_1[1] = (short)iVar4;
              }
              if (psVar5[1] < param_1[2]) {
                param_1[2] = psVar5[1];
              }
              bVar1 = param_1[3] < psVar5[1];
            }
          }
          else if (uVar3 == 0x3c00) {
            psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1e) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x22) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else {
            if (uVar3 != 0x3d00) goto LAB_80039b34;
            psVar5 = (short *)(*(short *)(iVar6 + 0x24) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x26) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x28) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x2a) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          goto LAB_80039ad0;
        }
        if (uVar3 == 0x2500) {
          psVar5 = (short *)(*(short *)(iVar6 + 0x14) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          if (param_1[3] < psVar5[1]) {
            param_1[3] = psVar5[1];
          }
          iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
          if (iVar4 < param_1[4]) {
            param_1[4] = (short)iVar4;
          }
          if (param_1[5] < iVar4) {
            param_1[5] = (short)iVar4;
          }
          psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          if (param_1[3] < psVar5[1]) {
            param_1[3] = psVar5[1];
          }
          iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
          if (iVar4 < param_1[4]) {
            param_1[4] = (short)iVar4;
          }
          if (param_1[5] < iVar4) {
            param_1[5] = (short)iVar4;
          }
          psVar5 = (short *)(*(short *)(iVar6 + 0x18) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          bVar1 = param_1[3] < psVar5[1];
          goto LAB_80039ad0;
        }
        if (0x2500 < uVar3) {
          if (uVar3 == 0x2804) {
            psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x18) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1c) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else if (uVar3 < 0x2805) {
            if (uVar3 != 0x2800) goto LAB_80039b34;
            psVar5 = (short *)(*(short *)(iVar6 + 10) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0xc) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0xe) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x10) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else if (uVar3 == 0x2900) {
            psVar5 = (short *)(*(short *)(iVar6 + 8) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 10) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0xc) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0xe) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else {
            if (uVar3 != 0x2c00) goto LAB_80039b34;
            psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x18) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1a) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x1c) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          goto LAB_80039ad0;
        }
        if (uVar3 == 0x2004) {
          psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          if (param_1[3] < psVar5[1]) {
            param_1[3] = psVar5[1];
          }
          iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
          if (iVar4 < param_1[4]) {
            param_1[4] = (short)iVar4;
          }
          if (param_1[5] < iVar4) {
            param_1[5] = (short)iVar4;
          }
          psVar5 = (short *)(*(short *)(iVar6 + 0x14) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          if (param_1[3] < psVar5[1]) {
            param_1[3] = psVar5[1];
          }
          iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
          if (iVar4 < param_1[4]) {
            param_1[4] = (short)iVar4;
          }
          if (param_1[5] < iVar4) {
            param_1[5] = (short)iVar4;
          }
          psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          bVar1 = param_1[3] < psVar5[1];
          goto LAB_80039ad0;
        }
        if (0x2004 < uVar3) {
          if (uVar3 == 0x2100) {
            psVar5 = (short *)(*(short *)(iVar6 + 8) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 10) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0xc) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          else {
            if (uVar3 != 0x2400) goto LAB_80039b34;
            psVar5 = (short *)(*(short *)(iVar6 + 0x12) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x14) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            if (param_1[3] < psVar5[1]) {
              param_1[3] = psVar5[1];
            }
            iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
            if (iVar4 < param_1[4]) {
              param_1[4] = (short)iVar4;
            }
            if (param_1[5] < iVar4) {
              param_1[5] = (short)iVar4;
            }
            psVar5 = (short *)(*(short *)(iVar6 + 0x16) * 8 + param_2);
            iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
            if (iVar4 < *param_1) {
              *param_1 = (short)iVar4;
            }
            if (param_1[1] < iVar4) {
              param_1[1] = (short)iVar4;
            }
            if (psVar5[1] < param_1[2]) {
              param_1[2] = psVar5[1];
            }
            bVar1 = param_1[3] < psVar5[1];
          }
          goto LAB_80039ad0;
        }
        if (uVar3 == 0x2000) {
          psVar5 = (short *)(*(short *)(iVar6 + 10) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          if (param_1[3] < psVar5[1]) {
            param_1[3] = psVar5[1];
          }
          iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
          if (iVar4 < param_1[4]) {
            param_1[4] = (short)iVar4;
          }
          if (param_1[5] < iVar4) {
            param_1[5] = (short)iVar4;
          }
          psVar5 = (short *)(*(short *)(iVar6 + 0xc) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          if (param_1[3] < psVar5[1]) {
            param_1[3] = psVar5[1];
          }
          iVar4 = psVar5[2] * param_5 - *psVar5 * param_4 >> 0xc;
          if (iVar4 < param_1[4]) {
            param_1[4] = (short)iVar4;
          }
          if (param_1[5] < iVar4) {
            param_1[5] = (short)iVar4;
          }
          psVar5 = (short *)(*(short *)(iVar6 + 0xe) * 8 + param_2);
          iVar4 = psVar5[2] * param_4 + *psVar5 * param_5 >> 0xc;
          if (iVar4 < *param_1) {
            *param_1 = (short)iVar4;
          }
          if (param_1[1] < iVar4) {
            param_1[1] = (short)iVar4;
          }
          if (psVar5[1] < param_1[2]) {
            param_1[2] = psVar5[1];
          }
          bVar1 = param_1[3] < psVar5[1];
          goto LAB_80039ad0;
        }
      }
LAB_80039b34:
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + (*(byte *)(iVar6 + 1) + 1) * 4;
    } while (iVar7 < iVar8);
  }
  return;
}


