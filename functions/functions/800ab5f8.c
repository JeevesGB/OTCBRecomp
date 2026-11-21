/* Function: PADIF_OBJ_1CC */
/* Address: 800ab5f8 */

int PADIF_OBJ_1CC(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  DAT_800cba88 = 0;
  if ((DAT_800cba50 != 0) && (**(byte **)(param_1 + 0x3c) >> 4 == 8)) {
    DAT_800cba88 = (uint)(*(char *)(param_1 + 0x37) == '\0');
  }
  if (DAT_800cba88 == 0) {
    (*DAT_800cba10)(param_1);
  }
  uVar1 = (*DAT_800cba0c)(param_1,DAT_800cba88);
  iVar2 = _padSioRW2(param_1,uVar1);
  iVar3 = iVar2;
  if (((iVar2 != 0x5a) && (iVar2 != 0)) && (iVar3 = -4, iVar2 < 0)) {
    iVar3 = iVar2;
  }
  return iVar3;
}


