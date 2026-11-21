/* Function: vmNoiseOff */
/* Address: 80095a5c */

void vmNoiseOff(uint param_1)

{
  param_1 = param_1 & 0xff;
  (&DAT_800ce79d)[param_1 * 0x38] = 0;
  (&DAT_800ce780)[param_1 * 0x1c] = 0;
  (&DAT_800ce784)[param_1 * 0x1c] = 0;
  return;
}


