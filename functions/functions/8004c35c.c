/* Function: FUN_8004c35c */
/* Address: 8004c35c */

void FUN_8004c35c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(short *)(param_1 + 0x172) =
       (short)(((int)*(short *)(iVar4 + 0x2a) + (int)*(short *)(iVar4 + 0x32)) / 2);
  *(undefined2 *)(param_1 + 0x16e) = *(undefined2 *)(iVar4 + 0x22);
  uVar1 = *(undefined2 *)(iVar4 + 0x40);
  *(undefined2 *)(param_1 + 0x39e) = uVar1;
  *(undefined2 *)(param_1 + 0x39c) = uVar1;
  uVar1 = *(undefined2 *)(iVar4 + 0x42);
  *(undefined2 *)(param_1 + 0x3a2) = uVar1;
  *(undefined2 *)(param_1 + 0x3a0) = uVar1;
  iVar2 = (((int)*(short *)(iVar4 + 0x28) - (int)*(short *)(iVar4 + 0x2c)) +
          (int)*(short *)(iVar4 + 0x30)) - (int)*(short *)(iVar4 + 0x34);
  iVar3 = iVar2 * 0x10;
  *(short *)(param_1 + 0x1c8) = (short)(iVar2 >> 1);
  *(int *)(param_1 + 0x1cc) = iVar3 * iVar3;
  iVar2 = (((int)*(short *)(iVar4 + 0x2a) - (int)*(short *)(iVar4 + 0x32)) +
          (int)*(short *)(iVar4 + 0x2e)) - (int)*(short *)(iVar4 + 0x36);
  iVar3 = iVar2 * 0x10;
  iVar4 = *(int *)(param_1 + 0x10);
  *(short *)(param_1 + 0x1ca) = (short)(iVar2 >> 1);
  *(int *)(param_1 + 0x1d0) = iVar3 * iVar3;
  *(undefined2 *)(param_1 + 0x264) = *(undefined2 *)(iVar4 + 0x4e);
  *(undefined2 *)(param_1 + 0x266) = *(undefined2 *)(iVar4 + 0x50);
  uVar1 = *(undefined2 *)(iVar4 + 0x52);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined2 *)(param_1 + 0x268) = uVar1;
  *(undefined2 *)(param_1 + 0x16c) = *(undefined2 *)(iVar4 + 2);
  *(uint *)(param_1 + 0x17c) = (uint)*(ushort *)(iVar4 + 0x44);
  *(uint *)(param_1 + 0x180) = (uint)*(ushort *)(iVar4 + 0x46);
  *(uint *)(param_1 + 0x184) = (uint)*(ushort *)(iVar4 + 0x48);
  *(undefined2 *)(param_1 + 0x1c4) = *(undefined2 *)(iVar4 + 0x4a);
  uVar1 = *(undefined2 *)(iVar4 + 0x4c);
  *(undefined2 *)(param_1 + 0x1b6) = 0x400;
  *(undefined2 *)(param_1 + 0x1b4) = 0x400;
  *(undefined2 *)(param_1 + 0x1b2) = 0x400;
  *(undefined2 *)(param_1 + 0x1b0) = 0x400;
  *(undefined2 *)(param_1 + 0x1c6) = uVar1;
  return;
}


