/* Function: FUN_8002a58c */
/* Address: 8002a58c */

void FUN_8002a58c(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  short local_20;
  short local_1e;
  short local_1c;
  undefined2 local_1a;
  uchar auStack_18 [8];
  
  memset((uchar *)&local_20,'\0',8);
  local_1a = 0x20;
  memset(auStack_18,'\0',4);
  uVar7 = (uint)g_SoundTestFlag5;
  iVar4 = (int)g_SoundTestFlag3;
  sVar1 = *(short *)(&DAT_800ad2fc + (iVar4 + 2) * 2);
  iVar6 = iVar4;
  while( true ) {
    uVar7 = uVar7 + sVar1 * 8;
    if (0x19f < ((int)(uVar7 * 0x10000) >> 0x10) - (int)(short)g_SoundTestFlag7) {
      return;
    }
    puVar5 = (ushort *)(&DAT_800ad2fc + iVar4 * 2);
    if (*puVar5 == 0xffff) break;
    psVar2 = (short *)(&DAT_800ad2fc + (iVar4 + 3) * 2);
    local_20 = (short)((int)-(uint)*(ushort *)(*psVar2 * 0x14 + g_SoundTestBuffer + 4) / 2);
    local_1c = *(short *)(*psVar2 * 0x14 + g_SoundTestBuffer + 4);
    iVar3 = (uVar7 - g_SoundTestFlag7) + -0xf0;
    local_1e = (short)iVar3;
    local_1a = *(undefined2 *)(*psVar2 * 0x14 + g_SoundTestBuffer + 6);
    if ((*puVar5 & 0xf) != 0) {
      local_20 = (short)((int)-((uint)*(ushort *)(*psVar2 * 0x14 + g_SoundTestBuffer + 4) +
                               (uint)*(ushort *)
                                      (*(short *)(&DAT_800ad2fc + (iVar4 + 4) * 2) * 0x14 +
                                       g_SoundTestBuffer + 4)) / 2);
      local_1c = *(short *)(*psVar2 * 0x14 + g_SoundTestBuffer + 4) +
                 *(short *)(*(short *)(&DAT_800ad2fc + (iVar4 + 4) * 2) * 0x14 + g_SoundTestBuffer +
                           4);
    }
    local_20 = local_20 + *(short *)(&DAT_800ad2fc + (iVar4 + 1) * 2);
    if ((((*puVar5 & 0x30) != 0x10) || (-0x51 < local_1e)) &&
       (((*puVar5 & 0x30) != 0x30 || (-0x39 < iVar3 * 0x10000 >> 0x10)))) {
      DrawMenuBackground(auStack_18,&local_20,g_MenuAnimPtr + 4);
    }
    if ((*(ushort *)(&DAT_800ad2fc + ((iVar6 << 0x10) >> 0xf)) & 0xf) == 0) {
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = iVar6 + 5;
    }
    iVar4 = (int)(short)iVar6;
    sVar1 = *(short *)(&DAT_800ad2fc + (iVar4 + 2) * 2);
  }
  return;
}


