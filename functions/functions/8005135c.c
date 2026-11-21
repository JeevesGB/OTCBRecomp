/* Function: FUN_8005135c */
/* Address: 8005135c */

void FUN_8005135c(int param_1,short param_2,uint param_3,uint param_4)

{
  short sVar1;
  short *psVar2;
  RECT *pRVar3;
  int x;
  short sVar4;
  uint uVar5;
  short sVar6;
  int y;
  
  pRVar3 = g_VRAMRectPtr;
  y = (int)param_2;
  uVar5 = param_3 >> 7 & 0xf;
  sVar1 = (short)uVar5;
  psVar2 = &g_VRAMRectPtr->x;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar2 = g_RaceViewX + sVar1;
  sVar6 = g_RaceViewY;
  pRVar3->h = 0x80;
  sVar6 = ((ushort)(param_4 >> 5) & 0x7f) + sVar6;
  pRVar3->y = sVar6;
  sVar4 = (short)(0x10 - uVar5);
  pRVar3->w = sVar4;
  MoveImage(pRVar3,(int)(short)param_1,y);
  pRVar3 = g_VRAMRectPtr;
  psVar2 = &g_VRAMRectPtr->x;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar2 = g_RaceViewX + sVar1;
  pRVar3->y = sVar6;
  pRVar3->w = sVar4;
  pRVar3->h = 0x20;
  MoveImage(pRVar3,(int)(short)param_1,y + 0x80);
  pRVar3 = g_VRAMRectPtr;
  if (uVar5 != 0) {
    x = (int)((param_1 + (0x10 - uVar5)) * 0x10000) >> 0x10;
    psVar2 = &g_VRAMRectPtr->x;
    g_VRAMRectPtr = g_VRAMRectPtr + 1;
    *psVar2 = g_RaceViewX;
    pRVar3->y = sVar6;
    pRVar3->w = sVar1;
    pRVar3->h = 0x80;
    MoveImage(pRVar3,x,y);
    pRVar3 = g_VRAMRectPtr;
    psVar2 = &g_VRAMRectPtr->x;
    g_VRAMRectPtr = g_VRAMRectPtr + 1;
    *psVar2 = g_RaceViewX;
    pRVar3->y = sVar6;
    pRVar3->w = sVar1;
    pRVar3->h = 0x20;
    MoveImage(pRVar3,x,y + 0x80);
  }
  return;
}


