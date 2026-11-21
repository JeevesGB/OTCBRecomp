/* Function: memmove */
/* Address: 800a144c */

void * memmove(uchar *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  void *pvVar2;
  
  if (param_1 < param_2) {
    for (; 0 < param_3; param_3 = param_3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  else if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      param_1[param_3] = param_2[param_3];
    } while (0 < param_3);
    pvVar2 = (void *)MEMMOVE_OBJ_64();
    return pvVar2;
  }
  return param_1;
}


