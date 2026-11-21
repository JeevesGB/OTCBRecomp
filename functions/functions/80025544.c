/* Function: DrawTransmission_1P */
/* Address: 80025544 */

void DrawTransmission_1P(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 >> 0x10;
    sVar5 = (&DAT_800ace0e)[iVar3 * 3];
    sVar1 = (&DAT_800ace10)[iVar3 * 3];
    if ((&DAT_800ace0c)[iVar3 * 3] != 0) {
      sVar2 = FUN_800a018c((&PTR_s_REVERS_800acd9c)
                           [*(short *)(&DAT_800acf44 + iVar3 * 2 + g_PlayerTransmission * 0x16)]);
      sVar5 = sVar5 + sVar2 * -0xe;
    }
    DrawText((&PTR_s_REVERS_800acd9c)
             [*(short *)(&DAT_800acf44 + iVar3 * 2 + g_PlayerTransmission * 0x16)],(int)sVar5,
             (int)sVar1);
    iVar4 = iVar4 + 1;
    iVar3 = iVar4 * 0x10000;
  } while (iVar4 * 0x10000 >> 0x10 < 0xb);
  iVar3 = 0;
  if (g_PlayerTransmission < 4) {
    do {
      DrawMenuBackground(&DAT_800acb8c,&DAT_800acc24 + ((iVar3 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < 0x11);
  }
  else {
    do {
      DrawMenuBackground(&DAT_800acb8c,&DAT_800accac + ((iVar3 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < 0xf);
  }
  return;
}


