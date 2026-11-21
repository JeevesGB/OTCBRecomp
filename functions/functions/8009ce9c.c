/* Function: DrawOTag */
/* Address: 8009ce9c */

void DrawOTag(u_long *p)

{
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("DrawOTag(%08x)...\n",p);
  }
  (**(code **)(PTR_PTR_800ca164 + 8))(*(undefined4 *)(PTR_PTR_800ca164 + 0x18),p,0,0);
  return;
}


