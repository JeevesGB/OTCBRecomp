/* Function: UserFuncExecute */
/* Address: 800a3ae8 */

void UserFuncExecute(void)

{
  int iVar1;
  
  if ((-1 < DAT_800ca56c) &&
     (iVar1 = (*(code *)(&DAT_800d0c50)[DAT_800ca56c])(DAT_800ca56c * 0x10 + -0x7ff2f3f0),
     iVar1 != 0)) {
    DAT_800ca56c = DAT_800ca56c + -1;
  }
  return;
}


