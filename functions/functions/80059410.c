/* Function: InitGTE */
/* Address: 80059410 */

void InitGTE(void)

{
  ResetGraph(0);
  InitGeom();
  SetGTEClip(0,0);
  g_GTEScale = 0x100;
  g_GTEMaxVal = 0xff;
  JOY_MCD_BAUD = 0x7f;
  SetGTEParams();
  gte_SetBackColor(0x80,0x80,0x80);
  gte_SetColorMatrix((MATRIX *)&g_ColorMatrix);
  DMA_OTC_CHCR = 0;
  DMA_OTC_BCR = 0;
  DMA_OTC_MADR = 0;
  g_MatrixScaleX = 0x1000;
  g_MatrixScaleY._0_2_ = 0x1000;
  g_MatrixScaleZ._0_2_ = 0x1000;
  g_MatrixRotXY._2_2_ = 0;
  g_MatrixRotXY._0_2_ = 0;
  g_MatrixScaleY._2_2_ = 0;
  g_MatrixRotXZ._2_2_ = 0;
  g_MatrixRotXZ._0_2_ = 0;
  g_MatrixScaleZ._2_2_ = 0;
  g_TranslateZ = 0;
  g_TranslateY = 0;
  g_TranslateX = 0;
  return;
}


