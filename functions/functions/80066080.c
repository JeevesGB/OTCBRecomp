/* Function: UpdateGhostDisplay */
/* Address: 80066080 */

void UpdateGhostDisplay(void)

{
  DAT_800cda30 = DAT_800cda30 + 0xc;
  if (0xff < DAT_800cda30) {
    DAT_800cda30 = 0;
  }
  return;
}


