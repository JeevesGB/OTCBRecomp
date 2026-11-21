/* Function: SYS_OBJ_3E4 */
/* Address: 8009c910 */

void SYS_OBJ_3E4(undefined4 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_800ca16e != '\x01') {
    if (DAT_800ca16e == '\x02') {
      (*(code *)PTR_printf_800ca168)(&DAT_80022fa0,param_1);
      (*(code *)PTR_printf_800ca168)
                ("(%d,%d)-(%d,%d)\n",(int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
      return;
    }
    SYS_OBJ_4F0();
    return;
  }
  iVar2 = (int)param_2[2];
  if ((iVar2 <= DAT_800ca170) && (iVar2 + *param_2 <= (int)DAT_800ca170)) {
    iVar1 = (int)param_2[1];
    if (((iVar1 <= DAT_800ca172) &&
        (((iVar1 + param_2[3] <= (int)DAT_800ca172 && (0 < iVar2)) && (-1 < *param_2)))) &&
       ((-1 < iVar1 && (0 < param_2[3])))) {
      return;
    }
  }
  SYS_OBJ_4B4("%s:bad RECT");
  return;
}


