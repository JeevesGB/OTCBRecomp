/* Function: FUN_8005430c */
/* Address: 8005430c */

int FUN_8005430c(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  long local_8 [2];
  
  puVar2 = (uint *)local_8;
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = -param_1;
  }
  gte_Lzc(iVar1,local_8);
  if (*puVar2 != 0) {
    *puVar2 = *puVar2 + -1;
  }
  if (0xc < (int)*puVar2) {
    *puVar2 = 0xc;
  }
  param_2 = param_2 >> (0xc - *puVar2 & 0x1f);
  if (param_2 != 0) {
    iVar1 = param_1 << (*puVar2 & 0x1f);
    param_1 = iVar1 / param_2;
    if (param_2 == 0) {
      trap(0x1c00);
    }
    if ((param_2 == -1) && (iVar1 == -0x80000000)) {
      trap(0x1800);
    }
  }
  return param_1;
}


