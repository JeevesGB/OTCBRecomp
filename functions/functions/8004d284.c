/* Function: FUN_8004d284 */
/* Address: 8004d284 */

void FUN_8004d284(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x1f8);
  if ((*(short *)(param_1 + 0x1f2) == 0) ||
     (((sVar1 != 0 && (*(short *)(param_1 + 500) == 0)) && (0x3b < *(short *)(param_1 + 0x5c))))) {
    *(undefined2 *)(param_1 + 500) = 0;
    if (*(short *)(param_1 + 0x1f6) == 2) {
      if (*(short *)(param_1 + 0x44) < 2) {
        if (((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4e) & 0x10) != 0) &&
           ((int)*(short *)(param_1 + 0x1f8) < *(short *)(param_1 + 0x1fa) + -1)) {
          *(short *)(param_1 + 0x1f8) = *(short *)(param_1 + 0x1f8) + 1;
        }
        if ((((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4e) & 0x20) != 0) &&
            (0 < *(short *)(param_1 + 0x1f8))) &&
           (*(short *)(param_1 + 0x1f8) = *(short *)(param_1 + 0x1f8) + -1,
           *(short *)(param_1 + 0x44) == 1)) {
          FUN_8004f264(param_1);
        }
      }
    }
    else if (*(short *)(param_1 + 0x1f6) == 3) {
      if (*(short *)(param_1 + 0x44) < 2) {
        if (((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4e) & 0x10) != 0) &&
           ((int)*(short *)(param_1 + 0x1f8) < *(short *)(param_1 + 0x1fa) + -1)) {
          *(short *)(param_1 + 0x1f8) = *(short *)(param_1 + 0x1f8) + 1;
        }
        if ((((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4e) & 0x20) != 0) &&
            (0 < *(short *)(param_1 + 0x1f8))) &&
           (*(short *)(param_1 + 0x1f8) = *(short *)(param_1 + 0x1f8) + -1,
           *(short *)(param_1 + 0x44) == 1)) {
          FUN_8004f264(param_1);
        }
      }
      FUN_8004d070(param_1);
    }
  }
  else {
    *(undefined2 *)(param_1 + 500) = 0xffff;
    *(undefined2 *)(param_1 + 0x1f8) = 0;
  }
  if (sVar1 < *(short *)(param_1 + 0x1f8)) {
    *(undefined2 *)(param_1 + 0x1fc) = 2;
    *(undefined2 *)(param_1 + 0x1fe) = 0x1e;
  }
  else if (*(short *)(param_1 + 0x1f8) < sVar1) {
    *(undefined2 *)(param_1 + 0x1fc) = 1;
    *(undefined2 *)(param_1 + 0x200) = 0x1e;
  }
  if (*(short *)(param_1 + 0x1fe) != 0) {
    *(short *)(param_1 + 0x1fe) = *(short *)(param_1 + 0x1fe) + -1;
  }
  if (*(short *)(param_1 + 0x200) != 0) {
    *(short *)(param_1 + 0x200) = *(short *)(param_1 + 0x200) + -1;
  }
  return;
}


