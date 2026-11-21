/* Function: FUN_8003cee4 */
/* Address: 8003cee4 */

void FUN_8003cee4(int param_1,byte *param_2)

{
  ushort uVar1;
  
  if (*param_2 < 0x10) {
    *(undefined2 *)(param_1 + 0x3e) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x3e) = 0xffff;
    *(ushort *)(param_1 + 0x56) = *param_2 & 7;
  }
  if (param_2[1] < 0x10) {
    *(undefined2 *)(param_1 + 0x40) = 0;
    uVar1 = (ushort)(1 << (param_2[1] & 0x1f));
  }
  else {
    *(undefined2 *)(param_1 + 0x40) = 0xffff;
    uVar1 = param_2[1] & 7;
  }
  *(ushort *)(param_1 + 0x58) = uVar1;
  if (param_2[2] < 0x10) {
    *(undefined2 *)(param_1 + 0x42) = 0;
    uVar1 = (ushort)(1 << (param_2[2] & 0x1f));
  }
  else {
    *(undefined2 *)(param_1 + 0x42) = 0xffff;
    uVar1 = param_2[2] & 7;
  }
  *(ushort *)(param_1 + 0x5a) = uVar1;
  *(short *)(param_1 + 0x5c) = (short)(1 << (param_2[3] & 0x1f));
  *(short *)(param_1 + 0x5e) = (short)(1 << (param_2[4] & 0x1f));
  if (param_2[7] < 0x10) {
    *(undefined2 *)(param_1 + 0x44) = 0;
    uVar1 = (ushort)(1 << (param_2[7] & 0x1f));
  }
  else {
    *(undefined2 *)(param_1 + 0x44) = 0xffff;
    uVar1 = param_2[7] & 7;
  }
  *(ushort *)(param_1 + 0x60) = uVar1;
  if (param_2[5] < 0x10) {
    *(undefined2 *)(param_1 + 0x46) = 0;
    uVar1 = (ushort)(1 << (param_2[5] & 0x1f));
  }
  else {
    *(undefined2 *)(param_1 + 0x46) = 0xffff;
    uVar1 = param_2[5] & 7;
  }
  *(ushort *)(param_1 + 100) = uVar1;
  if (param_2[6] < 0x10) {
    *(undefined2 *)(param_1 + 0x48) = 0;
    uVar1 = (ushort)(1 << (param_2[6] & 0x1f));
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = 0xffff;
    uVar1 = param_2[6] & 7;
  }
  *(ushort *)(param_1 + 0x66) = uVar1;
  if (param_2[8] < 0x10) {
    *(undefined2 *)(param_1 + 0x4a) = 0;
    uVar1 = (ushort)(1 << (param_2[8] & 0x1f));
  }
  else {
    *(undefined2 *)(param_1 + 0x4a) = 0xffff;
    uVar1 = param_2[8] & 7;
  }
  *(ushort *)(param_1 + 0x62) = uVar1;
  *(ushort *)(param_1 + 0x68) = (ushort)param_2[9];
  *(ushort *)(param_1 + 0x6c) = (ushort)param_2[10];
  *(ushort *)(param_1 + 0x6e) = (ushort)param_2[0xb];
  *(ushort *)(param_1 + 0x70) = (ushort)param_2[0xc];
  if ((param_2[0xd] & 0x80) == 0) {
    uVar1 = (ushort)param_2[0xd];
  }
  else {
    uVar1 = param_2[0xd] | 0xff00;
  }
  *(ushort *)(param_1 + 0x72) = uVar1;
  *(ushort *)(param_1 + 0x74) = (ushort)param_2[0xe];
  if ((param_2[0xf] & 0x80) == 0) {
    uVar1 = (ushort)param_2[0xf];
  }
  else {
    uVar1 = param_2[0xf] | 0xff00;
  }
  *(ushort *)(param_1 + 0x76) = uVar1;
  return;
}


