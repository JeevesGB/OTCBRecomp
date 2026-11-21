/* Function: DrawTransmissionInput_NoCtrl */
/* Address: 800258e0 */

void DrawTransmissionInput_NoCtrl(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short local_30;
  undefined2 local_2e;
  short local_2c;
  undefined2 local_2a;
  uchar auStack_28 [8];
  
  memset(auStack_28,'\0',4);
  iVar5 = 0;
  do {
    iVar3 = (int)(short)iVar5;
    sVar4 = (&DAT_800acdca)[iVar3 * 3];
    uVar1 = (&DAT_800acdcc)[iVar3 * 3];
    sVar2 = FUN_800a018c((&PTR_s_REVERS_800acd9c)
                         [*(short *)(&DAT_800ace94 + iVar3 * 2 + g_PlayerTransmission2 * 0x16)]);
    local_2c = sVar2 * 0xe;
    if ((&DAT_800acdc8)[iVar3 * 3] != 0) {
      sVar4 = sVar4 + sVar2 * -0xe;
    }
    local_2a = 0xe;
    local_30 = sVar4;
    local_2e = uVar1;
    DrawMenuBackground(auStack_28,&local_30,g_MenuAnimPtr + 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 0xb);
  iVar5 = 0;
  do {
    DrawMenuBackground(&DAT_800acb90,&DAT_800acb94 + ((iVar5 << 0x10) >> 0xd),g_MenuAnimPtr + 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 0x12);
  return;
}


