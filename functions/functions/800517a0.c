/* Function: FUN_800517a0 */
/* Address: 800517a0 */

void FUN_800517a0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = g_CarPositionFlag;
  if (g_VSModeFlag == 0) {
    iVar8 = 0;
    if (g_RaceComplete != 0) {
      iVar8 = -1;
    }
    iVar3 = (&g_CameraList)[g_CameraFlag2];
    for (iVar2 = g_CarPositionFlag; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 0x18) != 0) {
        iVar4 = CalcDistance2D((*(int *)(iVar2 + 0x68) >> 5) + *(int *)(iVar3 + 0x54) * -0x80,
                               (*(int *)(iVar2 + 0x70) >> 5) + *(int *)(iVar3 + 0x5c) * -0x80);
        uVar5 = 0;
        bVar1 = false;
        if (iVar8 == 0) {
          if (*(short *)(iVar2 + 0x44) == 2) {
            uVar5 = 3;
          }
          else {
            if (*(short *)(iVar2 + 0x44) < 3) goto LAB_800519b8;
            uVar5 = 5;
          }
          bVar1 = true;
        }
        else if (2 < *(short *)(iVar2 + 0x44)) {
          uVar5 = 6;
          bVar1 = false;
        }
LAB_800519b8:
        iVar7 = *(int *)(iVar2 + 0x18);
        iVar6 = *(int *)(iVar7 + 0x2c) + iVar4;
        if (iVar4 < 0x1312d0) {
          iVar4 = *(int *)(iVar7 + 0x2c) - (iVar6 >> 1);
          if (bVar1) {
            iVar4 = iVar4 >> 3;
          }
          else {
            iVar4 = iVar4 >> 4;
          }
          if (iVar4 < 0) {
            iVar4 = iVar4 + 3;
            if (iVar4 < 1) {
              if (iVar4 < -0x226) {
                iVar4 = -0x226;
              }
            }
            else {
LAB_80051a1c:
              iVar4 = 0;
            }
          }
          else {
            iVar4 = iVar4 + -3;
            if (iVar4 < 0) goto LAB_80051a1c;
            if (400 < iVar4) {
              iVar4 = 400;
            }
          }
          *(short *)(iVar7 + 0x4c) = (short)iVar4;
        }
        iVar4 = iVar6 >> 0xd;
        if (!bVar1) {
          iVar4 = iVar6 >> 0xe;
        }
        iVar4 = iVar4 + *(short *)((int)&DAT_800af07c + (uVar5 & 6));
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0x80 < iVar4) {
          iVar4 = 0x80;
        }
        *(short *)(iVar7 + 0x4a) = 0x80 - (short)iVar4;
        *(int *)(iVar7 + 0x2c) = iVar6 >> 1;
      }
    }
  }
  else {
    for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
      if (*(int *)(iVar8 + 0x18) != 0) {
        iVar2 = CalcDistance2D((*(int *)(iVar8 + 0x68) >> 5) +
                               *(int *)(*(int *)(iVar8 + 0x38) + 0x54) * -0x80,
                               (*(int *)(iVar8 + 0x70) >> 5) +
                               *(int *)(*(int *)(iVar8 + 0x38) + 0x5c) * -0x80);
        iVar4 = *(int *)(iVar8 + 0x18);
        iVar3 = *(int *)(iVar4 + 0x2c) + iVar2;
        iVar6 = iVar3 >> 1;
        if (iVar2 < 0x1312d0) {
          iVar2 = *(int *)(iVar4 + 0x2c) - iVar6 >> 4;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 3;
            if (iVar2 < 1) {
              if (iVar2 < -0x226) {
                iVar2 = -0x226;
              }
            }
            else {
LAB_8005187c:
              iVar2 = 0;
            }
          }
          else {
            iVar2 = iVar2 + -3;
            if (iVar2 < 0) goto LAB_8005187c;
            if (400 < iVar2) {
              iVar2 = 400;
            }
          }
          *(short *)(iVar4 + 0x4c) = (short)iVar2;
        }
        iVar2 = (iVar3 >> 0xe) + (int)DAT_800af07c;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x80 < iVar2) {
          iVar2 = 0x80;
        }
        *(short *)(iVar4 + 0x4a) = 0x80 - (short)iVar2;
        *(int *)(iVar4 + 0x2c) = iVar6;
      }
    }
  }
  return;
}


