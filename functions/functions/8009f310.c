/* Function: DrawOTag2 */
/* Address: 8009f310 */

int DrawOTag2(u_long *p)

{
  int iVar1;
  
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("DrawOTag(%08x)...\n",p);
  }
  iVar1 = VSync(-1);
  DAT_800ca2a8 = iVar1 + 0xf0;
  DAT_800ca2ac = 0;
  iVar1 = SYS_OBJ_2E74();
  return iVar1;
}


