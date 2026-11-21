/* Function: FUN_80063a34 */
/* Address: 80063a34 */

void FUN_80063a34(int param_1,u_long *param_2,int param_3)

{
  short sVar1;
  RECT *rect;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  psVar5 = *(short **)(param_1 + 0x2c);
  psVar4 = *(short **)(param_1 + 0x20);
  iVar3 = *(int *)(psVar4 + *psVar4 * 2 + 10);
  iVar2 = *(int *)(psVar4 + param_3 * 2 + 10);
  memcpy((uchar *)param_2,(uchar *)(psVar5 + 2),(int)*psVar5 << 5);
  FUN_8003e6c0(param_2 + 8,(*psVar5 + -1) * 0x10,(int)psVar4 + iVar3,(int)psVar4 + iVar2,0x20);
  rect = g_VRAMRectPtr;
  psVar4 = &g_VRAMRectPtr->x;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar4 = *(short *)(param_1 + 4) + 0x10;
  sVar1 = *(short *)(param_1 + 6);
  rect->w = 0x10;
  rect->y = sVar1;
  rect->h = *psVar5;
  LoadImage(rect,param_2);
  return;
}


