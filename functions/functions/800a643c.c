/* Function: BIOS_OBJ_0 */
/* Address: 800a643c */

undefined4 BIOS_OBJ_0(void)

{
  undefined4 uVar1;
  
  *PTR_CDROM_REG0_800cb898 = 1;
  if ((*PTR_CDROM_REG3_800cb8a4 & 7) != 0) {
    uVar1 = BIOS_OBJ_64();
    return uVar1;
  }
  return 0;
}


