/* Function: BIOS_OBJ_16BC */
/* Address: 800a7af8 */

void BIOS_OBJ_16BC(void)

{
  uint uVar1;
  undefined1 *unaff_s1;
  undefined1 unaff_s2;
  undefined1 *unaff_s3;
  
  while( true ) {
    uVar1 = BIOS_OBJ_0();
    if (uVar1 == 0) break;
    if (((uVar1 & 4) != 0) && (DAT_800cb5d8 != (code *)0x0)) {
      (*DAT_800cb5d8)(*unaff_s1,&DAT_800d0ff0);
    }
    if (((uVar1 & 2) != 0) && (DAT_800cb5d4 != (code *)0x0)) {
      (*DAT_800cb5d4)(*unaff_s3,&DAT_800d0fe8);
    }
  }
  *PTR_CDROM_REG0_800cb898 = unaff_s2;
  return;
}


