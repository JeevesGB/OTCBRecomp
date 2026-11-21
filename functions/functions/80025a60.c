/* Function: DrawTransmissionInput_1P */
/* Address: 80025a60 */

void DrawTransmissionInput_1P(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short local_38;
  undefined2 local_36;
  short local_34;
  undefined2 local_32;
  uchar auStack_30 [8];
  
  memset(auStack_30,'\0',4);
  iVar5 = 0;
  do {
    iVar3 = (int)(short)iVar5;
    sVar4 = (&DAT_800ace0e)[iVar3 * 3];
    uVar1 = (&DAT_800ace10)[iVar3 * 3];
    sVar2 = FUN_800a018c((&PTR_s_REVERS_800acd9c)
                         [*(short *)(&DAT_800acf44 + iVar3 * 2 + g_PlayerTransmission2 * 0x16)]);
    local_34 = sVar2 * 0xe;
    if ((&DAT_800ace0c)[iVar3 * 3] != 0) {
      sVar4 = sVar4 + sVar2 * -0xe;
    }
    local_32 = 0xe;
    local_38 = sVar4;
    local_36 = uVar1;
    DrawMenuBackground(auStack_30,&local_38,g_MenuAnimPtr + 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 0xb);
  iVar5 = 0;
  if (g_PlayerTransmission2 < 4) {
    do {
      DrawMenuBackground(&DAT_800acb90,&DAT_800acc24 + ((iVar5 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 * 0x10000 >> 0x10 < 0x11);
  }
  else {
    do {
      DrawMenuBackground(&DAT_800acb90,&DAT_800accac + ((iVar5 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 * 0x10000 >> 0x10 < 0xf);
  }
  return;
}


