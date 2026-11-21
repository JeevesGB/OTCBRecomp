/* Function: InitManualGearRatios */
/* Address: 80068d98 */

void InitManualGearRatios(undefined1 *param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (*param_2 != 0) {
    do {
      if (*pcVar2 != '\0') {
        bVar1 = *(byte *)(uVar4 * 0x10 + *(int *)(param_2 + 0x1c));
        uVar3 = (undefined1)uVar4;
        if (bVar1 == 2) {
          param_1[iVar6 + 7] = uVar3;
          iVar6 = iVar6 + 1;
        }
        else if (bVar1 < 3) {
          if (bVar1 == 1) {
            param_1[iVar5 + 1] = uVar3;
            iVar5 = iVar5 + 1;
          }
        }
        else if (bVar1 == 3) {
          param_1[iVar7 + 0xd] = uVar3;
          iVar7 = iVar7 + 1;
        }
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != *param_2);
  }
  param_1[0xc] = (char)iVar7;
  iVar7 = 0;
  param_1[6] = (char)iVar6;
  iVar6 = 0;
  *param_1 = (char)iVar5;
  iVar5 = 0;
  param_1[0x3c] = param_2[8];
  uVar4 = 0;
  if (param_2[8] != 0) {
    iVar8 = 0;
    pcVar2 = param_3;
    do {
      if (pcVar2[0x32] != '\0') {
        bVar1 = *(byte *)(iVar8 + *(int *)(param_2 + 0x3c));
        uVar3 = (undefined1)uVar4;
        if (bVar1 == 2) {
          param_1[iVar6 + 0x43] = uVar3;
          iVar6 = iVar6 + 1;
        }
        else if (bVar1 < 3) {
          if (bVar1 == 1) {
            param_1[iVar5 + 0x3d] = uVar3;
            iVar5 = iVar5 + 1;
          }
        }
        else if (bVar1 == 3) {
          param_1[iVar7 + 0x49] = uVar3;
          iVar7 = iVar7 + 1;
        }
      }
      iVar8 = iVar8 + 0xc;
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[8]);
  }
  param_1[0x3c] = (char)iVar5;
  iVar5 = 0;
  param_1[0x42] = (char)iVar6;
  param_1[0x48] = (char)iVar7;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[1] != 0) {
    do {
      if (pcVar2[0xf] != '\0') {
        param_1[iVar5 + 0x13] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[1]);
  }
  param_1[0x12] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[2] != 0) {
    do {
      if (pcVar2[0x14] != '\0') {
        param_1[iVar5 + 0x19] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[2]);
  }
  param_1[0x18] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[3] != 0) {
    do {
      if (pcVar2[0x19] != '\0') {
        param_1[iVar5 + 0x1f] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[3]);
  }
  param_1[0x1e] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[4] != 0) {
    do {
      if (pcVar2[0x1e] != '\0') {
        param_1[iVar5 + 0x25] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[4]);
  }
  param_1[0x24] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[5] != 0) {
    do {
      if (pcVar2[0x23] != '\0') {
        param_1[iVar5 + 0x2b] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[5]);
  }
  param_1[0x2a] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[6] != 0) {
    do {
      if (pcVar2[0x28] != '\0') {
        param_1[iVar5 + 0x31] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[6]);
  }
  param_1[0x30] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[7] != 0) {
    do {
      if (pcVar2[0x2d] != '\0') {
        param_1[iVar5 + 0x37] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[7]);
  }
  param_1[0x36] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[9] != 0) {
    do {
      if (pcVar2[0x41] != '\0') {
        param_1[iVar5 + 0x4f] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[9]);
  }
  param_1[0x4e] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[10] != 0) {
    do {
      if (pcVar2[0x46] != '\0') {
        param_1[iVar5 + 0x55] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[10]);
  }
  param_1[0x54] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0xb] != 0) {
    do {
      if (pcVar2[0x4b] != '\0') {
        param_1[iVar5 + 0x5b] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0xb]);
  }
  param_1[0x5a] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0xc] != 0) {
    do {
      if (pcVar2[0x50] != '\0') {
        param_1[iVar5 + 0x61] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0xc]);
  }
  param_1[0x60] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0xd] != 0) {
    do {
      if (pcVar2[0x55] != '\0') {
        param_1[iVar5 + 0x67] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0xd]);
  }
  param_1[0x66] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0xe] != 0) {
    do {
      if (pcVar2[0x5a] != '\0') {
        param_1[iVar5 + 0x6d] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0xe]);
  }
  param_1[0x6c] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0xf] != 0) {
    do {
      if (pcVar2[0x5f] != '\0') {
        param_1[iVar5 + 0x73] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0xf]);
  }
  param_1[0x72] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x10] != 0) {
    do {
      if (pcVar2[100] != '\0') {
        param_1[iVar5 + 0x79] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x10]);
  }
  param_1[0x78] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x11] != 0) {
    do {
      if (pcVar2[0x69] != '\0') {
        param_1[iVar5 + 0x7f] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x11]);
  }
  param_1[0x7e] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x12] != 0) {
    do {
      if (pcVar2[0x6e] != '\0') {
        param_1[iVar5 + 0x85] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x12]);
  }
  param_1[0x84] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x13] != 0) {
    do {
      if (pcVar2[0x73] != '\0') {
        param_1[iVar5 + 0x8b] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x13]);
  }
  param_1[0x8a] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x14] != 0) {
    do {
      if (pcVar2[0x78] != '\0') {
        param_1[iVar5 + 0x91] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x14]);
  }
  param_1[0x90] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x15] != 0) {
    do {
      if (pcVar2[0x7d] != '\0') {
        param_1[iVar5 + 0x97] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x15]);
  }
  param_1[0x96] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x16] != 0) {
    do {
      if (pcVar2[0x82] != '\0') {
        param_1[iVar5 + 0x9d] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x16]);
  }
  param_1[0x9c] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x17] != 0) {
    do {
      if (pcVar2[0x87] != '\0') {
        param_1[iVar5 + 0xa3] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x17]);
  }
  param_1[0xa2] = (char)iVar5;
  iVar5 = 0;
  uVar4 = 0;
  pcVar2 = param_3;
  if (param_2[0x18] != 0) {
    do {
      if (pcVar2[0x8c] != '\0') {
        param_1[iVar5 + 0xa9] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = param_3 + uVar4;
    } while (uVar4 != param_2[0x18]);
  }
  param_1[0xa8] = (char)iVar5;
  return;
}


