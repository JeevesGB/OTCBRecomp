/* Function: PADSEQD_OBJ_34 */
/* Address: 800ac0f0 */

undefined4 PADSEQD_OBJ_34(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (**(char **)(param_1 + 0x3c) == -0xd) {
    if ((*(char *)(param_1 + 0xe8) == '\0') || (*(char *)(param_1 + 0x46) == -1))
    goto PADSEQD_OBJ_F8;
    if (*(char *)(param_1 + 0x49) == '\x02') {
      (*DAT_800cba08)(param_1);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 1) {
    _padCmdParaMode(param_1,1);
    uVar2 = PADSEQD_OBJ_134();
    return uVar2;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      uVar2 = PADSEQD_OBJ_108();
      return uVar2;
    }
  }
  else {
    if (bVar1 == 0xfe) {
PADSEQD_OBJ_F8:
      _padCmdParaMode(param_1,0);
      uVar2 = PADSEQD_OBJ_134();
      return uVar2;
    }
    if (bVar1 != 0xff) {
      uVar2 = PADSEQD_OBJ_108();
      return uVar2;
    }
  }
  return 0;
}


