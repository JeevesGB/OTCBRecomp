/* Function: FUN_8004b598 */
/* Address: 8004b598 */

void FUN_8004b598(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  long local_8 [2];
  
  DAT_1f800094 = 0;
  puVar6 = (uint *)local_8;
  if (((3 < *(short *)(param_1 + 0x360)) && (*(int *)(param_1 + 0x60) < 0x3b41)) &&
     (*(short *)(param_1 + 0x35c) < 0x259)) {
    iVar5 = *(int *)(param_1 + 0x50);
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    if (iVar4 < 0x4e21) {
      iVar1 = *(int *)(param_1 + 0x54);
      iVar4 = iVar1;
      if (iVar1 < 0) {
        iVar4 = -iVar1;
      }
      if (iVar4 < 0x4e21) {
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = -iVar3;
        }
        if (iVar4 < 0x4e21) {
          iVar4 = iVar5 * iVar5 + iVar1 * iVar1 + iVar3 * iVar3;
          gte_Lzc(iVar4,local_8);
          if ((int)*puVar6 < 0x20) {
            uVar2 = *puVar6 & 0xfffffffe;
            *puVar6 = uVar2;
            if ((int)uVar2 < 0x18) {
              iVar4 = iVar4 >> (0x18 - uVar2 & 0x1f);
            }
            else {
              iVar4 = iVar4 << (uVar2 - 0x18 & 0x1f);
            }
            iVar4 = ((int)*(short *)(&DAT_800c577c + (iVar4 + -0x40) * 2) <<
                    ((int)(0x1f - uVar2) >> 1 & 0x1fU)) >> 0xc;
          }
          iVar4 = iVar4 >> 1;
          if (iVar4 < 0x1001) {
            iVar5 = DAT_1f800078;
            if (DAT_1f800078 < 0) {
              iVar5 = -DAT_1f800078;
            }
            iVar5 = iVar5 >> 3;
            if (iVar5 < 0x1001) {
              if (iVar4 < iVar5) {
                iVar4 = iVar5;
              }
              iVar5 = DAT_1f800088;
              if (DAT_1f800088 < 0) {
                iVar5 = -DAT_1f800088;
              }
              iVar5 = iVar5 >> 3;
              if (iVar5 < 0x1001) {
                if (iVar4 < iVar5) {
                  iVar4 = iVar5;
                }
                iVar5 = DAT_1f800084;
                if (DAT_1f800084 < 0) {
                  iVar5 = -DAT_1f800084;
                }
                iVar5 = iVar5 >> 3;
                if (iVar5 < 0x1001) {
                  if (iVar4 < iVar5) {
                    iVar4 = iVar5;
                  }
                  DAT_1f800094 = 0x1000 - iVar4;
                  iVar4 = DAT_1f800078 * DAT_1f800094;
                  if (DAT_1f800094 < 0) {
                    DAT_1f800094 = 0;
                    iVar4 = 0;
                  }
                  DAT_1f800078 = DAT_1f800078 - (iVar4 >> 0xc);
                  DAT_1f800084 = DAT_1f800084 - (DAT_1f800084 * DAT_1f800094 >> 0xc);
                  DAT_1f800088 = DAT_1f800088 - (DAT_1f800088 * DAT_1f800094 >> 0xc);
                  DAT_1f800070 = DAT_1f800070 - (DAT_1f800070 * DAT_1f800094 >> 0xc);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


