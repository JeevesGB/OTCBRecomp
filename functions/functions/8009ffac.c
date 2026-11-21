/* Function: bcopy */
/* Address: 8009ffac */

void * bcopy(uchar *param_1,uchar *param_2,int param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar2 = (uchar *)0x0;
  puVar1 = param_1;
  if (param_1 != (uchar *)0x0) {
    for (; puVar2 = param_1, 0 < param_3; param_3 = param_3 + -1) {
      *param_2 = *puVar1;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return puVar2;
}


