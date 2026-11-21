/* Function: UserFuncOpen */
/* Address: 800a3a6c */

void UserFuncOpen(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_800ca56c + 1;
  if (3 < iVar3) {
    printf("libmcrd: event overflow\n");
    USERFUNC_OBJ_7C();
    return;
  }
  iVar2 = 3;
  puVar1 = &DAT_800d0c1c + iVar3 * 4;
  DAT_800ca56c = iVar3;
  (&DAT_800d0c50)[iVar3] = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}


