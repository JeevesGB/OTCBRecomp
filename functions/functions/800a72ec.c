/* Function: CD_vol */
/* Address: 800a72ec */

undefined4 CD_vol(undefined1 *param_1)

{
  *PTR_CDROM_REG0_800cb898 = 2;
  *PTR_CDROM_REG2_800cb8a0 = *param_1;
  *PTR_CDROM_REG3_800cb8a4 = param_1[1];
  *PTR_CDROM_REG0_800cb898 = 3;
  *PTR_CDROM_REG1_800cb89c = param_1[2];
  *PTR_CDROM_REG2_800cb8a0 = param_1[3];
  *PTR_CDROM_REG3_800cb8a4 = 0x20;
  return 0;
}


