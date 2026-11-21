/* Function: memcpy */
/* Address: 800a006c */

void * memcpy(uchar *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar3 = (uchar *)0x0;
  puVar2 = param_1;
  if (param_1 != (uchar *)0x0) {
    for (; puVar3 = param_1, 0 < param_3; param_3 = param_3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  return puVar3;
}


