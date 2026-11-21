/* Function: UpdateCarTurbo */
/* Address: 8004c6b0 */

void UpdateCarTurbo(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x3d0) == 0) {
    if (800 < *(short *)(param_1 + 0x35c)) {
      *(undefined2 *)(param_1 + 0x3d0) = 0xffff;
      *(undefined2 *)(param_1 + 0x3d8) = 5;
    }
    goto LAB_8004c778;
  }
  sVar1 = *(short *)(param_1 + 0x3da);
  iVar2 = (int)sVar1;
  if (*(short *)(param_1 + 0x35c) < 0x28a) {
    *(undefined2 *)(param_1 + 0x3d0) = 0;
LAB_8004c74c:
    *(short *)(param_1 + 0x3da) = (short)iVar2;
  }
  else {
    if (*(short *)(param_1 + 0x3d8) != 0) {
      sVar1 = *(short *)(param_1 + 0x35e);
      iVar2 = (int)sVar1;
      *(short *)(param_1 + 0x3d8) = *(short *)(param_1 + 0x3d8) + -1;
      if (iVar2 < 0x5dc) {
        iVar2 = 0x5dc;
      }
      goto LAB_8004c74c;
    }
    if (*(short *)(param_1 + 0x210) < 1) {
      iVar2 = *(short *)(param_1 + 0x3dc) + -0x3c;
      sVar1 = 0;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      goto LAB_8004c74c;
    }
    iVar2 = *(short *)(param_1 + 0x3dc) + 0x1e;
    if (0x1000 < iVar2) {
      iVar2 = 0x1000;
    }
    sVar1 = *(short *)(param_1 + 0x35e);
    *(short *)(param_1 + 0x3da) = (short)iVar2;
  }
  *(short *)(param_1 + 0x3dc) = sVar1;
LAB_8004c778:
  *(undefined2 *)(param_1 + 0x3d4) = *(undefined2 *)(param_1 + 0x210);
  *(undefined2 *)(param_1 + 0x3d6) = *(undefined2 *)(param_1 + 0x238);
  return;
}


