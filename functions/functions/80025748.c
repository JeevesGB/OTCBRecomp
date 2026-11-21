/* Function: DrawTransmission_2P */
/* Address: 80025748 */

void DrawTransmission_2P(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 >> 0x10;
    sVar4 = (&DAT_800ace52)[iVar3 * 3];
    sVar1 = (&DAT_800ace54)[iVar3 * 3];
    if ((&DAT_800ace50)[iVar3 * 3] != 0) {
      sVar2 = FUN_800a018c((&PTR_s_REVERS_800acd9c)
                           [*(short *)(&DAT_800acff4 + iVar3 * 2 + g_PlayerTransmission * 0x16)]);
      sVar4 = sVar4 + sVar2 * -0xe;
    }
    DrawText((&PTR_s_REVERS_800acd9c)
             [*(short *)(&DAT_800acff4 + iVar3 * 2 + g_PlayerTransmission * 0x16)],(int)sVar4,
             (int)sVar1);
    iVar5 = iVar5 + 1;
    iVar3 = iVar5 * 0x10000;
  } while (iVar5 * 0x10000 >> 0x10 < 0xb);
  iVar3 = 0;
  do {
    DrawMenuBackground(&DAT_800acb8c,&DAT_800acd24 + ((iVar3 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 * 0x10000 >> 0x10 < 0xf);
  return;
}


