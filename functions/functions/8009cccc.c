/* Function: ClearOTag */
/* Address: 8009cccc */

u_long * ClearOTag(u_long *ot,int n)

{
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("ClearOTag(%08x,%d)...\n",ot,n);
  }
  while (n = n + -1, n != 0) {
    *(undefined1 *)((int)ot + 3) = 0;
    *ot = *ot & 0xff000000 | (uint)(ot + 1) & 0xffffff;
    ot = ot + 1;
  }
  DAT_800ca22c = 0x40ca218;
  *ot = 0xca22c;
  return ot;
}


