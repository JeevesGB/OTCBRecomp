/* Function: HasReplayData */
/* Address: 80069784 */

undefined4 HasReplayData(char *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  pcVar1 = param_1;
  if (param_2 != 1) {
    do {
      if (*pcVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      pcVar1 = param_1 + iVar3;
    } while (iVar3 != param_2 + -1);
  }
  uVar2 = 0xffffffff;
  if (iVar4 != param_2 + -1) {
    uVar2 = 0;
  }
  return uVar2;
}


