/* Function: DrawSyncCallback */
/* Address: 8009c7b0 */

u_long DrawSyncCallback(func *func)

{
  u_long uVar1;
  
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("DrawSyncCallback(%08x)...\n",func);
  }
  uVar1 = (u_long)DAT_800ca178;
  DAT_800ca178 = func;
  return uVar1;
}


