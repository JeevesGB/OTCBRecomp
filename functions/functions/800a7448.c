/* Function: CD_initvol */
/* Address: 800a7448 */

undefined4 CD_initvol(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800cb8ac;
  if ((*(short *)(PTR_VOICE_00_LEFT_RIGHT_800cb8ac + 0x1b8) == 0) &&
     (*(short *)(PTR_VOICE_00_LEFT_RIGHT_800cb8ac + 0x1ba) == 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800cb8ac + 0x180) = 0x3fff;
    *(undefined2 *)(puVar1 + 0x182) = 0x3fff;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800cb8ac;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800cb8ac + 0x1b0) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1aa) = 0xc001;
  *PTR_CDROM_REG0_800cb898 = 2;
  *PTR_CDROM_REG2_800cb8a0 = 0x80;
  *PTR_CDROM_REG3_800cb8a4 = 0;
  *PTR_CDROM_REG0_800cb898 = 3;
  *PTR_CDROM_REG1_800cb89c = 0x80;
  *PTR_CDROM_REG2_800cb8a0 = 0;
  *PTR_CDROM_REG3_800cb8a4 = 0x20;
  return 0;
}


