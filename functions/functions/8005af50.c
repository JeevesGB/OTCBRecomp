/* Function: StreamUpdate */
/* Address: 8005af50 */

void StreamUpdate(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_a3;
  u_char local_18 [8];
  
  if (g_StreamDone == 0) {
    g_FramePosX = (&g_FramePosX_Base)[*g_DisplayBufferPtr];
    g_FramePosY = (&g_FramePosY_Base)[*g_DisplayBufferPtr];
    if (g_StreamFlag0 != 0) {
      g_StreamFlag0 = 0;
      DecDCTin((u_long *)(&g_Buffer2)[g_StreamFlag3],g_StreamChannels);
      g_StreamFlag2 = 0;
      DecDCTout((u_long *)(&g_Buffer4)[g_StreamFlag4],g_FrameBufferSize);
    }
    iVar3 = FetchStreamFrame();
    if (iVar3 != 0) {
      iVar3 = StGetBackloc((CdlLOC *)&g_StreamSeekPos);
      if ((g_StreamMaxSector < iVar3) || (iVar3 < 1)) {
        uVar1 = g_StreamSectorAddr + 3 & 3;
        uVar2 = g_StreamSectorAddr & 3;
        g_StreamSeekPos =
             (*(int *)((g_StreamSectorAddr + 3) - uVar1) << (3 - uVar1) * 8 |
             in_a3 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
             *(uint *)(g_StreamSectorAddr - uVar2) >> uVar2 * 8;
      }
      local_18[0] = 0x80;
      do {
        do {
          iVar3 = CdControl('\x0e',local_18,(u_char *)0x0);
        } while (iVar3 == 0);
        do {
          iVar3 = CdControl('\x02',(u_char *)&g_StreamSeekPos,(u_char *)0x0);
        } while (iVar3 == 0);
        VSync(3);
        iVar3 = CdRead2(0x1e0);
      } while (iVar3 == 0);
      g_StreamRetryCount = 0;
    }
  }
  return;
}


