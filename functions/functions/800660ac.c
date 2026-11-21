/* Function: RenderRace */
/* Address: 800660ac */

void RenderRace(void)

{
  DAT_800cda30 = DAT_800cda30 + 8;
  if (0xff < DAT_800cda30) {
    DAT_800cda30 = 0;
  }
  return;
}


