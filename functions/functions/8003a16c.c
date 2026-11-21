/* Function: FUN_8003a16c */
/* Address: 8003a16c */

void FUN_8003a16c(void)

{
  if (DAT_800ccbf0 != 0) {
    DAT_800ccba2 = 0xfc18;
    DAT_800ccb9a = 0xfc18;
    DAT_800ccb92 = 0xfc18;
    DAT_800ccb8a = 0xfc18;
    DAT_800ccbc2 = 0x32;
    DAT_800ccbba = 0x32;
    DAT_800ccbb2 = 0x32;
    DAT_800ccbaa = 0x32;
    DAT_800ccbcc = 0;
    DAT_800ccbc8 = 0;
    DAT_800ccbca = 0xff9c;
    DAT_800ccb90 = (short)(*DAT_800ccbf8 + 0x4b0 >> 1);
    DAT_800ccb88 = -DAT_800ccb90;
    DAT_800ccb9c = (short)(DAT_800ccbf8[1] + 0x4b0 >> 1);
    DAT_800ccb8c = -DAT_800ccb9c;
    DAT_800ccb94 = DAT_800ccb8c;
    DAT_800ccb98 = DAT_800ccb88;
    DAT_800ccba0 = DAT_800ccb90;
    DAT_800ccba4 = DAT_800ccb9c;
    DAT_800ccba8 = DAT_800ccb88;
    DAT_800ccbac = DAT_800ccb8c;
    DAT_800ccbb0 = DAT_800ccb90;
    DAT_800ccbb4 = DAT_800ccb8c;
    DAT_800ccbb8 = DAT_800ccb88;
    DAT_800ccbbc = DAT_800ccb9c;
    DAT_800ccbc0 = DAT_800ccb90;
    DAT_800ccbc4 = DAT_800ccb9c;
  }
  return;
}


