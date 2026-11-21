/* Function: strcat */
/* Address: 800a369c */

char * strcat(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    iVar2 = FUN_800a018c(param_1);
    iVar3 = FUN_800a018c(param_2);
    if (param_1 + iVar2 != param_2 + iVar3) {
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      pcVar4 = (char *)STRCAT_OBJ_8C();
      return pcVar4;
    }
  }
  return (char *)0x0;
}


