/* Function: PadGetState */
/* Address: 800a9648 */

int PadGetState(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (*DAT_800cba18)();
  if ((((*(char *)(iVar2 + 0x37) == '\0') && (*(char *)(iVar2 + 0x38) == '\0')) &&
      ((iVar2 == *(int *)(iVar2 + 0x10) || (*(char *)(iVar2 + 0x39) == '\0')))) &&
     (**(char **)(iVar2 + 0x30) == '\0')) {
    uVar3 = (uint)*(byte *)(iVar2 + 0x49);
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x49);
    if (bVar1 == 3) {
      iVar2 = PADENTRY_OBJ_168();
      return iVar2;
    }
    if (bVar1 < 4) {
      uVar3 = 1;
      if (bVar1 != 2) {
        iVar2 = PADENTRY_OBJ_164();
        return iVar2;
      }
    }
    else {
      uVar3 = 4;
      if (bVar1 != 6) {
        iVar2 = PADENTRY_OBJ_164();
        return iVar2;
      }
    }
  }
  return uVar3;
}


