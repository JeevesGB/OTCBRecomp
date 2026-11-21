/* Function: FUN_8003dbfc */
/* Address: 8003dbfc */

void FUN_8003dbfc(int param_1)

{
  short *psVar1;
  RECT *pRVar2;
  short sVar3;
  int iVar4;
  
  FUN_8003cd80(param_1,0,0);
  pRVar2 = g_VRAMRectPtr;
  if (*(short *)(param_1 + 2) == 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      g_VRAMRectPtr->x = *(short *)(param_1 + 0xe);
      g_VRAMRectPtr->y = *(short *)(param_1 + 0x10);
      sVar3 = *(short *)(param_1 + 0x12);
      g_VRAMRectPtr->h = 1;
      g_VRAMRectPtr->w = sVar3;
      g_VRAMRectPtr = g_VRAMRectPtr + 1;
      LoadImage(pRVar2,*(u_long **)(param_1 + 0x28));
      sVar3 = *(short *)(param_1 + 0xe) + *(short *)(param_1 + 0x12);
      *(short *)(param_1 + 0xe) = sVar3;
      if ((int)*(short *)(param_1 + 8) + (int)*(short *)(param_1 + 0xc) <= (int)sVar3) {
        *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 8);
        *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
      }
      iVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x18) = iVar4;
      pRVar2 = g_VRAMRectPtr;
      if (0 < iVar4) {
        g_VRAMRectPtr->x = *(short *)(param_1 + 0xe);
        g_VRAMRectPtr->y = *(short *)(param_1 + 0x10);
        sVar3 = *(short *)(param_1 + 0x12);
        psVar1 = &g_VRAMRectPtr->h;
        g_VRAMRectPtr = g_VRAMRectPtr + 1;
        *psVar1 = 1;
        pRVar2->w = sVar3;
        LoadImage(pRVar2,(u_long *)(*(int *)(param_1 + 0x28) + (*(int *)(param_1 + 0x24) >> 3)));
        sVar3 = *(short *)(param_1 + 0xe) + *(short *)(param_1 + 0x12);
        *(short *)(param_1 + 0xe) = sVar3;
        if ((int)*(short *)(param_1 + 8) + (int)*(short *)(param_1 + 0xc) <= (int)sVar3) {
          *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 8);
          *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
        }
      }
    }
    *(undefined2 *)(param_1 + 4) = 0xffff;
  }
  return;
}


