/* Function: FetchStreamFrame */
/* Address: 8005ab88 */

undefined4 FetchStreamFrame(void)

{
  bool bVar1;
  u_long uVar2;
  int iVar3;
  u_long *local_18;
  u_long *local_14 [3];
  
  iVar3 = 5000000;
  if (1 < g_StreamRetryCount) {
    iVar3 = 200000;
  }
  do {
    uVar2 = StGetNext(&local_18,local_14);
    if (uVar2 == 0) {
      if (g_StreamType == 0) {
        g_FrameWidth = (undefined2)local_14[0][4];
      }
      else {
        g_FrameWidth = (undefined2)((uint)(ushort)local_14[0][4] * 3 >> 1);
      }
      g_FrameHeight = *(short *)((int)local_14[0] + 0x12);
      g_StreamFlag3 = g_StreamFlag3 ^ 1;
      g_FrameBufferSize =
           (int)((int)g_StreamSectorSize * ((int)g_FrameHeight + 0xfU & 0xfffffff0)) >> 1;
      g_FrameHeightCopy = g_FrameHeight;
      DecDCTvlc2(local_18,(u_long *)(&g_Buffer2)[g_StreamFlag3],g_Buffer1);
      g_StreamFlag0 = 0xffffffff;
      if ((uint)(int)g_StreamMaxSector <= local_14[0][2]) {
        g_StreamActive = 0xffffffff;
        StopCDStream();
      }
      StFreeRing(local_18);
      return 0;
    }
    bVar1 = -1 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return 0xffffffff;
}


