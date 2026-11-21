/* Function: RenderTrackBackground */
/* Address: 800514dc */

void RenderTrackBackground(void)

{
  short sVar1;
  short *psVar2;
  RECT *pRVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  short *psVar8;
  int iVar9;
  
  iVar9 = 0;
  psVar8 = &DAT_800af06c;
  puVar7 = &DAT_800cd028;
  do {
    uVar5 = *puVar7;
    if ((uVar5 & 1) != 0) {
      *puVar7 = uVar5 & 0xfffffffe;
      sVar4 = g_RaceViewY;
      pRVar3 = g_VRAMRectPtr;
      if ((uVar5 & 2) == 0) {
        sVar1 = *psVar8;
        uVar6 = (ushort)puVar7[1] >> 5 & 0x7f;
        psVar2 = &g_VRAMRectPtr->x;
        g_VRAMRectPtr = g_VRAMRectPtr + 1;
        *psVar2 = g_RaceViewX;
        pRVar3->w = 0x10;
        pRVar3->y = sVar4 + uVar6;
        pRVar3->h = 0x80;
        MoveImage(pRVar3,(int)sVar1,0);
        pRVar3 = g_VRAMRectPtr;
        sVar4 = g_RaceViewY + uVar6;
        psVar2 = &g_VRAMRectPtr->x;
        g_VRAMRectPtr = g_VRAMRectPtr + 1;
        *psVar2 = g_RaceViewX;
        pRVar3->y = sVar4;
        pRVar3->w = 0x10;
        pRVar3->h = 0x20;
        MoveImage(pRVar3,(int)sVar1,0x80);
      }
      else {
        FUN_8005135c((int)*psVar8,0,(int)*(short *)((int)puVar7 + 6),(int)(short)puVar7[1]);
      }
    }
    psVar8 = psVar8 + 1;
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar9 < 7);
  return;
}


