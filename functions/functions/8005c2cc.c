/* Function: RelocateData */
/* Address: 8005c2cc */

undefined4 RelocateData(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < iVar3) {
    do {
      iVar1 = iVar1 + 1;
      param_2 = LoadTIMTexture((int)param_1 + piVar2[1]);
      piVar2 = piVar2 + 1;
    } while (iVar1 < iVar3);
  }
  return param_2;
}


