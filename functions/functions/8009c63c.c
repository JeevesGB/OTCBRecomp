/* Function: SYS_OBJ_110 */
/* Address: 8009c63c */

void SYS_OBJ_110(void)

{
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("ResetGraph(%d)...\n");
  }
  (**(code **)(PTR_PTR_800ca164 + 0x34))(1);
  return;
}


