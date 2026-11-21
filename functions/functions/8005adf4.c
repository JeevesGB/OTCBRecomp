/* Function: InitFMVStream */
/* Address: 8005adf4 */

void InitFMVStream(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_t0;
  u_char local_10 [8];
  
  g_StreamSectorSize = 0x10;
  if (g_StreamType != 0) {
    g_StreamSectorSize = 0x18;
  }
  g_StreamChannels = 2;
  if (g_StreamType != 0) {
    g_StreamChannels = 3;
  }
  g_StreamDone = 0;
  g_StreamActive = 0;
  g_StreamFlag2 = 0;
  g_StreamFlag1 = 0;
  g_StreamFlag0 = 0;
  g_StreamFlag4 = 0;
  g_StreamFlag3 = 0;
  DecDCTReset(0);
  DecDCToutCallback((func *)&LAB_8005ace0);
  DecDCTvlcBuild(g_Buffer1);
  StSetRing(g_Buffer0,0x20);
  StSetStream((int)g_StreamType,(int)g_StreamChannel,0xffffffff,(func1 *)0x0,(func2 *)0x0);
  uVar1 = g_StreamSectorAddr + 3 & 3;
  uVar2 = g_StreamSectorAddr & 3;
  g_StreamSeekPos =
       (*(int *)((g_StreamSectorAddr + 3) - uVar1) << (3 - uVar1) * 8 |
       in_t0 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
       *(uint *)(g_StreamSectorAddr - uVar2) >> uVar2 * 8;
  do {
    local_10[0] = 0x80;
    do {
      do {
        iVar3 = CdControl('\x0e',local_10,(u_char *)0x0);
      } while (iVar3 == 0);
      do {
        iVar3 = CdControl('\x02',(u_char *)&g_StreamSeekPos,(u_char *)0x0);
      } while (iVar3 == 0);
      VSync(3);
      iVar3 = CdRead2(0x1e0);
    } while (iVar3 == 0);
    g_StreamRetryCount = 0;
    iVar3 = FetchStreamFrame();
  } while (iVar3 != 0);
  return;
}


