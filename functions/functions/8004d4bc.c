/* Function: InitCarAI */
/* Address: 8004d4bc */

void InitCarAI(int param_1)

{
  if (param_1 == 5) {
    DAT_800aec60 = 0x11;
  }
  else {
    DAT_800aec60 = 0x14;
  }
  DAT_800ccf0c = 0xc;
  DAT_800ccf10 = 0x78;
  DAT_800ccf14 = 0x50;
  DAT_800ccf08 = 0x15;
  DAT_800ccf20 = 0x2000;
  DAT_800ccf24 = 0x4000;
  return;
}


