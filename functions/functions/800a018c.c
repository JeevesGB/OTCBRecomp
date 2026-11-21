/* Function: FUN_800a018c */
/* Address: 800a018c */

/* Possible STRLEN.OBJ/strlen */

int FUN_800a018c(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    while (iVar3 = iVar2, cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar3 + 1;
    }
  }
  return iVar3;
}


