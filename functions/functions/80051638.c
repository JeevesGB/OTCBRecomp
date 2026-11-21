/* Function: FUN_80051638 */
/* Address: 80051638 */

void FUN_80051638(short param_1,short param_2,uint param_3)

{
  ushort uVar1;
  short *psVar2;
  RECT *pRVar3;
  short sVar4;
  
  sVar4 = g_RaceViewY;
  pRVar3 = g_VRAMRectPtr;
  uVar1 = (ushort)(param_3 >> 5) & 0x7f;
  psVar2 = &g_VRAMRectPtr->x;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar2 = g_RaceViewX;
  pRVar3->w = 0x10;
  pRVar3->y = sVar4 + uVar1;
  pRVar3->h = 0x80;
  MoveImage(pRVar3,(int)param_1,(int)param_2);
  pRVar3 = g_VRAMRectPtr;
  sVar4 = g_RaceViewY + uVar1;
  psVar2 = &g_VRAMRectPtr->x;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar2 = g_RaceViewX;
  pRVar3->y = sVar4;
  pRVar3->w = 0x10;
  pRVar3->h = 0x20;
  MoveImage(pRVar3,(int)param_1,param_2 + 0x80);
  return;
}


