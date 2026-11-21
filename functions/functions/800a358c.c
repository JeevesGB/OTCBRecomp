/* Function: LIBMCRD_OBJ_1A90 */
/* Address: 800a358c */

void LIBMCRD_OBJ_1A90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = UserFuncComplete();
  if (iVar3 == 0) {
    UserFuncExecute();
    iVar3 = UserFuncComplete();
    uVar2 = DAT_800d0b84;
    uVar1 = DAT_800d0b80;
    if (iVar3 != 0) {
      DAT_800d0b88 = 1;
      DAT_800d0b70 = DAT_800d0b80;
      DAT_800d0b74 = DAT_800d0b84;
      DAT_800d0b80 = 0;
      DAT_800d0b84 = 0;
      if (DAT_800d0bc4 != (code *)0x0) {
        (*DAT_800d0bc4)(uVar1,uVar2);
      }
    }
  }
  DAT_800d0bd0 = DAT_800d0bd0 + 1;
  DAT_800d0bd4 = DAT_800d0bd4 + 1;
  return;
}


