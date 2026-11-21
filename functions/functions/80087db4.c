/* Function: FUN_80087db4 */
/* Address: 80087db4 */

void FUN_80087db4(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  do {
    if (*(char *)(param_3 + iVar5) == '\x02') {
      iVar2 = iVar5 * 0x10 + *(int *)(param_4 + 0x1c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar2 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar2 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar2 + 10);
    }
    if (((char *)(param_3 + iVar5))[0x32] == '\x02') {
      iVar2 = iVar4 + *(int *)(param_4 + 0x3c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar2 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar2 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar2 + 10);
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar5 != 0xf);
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_3 + 0xf) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x20);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x14) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x24);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x19) == '\x02') {
      iVar3 = iVar2 + *(int *)(param_4 + 0x28);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x1e) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x2c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x23) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x30);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x28) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x34);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x2d) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x38);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x41) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x40);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x46) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x44);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x4b) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x48);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x50) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x4c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x55) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x50);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x5a) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x54);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x5f) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x58);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 100) == '\x02') {
      iVar3 = iVar2 + *(int *)(param_4 + 0x5c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x87) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x78);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    if (*(char *)(param_3 + 0x8c) == '\x02') {
      iVar3 = iVar4 + *(int *)(param_4 + 0x7c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + *(char *)(iVar3 + 8);
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + *(char *)(iVar3 + 9);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(iVar3 + 10);
    }
    iVar4 = iVar4 + 0xc;
    iVar2 = iVar2 + 0x10;
    iVar5 = iVar5 + 1;
    param_3 = param_3 + 1;
  } while (iVar5 != 5);
  uVar1 = FUN_80067944(param_5);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return;
}


