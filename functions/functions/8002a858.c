/* Function: FUN_8002a858 */
/* Address: 8002a858 */

void FUN_8002a858(void)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (*(ushort *)(&DAT_800ad2fc + g_SoundTestFlag2 * 2) == 0xffff) {
    g_MenuTimer = 0;
    DAT_800cbbf0 = 0x80;
    g_SubState2 = g_SubState2 + 1;
  }
  else {
    g_MenuTimer = g_MenuTimer + 1;
    if (1 < g_MenuTimer) {
      g_MenuTimer = 0;
      g_SoundTestFlag7 = g_SoundTestFlag6;
      g_SoundTestFlag6 = g_SoundTestFlag6 + 1;
      if (((int)(short)g_SoundTestFlag4 + *(short *)(&DAT_800ad2fc + (g_SoundTestFlag2 + 2) * 2) * 8
          ) - (int)(short)g_SoundTestFlag6 < 0) {
        g_SoundTestFlag5 = g_SoundTestFlag4;
        g_SoundTestFlag3 = g_SoundTestFlag2;
        g_SoundTestFlag4 =
             g_SoundTestFlag4 + *(short *)(&DAT_800ad2fc + (g_SoundTestFlag2 + 2) * 2) * 8;
        if ((*(ushort *)(&DAT_800ad2fc + g_SoundTestFlag2 * 2) & 0xf) == 0) {
          g_SoundTestFlag2 = g_SoundTestFlag2 + 4;
        }
        else {
          g_SoundTestFlag2 = g_SoundTestFlag2 + 5;
        }
      }
      uVar9 = (uint)g_SoundTestFlag4;
      iVar5 = (int)g_SoundTestFlag2;
      sVar1 = *(short *)(&DAT_800ad2fc + (iVar5 + 2) * 2);
      iVar8 = iVar5;
      while( true ) {
        uVar9 = uVar9 + sVar1 * 8;
        if (0x1bf < ((int)(uVar9 * 0x10000) >> 0x10) - (int)(short)g_SoundTestFlag6) break;
        uVar2 = *(ushort *)(&DAT_800ad2fc + iVar5 * 2);
        if (*(ushort *)(&DAT_800ad2fc + iVar5 * 2) == 0xffff) break;
        iVar6 = (uVar9 - g_SoundTestFlag6) + -0xf0;
        uVar4 = (uint)*(ushort *)
                       (*(short *)(&DAT_800ad2fc + (iVar5 + 3) * 2) * 0x14 + g_SoundTestBuffer + 4);
        iVar7 = -uVar4;
        uVar3 = iVar7 - (iVar7 >> 0x1f);
        if ((uVar2 & 0xf) != 0) {
          iVar5 = -(uVar4 + *(ushort *)
                             (*(short *)(&DAT_800ad2fc + (iVar5 + 4) * 2) * 0x14 + g_SoundTestBuffer
                             + 4));
          uVar3 = iVar5 - (iVar5 >> 0x1f);
        }
        iVar5 = iVar6 * 0x10000;
        if (((uVar2 & 0x30) == 0x30) && (iVar5 = iVar6 * 0x10000, iVar6 * 0x10000 >> 0x10 < -0x38))
        {
          iVar5 = -0x380000;
        }
        iVar7 = (int)(short)iVar8;
        iVar6 = (uVar3 >> 1) + (uint)*(ushort *)(&DAT_800ad2fc + (iVar7 + 1) * 2);
        DrawSprite(g_SoundTestBuffer + *(short *)(&DAT_800ad2fc + (iVar7 + 3) * 2) * 0x14,
                   iVar6 * 0x10000 >> 0x10,iVar5 >> 0x10,g_MenuAnimPtr + 4);
        if (((*(ushort *)(&DAT_800ad2fc + iVar7 * 2) & 0xf) == 0) ||
           (DrawSprite(g_SoundTestBuffer + *(short *)(&DAT_800ad2fc + (iVar7 + 4) * 2) * 0x14,
                       (int)((iVar6 + (uint)*(ushort *)
                                             (*(short *)(&DAT_800ad2fc + (iVar7 + 3) * 2) * 0x14 +
                                              g_SoundTestBuffer + 4)) * 0x10000) >> 0x10,
                       iVar5 >> 0x10,g_MenuAnimPtr + 4),
           (*(ushort *)(&DAT_800ad2fc + iVar7 * 2) & 0xf) == 0)) {
          iVar8 = iVar8 + 4;
        }
        else {
          iVar8 = iVar8 + 5;
        }
        iVar5 = (int)(short)iVar8;
        sVar1 = *(short *)(&DAT_800ad2fc + (iVar5 + 2) * 2);
      }
      FUN_8002a58c();
    }
  }
  return;
}


