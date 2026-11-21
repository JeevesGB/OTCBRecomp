/* Function: DrawTransmission_NoCtrl */
/* Address: 800253ac */

void DrawTransmission_NoCtrl(void)

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
    sVar4 = (&DAT_800acdca)[iVar3 * 3];
    sVar1 = (&DAT_800acdcc)[iVar3 * 3];
    if ((&DAT_800acdc8)[iVar3 * 3] != 0) {
      sVar2 = FUN_800a018c((&PTR_s_REVERS_800acd9c)
                           [*(short *)(&DAT_800ace94 + iVar3 * 2 + g_PlayerTransmission * 0x16)]);
      sVar4 = sVar4 + sVar2 * -0xe;
    }
    DrawText((&PTR_s_REVERS_800acd9c)
             [*(short *)(&DAT_800ace94 + iVar3 * 2 + g_PlayerTransmission * 0x16)],(int)sVar4,
             (int)sVar1);
    iVar5 = iVar5 + 1;
    iVar3 = iVar5 * 0x10000;
  } while (iVar5 * 0x10000 >> 0x10 < 0xb);
  iVar3 = 0;
  do {
    DrawMenuBackground(&DAT_800acb8c,&DAT_800acb94 + ((iVar3 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 * 0x10000 >> 0x10 < 0x12);
  return;
}


