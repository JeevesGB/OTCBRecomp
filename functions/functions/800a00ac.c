/* Function: memset */
/* Address: 800a00ac */

void * memset(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = (uchar *)0x0;
  if (param_1 != (uchar *)0x0) {
    puVar3 = param_1;
    if (param_3 < 1) {
      pvVar1 = (void *)MEMSET_OBJ_28();
      return pvVar1;
    }
    do {
      *puVar3 = param_2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 1;
      puVar2 = param_1;
    } while (0 < param_3);
  }
  return puVar2;
}


