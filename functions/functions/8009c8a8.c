/* Function: DrawSync */
/* Address: 8009c8a8 */

int DrawSync(int mode)

{
  int iVar1;
  
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("DrawSync(%d)...\n",mode);
  }
  iVar1 = (**(code **)(PTR_PTR_800ca164 + 0x3c))(mode);
  return iVar1;
}


