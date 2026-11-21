/* Function: FUN_8006a2bc */
/* Address: 8006a2bc */

int FUN_8006a2bc(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar1 != *param_1);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[1]);
  }
  uVar1 = 0;
  if (param_1[2] != 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[2]);
  }
  uVar1 = 0;
  if (param_1[3] != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar1 != param_1[3]);
  }
  uVar1 = 0;
  if (param_1[4] != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[4]);
  }
  uVar1 = 0;
  if (param_1[5] != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[5]);
  }
  uVar1 = 0;
  if (param_1[6] != 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[6]);
  }
  uVar1 = 0;
  if (param_1[7] != 0) {
    iVar3 = *(int *)(param_1 + 0x38);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[7]);
  }
  uVar1 = 0;
  if (param_1[8] != 0) {
    iVar3 = *(int *)(param_1 + 0x3c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[8]);
  }
  uVar1 = 0;
  if (param_1[9] != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[9]);
  }
  uVar1 = 0;
  if (param_1[10] != 0) {
    iVar3 = *(int *)(param_1 + 0x44);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[10]);
  }
  uVar1 = 0;
  if (param_1[0xb] != 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0xb]);
  }
  uVar1 = 0;
  if (param_1[0xc] != 0) {
    iVar3 = *(int *)(param_1 + 0x4c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0xc]);
  }
  uVar1 = 0;
  if (param_1[0xd] != 0) {
    iVar3 = *(int *)(param_1 + 0x50);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0xd]);
  }
  uVar1 = 0;
  if (param_1[0xe] != 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0xe]);
  }
  uVar1 = 0;
  if (param_1[0xf] != 0) {
    iVar3 = *(int *)(param_1 + 0x58);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0xf]);
  }
  uVar1 = 0;
  if (param_1[0x10] != 0) {
    iVar3 = *(int *)(param_1 + 0x5c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar1 != param_1[0x10]);
  }
  uVar1 = 0;
  if (param_1[0x11] != 0) {
    iVar3 = *(int *)(param_1 + 0x60);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 8;
    } while (uVar1 != param_1[0x11]);
  }
  uVar1 = 0;
  if (param_1[0x12] != 0) {
    iVar3 = *(int *)(param_1 + 100);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar1 != param_1[0x12]);
  }
  uVar1 = 0;
  if (param_1[0x13] != 0) {
    iVar3 = *(int *)(param_1 + 0x68);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0x13]);
  }
  uVar1 = 0;
  if (param_1[0x14] != 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0x14]);
  }
  uVar1 = 0;
  if (param_1[0x15] != 0) {
    iVar3 = *(int *)(param_1 + 0x70);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0x15]);
  }
  uVar1 = 0;
  if (param_1[0x16] != 0) {
    iVar3 = *(int *)(param_1 + 0x74);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0x16]);
  }
  uVar1 = 0;
  if (param_1[0x17] != 0) {
    iVar3 = *(int *)(param_1 + 0x78);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0x17]);
  }
  uVar1 = 0;
  if (param_1[0x18] != 0) {
    iVar3 = *(int *)(param_1 + 0x7c);
    do {
      if (*(char *)(iVar3 + 3) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar1 != param_1[0x18]);
  }
  return iVar2;
}


