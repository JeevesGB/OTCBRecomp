/* Function: FUN_80066d8c */
/* Address: 80066d8c */

undefined4 FUN_80066d8c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x3f);
  if (bVar1 == 1) {
    FUN_80063a34(param_1,*(undefined4 *)(param_1 + 100),*(undefined1 *)(param_1 + 0x3e));
    *(char *)(param_1 + 0x3f) = *(char *)(param_1 + 0x3f) + -1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
      return 0xffffffff;
    }
    if (bVar1 == 2) {
      FUN_80063b18(param_1,(int)*(short *)(param_1 + 0x3c));
      *(char *)(param_1 + 0x3f) = *(char *)(param_1 + 0x3f) + -1;
    }
    else {
      if (bVar1 != 3) {
        return 0;
      }
      if (-1 < *(short *)(param_1 + 0x34)) {
        FUN_80063e18(param_1);
        return 0;
      }
      *(undefined1 *)(param_1 + 0x3f) = 2;
    }
  }
  return 0;
}


