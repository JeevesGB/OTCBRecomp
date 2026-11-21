/* Function: InitAutoGearRatios */
/* Address: 8006a908 */

undefined1 * InitAutoGearRatios(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar10 = 0;
  iVar8 = 0;
  uVar7 = 0;
  if (*param_2 != 0) {
    iVar9 = 0;
    do {
      iVar4 = *(int *)(param_2 + 0x1c);
      cVar2 = FUN_80067710(*(undefined1 *)(iVar9 + iVar4 + 1));
      iVar5 = -1;
      if ((cVar2 == '\0') && (*(byte *)(iVar9 + iVar4 + 1) != param_3)) {
        iVar5 = 0;
      }
      if (iVar5 == -1) {
        bVar1 = *(byte *)(iVar9 + *(int *)(param_2 + 0x1c));
        uVar6 = (undefined1)uVar7;
        if (bVar1 == 2) {
          param_1[iVar10 + 7] = uVar6;
          iVar10 = iVar10 + 1;
        }
        else if (bVar1 < 3) {
          if (bVar1 == 1) {
            param_1[iVar8 + 1] = uVar6;
            iVar8 = iVar8 + 1;
          }
        }
        else if (bVar1 == 3) {
          param_1[iVar11 + 0xd] = uVar6;
          iVar11 = iVar11 + 1;
        }
      }
      iVar9 = iVar9 + 0x10;
      uVar7 = uVar7 + 1;
    } while (uVar7 != *param_2);
  }
  param_1[0xc] = (char)iVar11;
  iVar11 = 0;
  param_1[6] = (char)iVar10;
  iVar10 = 0;
  *param_1 = (char)iVar8;
  iVar8 = 0;
  param_1[0x3c] = param_2[8];
  uVar7 = 0;
  if (param_2[8] != 0) {
    iVar9 = 0;
    do {
      iVar4 = *(int *)(param_2 + 0x3c);
      cVar2 = FUN_80067710(*(undefined1 *)(iVar9 + iVar4 + 1));
      iVar5 = -1;
      if ((cVar2 == '\0') && (*(byte *)(iVar9 + iVar4 + 1) != param_3)) {
        iVar5 = 0;
      }
      if (iVar5 == -1) {
        bVar1 = *(byte *)(iVar9 + *(int *)(param_2 + 0x3c));
        uVar6 = (undefined1)uVar7;
        if (bVar1 == 2) {
          param_1[iVar10 + 0x43] = uVar6;
          iVar10 = iVar10 + 1;
        }
        else if (bVar1 < 3) {
          if (bVar1 == 1) {
            param_1[iVar8 + 0x3d] = uVar6;
            iVar8 = iVar8 + 1;
          }
        }
        else if (bVar1 == 3) {
          param_1[iVar11 + 0x49] = uVar6;
          iVar11 = iVar11 + 1;
        }
      }
      iVar9 = iVar9 + 0xc;
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_2[8]);
  }
  param_1[0x3c] = (char)iVar8;
  cVar2 = '\0';
  param_1[0x42] = (char)iVar10;
  param_1[0x48] = (char)iVar11;
  uVar7 = 0;
  if (param_2[1] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x20);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x13] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[1]);
  }
  param_1[0x12] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[2] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x24);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x19] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[2]);
  }
  param_1[0x18] = cVar2;
  cVar3 = '\0';
  uVar7 = 0;
  cVar2 = '\0';
  if (param_2[3] != 0) {
    do {
      cVar3 = cVar2;
      iVar10 = uVar7 * 0x10 + *(int *)(param_2 + 0x28);
      cVar2 = FUN_80067710(*(undefined1 *)(iVar10 + 1));
      iVar8 = -1;
      if ((cVar2 == '\0') && (*(byte *)(iVar10 + 1) != param_3)) {
        iVar8 = 0;
      }
      if (iVar8 == -1) {
        cVar3 = cVar3 + '\x01';
        param_1[uVar7 + 0x1f] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      cVar2 = cVar3;
    } while (uVar7 != param_2[3]);
  }
  param_1[0x1e] = cVar3;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[4] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x2c);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x25] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[4]);
  }
  param_1[0x24] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[5] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x30);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x2b] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[5]);
  }
  param_1[0x2a] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[6] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x34);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x31] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[6]);
  }
  param_1[0x30] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[7] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x38);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x37] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[7]);
  }
  param_1[0x36] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[9] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x40);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x4f] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[9]);
  }
  param_1[0x4e] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[10] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x44);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x55] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[10]);
  }
  param_1[0x54] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0xb] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x48);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x5b] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0xb]);
  }
  param_1[0x5a] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0xc] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x4c);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x61] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0xc]);
  }
  param_1[0x60] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0xd] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x50);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x67] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0xd]);
  }
  param_1[0x66] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0xe] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x54);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x6d] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0xe]);
  }
  param_1[0x6c] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0xf] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x58);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x73] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0xf]);
  }
  param_1[0x72] = cVar2;
  cVar3 = '\0';
  uVar7 = 0;
  cVar2 = '\0';
  if (param_2[0x10] != 0) {
    do {
      cVar3 = cVar2;
      iVar10 = uVar7 * 0x10 + *(int *)(param_2 + 0x5c);
      cVar2 = FUN_80067710(*(undefined1 *)(iVar10 + 1));
      iVar8 = -1;
      if ((cVar2 == '\0') && (*(byte *)(iVar10 + 1) != param_3)) {
        iVar8 = 0;
      }
      if (iVar8 == -1) {
        cVar3 = cVar3 + '\x01';
        param_1[uVar7 + 0x79] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      cVar2 = cVar3;
    } while (uVar7 != param_2[0x10]);
  }
  param_1[0x78] = cVar3;
  cVar3 = '\0';
  uVar7 = 0;
  cVar2 = '\0';
  if (param_2[0x11] != 0) {
    do {
      cVar3 = cVar2;
      iVar10 = uVar7 * 8 + *(int *)(param_2 + 0x60);
      cVar2 = FUN_80067710(*(undefined1 *)(iVar10 + 1));
      iVar8 = -1;
      if ((cVar2 == '\0') && (*(byte *)(iVar10 + 1) != param_3)) {
        iVar8 = 0;
      }
      if (iVar8 == -1) {
        cVar3 = cVar3 + '\x01';
        param_1[uVar7 + 0x7f] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      cVar2 = cVar3;
    } while (uVar7 != param_2[0x11]);
  }
  param_1[0x7e] = cVar3;
  cVar3 = '\0';
  uVar7 = 0;
  cVar2 = '\0';
  if (param_2[0x12] != 0) {
    do {
      cVar3 = cVar2;
      iVar10 = uVar7 * 0x10 + *(int *)(param_2 + 100);
      cVar2 = FUN_80067710(*(undefined1 *)(iVar10 + 1));
      iVar8 = -1;
      if ((cVar2 == '\0') && (*(byte *)(iVar10 + 1) != param_3)) {
        iVar8 = 0;
      }
      if (iVar8 == -1) {
        cVar3 = cVar3 + '\x01';
        param_1[uVar7 + 0x85] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      cVar2 = cVar3;
    } while (uVar7 != param_2[0x12]);
  }
  param_1[0x84] = cVar3;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0x13] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x68);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x8b] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0x13]);
  }
  param_1[0x8a] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0x14] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x6c);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x91] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0x14]);
  }
  param_1[0x90] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0x15] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x70);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x97] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0x15]);
  }
  param_1[0x96] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0x16] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x74);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0x9d] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0x16]);
  }
  param_1[0x9c] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0x17] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x78);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0xa3] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0x17]);
  }
  param_1[0xa2] = cVar2;
  cVar2 = '\0';
  uVar7 = 0;
  if (param_2[0x18] != 0) {
    iVar8 = 0;
    cVar2 = '\0';
    do {
      iVar10 = *(int *)(param_2 + 0x7c);
      cVar3 = FUN_80067710(*(undefined1 *)(iVar8 + iVar10 + 1));
      iVar11 = -1;
      if ((cVar3 == '\0') && (*(byte *)(iVar8 + iVar10 + 1) != param_3)) {
        iVar11 = 0;
      }
      if (iVar11 == -1) {
        cVar2 = cVar2 + '\x01';
        param_1[uVar7 + 0xa9] = (char)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != param_2[0x18]);
  }
  param_1[0xa8] = cVar2;
  return param_1;
}


