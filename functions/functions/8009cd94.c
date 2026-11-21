/* Function: ClearOTagR */
/* Address: 8009cd94 */

u_long * ClearOTagR(u_long *ot,int n)

{
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("ClearOTagR(%08x,%d)...\n",ot,n);
  }
  (**(code **)(PTR_PTR_800ca164 + 0x2c))(ot,n);
  DAT_800ca22c = 0x40ca218;
  *ot = 0xca22c;
  return ot;
}


