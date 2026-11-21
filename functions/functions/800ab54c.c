/* Function: PADIF_OBJ_120 */
/* Address: 800ab54c */

uint PADIF_OBJ_120(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (DAT_800cba84 != 0) {
    (*DAT_800cba1c)(*(int *)(param_1 + 0xc) + 0x1e0);
    (*DAT_800cba1c)(*(int *)(param_1 + 0xc) + 0x2d0);
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x37) == '\0') {
    uVar3 = DAT_800cba50;
  }
  uVar1 = _padSioRW2(param_1,uVar3);
  if (-1 < (int)uVar1) {
    uVar2 = uVar1 & 0xf;
    DAT_800cba7c = uVar2 << 1;
    uVar1 = 0;
    if (uVar2 == 0) {
      DAT_800cba7c = 0x20;
      uVar1 = 0;
    }
  }
  return uVar1;
}


