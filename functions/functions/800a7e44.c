/* Function: CDREAD_OBJ_2A8 */
/* Address: 800a7e44 */

void CDREAD_OBJ_2A8(void)

{
  DAT_800cb8f4 = DAT_800cb8f4 + DAT_800cb8fc * 4;
  DAT_800cb900 = DAT_800cb900 + -1;
  DAT_800cb90c = DAT_800cb90c + 1;
  if (DAT_800cb900 == 0) {
    CdReadyCallback(DAT_800cb918);
    if ((DAT_800cb540 & 1) != 0) {
      CdDataCallback(DAT_800cb91c);
    }
    CdSyncCallback(CDREAD_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_800cb910 = 1;
    if (DAT_800cb53c != (code *)0x0) {
      (*DAT_800cb53c)(2,DAT_800cb920);
    }
  }
  return;
}


