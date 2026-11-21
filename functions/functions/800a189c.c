/* Function: malloc3 */
/* Address: 800a189c */

void * malloc3(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = (void *)MALLOC3_OBJ_14();
    return pvVar1;
  }
  return (void *)0x0;
}


