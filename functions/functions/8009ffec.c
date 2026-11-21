/* Function: bzero */
/* Address: 8009ffec */

void * bzero(uchar *param_1,int param_2)

{
  void *pvVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = (uchar *)0x0;
  if (param_1 != (uchar *)0x0) {
    puVar3 = param_1;
    if (param_2 < 1) {
      pvVar1 = (void *)BZERO_OBJ_28();
      return pvVar1;
    }
    do {
      *puVar3 = '\0';
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 1;
      puVar2 = param_1;
    } while (0 < param_2);
  }
  return puVar2;
}


