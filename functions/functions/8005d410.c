/* Function: FUN_8005d410 */
/* Address: 8005d410 */

/* WARNING: Type propagation algorithm not settling */

short * FUN_8005d410(RECT *param_1,int param_2,uint param_3,uint param_4,undefined2 param_5,
                    short param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  short *psVar5;
  RECT *pRVar6;
  RECT *rect;
  uint uVar7;
  uint uVar8;
  RECT *pRVar9;
  byte *pbVar10;
  
  psVar5 = &DAT_800b554c;
  iVar3 = 0;
  if (DAT_800b554c != 0) {
    iVar1 = (int)DAT_800b554c;
    do {
      if (param_2 == iVar1) goto LAB_8005d470;
      psVar5 = psVar5 + 1;
      iVar1 = (int)*psVar5;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
  iVar3 = -1;
LAB_8005d470:
  if (iVar3 < 0) {
    pbVar4 = (byte *)Krom2RawAdd2((short)param_2 * 0x100 + ((ushort)((uint)param_2 >> 8) & 0xff));
  }
  else {
    pbVar4 = (byte *)(iVar3 * 0x20 + -0x7ff4aa98);
  }
  iVar3 = 0x1d;
  rect = param_1;
  pbVar10 = pbVar4;
  do {
    pRVar6 = rect;
    uVar8 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar7 = 0;
    iVar1 = 7;
    do {
      uVar2 = param_3;
      if ((uVar8 & 1) == 0) {
        uVar2 = param_4;
      }
      uVar7 = uVar7 << 4 | uVar2;
      iVar1 = iVar1 + -1;
      uVar8 = (int)uVar8 >> 1;
    } while (iVar1 != -1);
    pRVar6->x = (short)uVar7;
    pRVar6->y = (short)(uVar7 >> 0x10);
    iVar3 = iVar3 + -1;
    rect = (RECT *)&pRVar6->w;
  } while (iVar3 != -1);
  pRVar9 = param_1 + 1;
  iVar3 = 0x1b;
  pbVar10 = pbVar4;
  do {
    uVar8 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar7 = 0;
    iVar1 = 7;
    do {
      uVar2 = param_3 << 1;
      if ((uVar8 & 1) == 0) {
        uVar2 = param_4;
      }
      uVar7 = uVar7 << 4 | uVar2;
      iVar1 = iVar1 + -1;
      uVar8 = (int)uVar8 >> 1;
    } while (iVar1 != -1);
    uVar8._0_2_ = pRVar9->x;
    uVar8._2_2_ = pRVar9->y;
    iVar3 = iVar3 + -1;
    pRVar9->x = (short)(uVar8 | uVar7);
    pRVar9->y = (short)((uVar8 | uVar7) >> 0x10);
    pRVar9 = (RECT *)&pRVar9->w;
  } while (iVar3 != -1);
  pbVar4 = pbVar4 + 2;
  uVar7 = 0;
  iVar3 = 0x1b;
  pRVar9 = param_1;
  do {
    uVar8 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    iVar1 = 6;
    do {
      uVar2 = param_3 << 1;
      if ((uVar8 & 1) == 0) {
        uVar2 = param_4;
      }
      uVar7 = uVar7 << 4 | uVar2;
      iVar1 = iVar1 + -1;
      uVar8 = (int)uVar8 >> 1;
    } while (iVar1 != -1);
    uVar2._0_2_ = pRVar9->x;
    uVar2._2_2_ = pRVar9->y;
    pRVar9->x = (short)(uVar2 | uVar7);
    pRVar9->y = (short)((uVar2 | uVar7) >> 0x10);
    pRVar9 = (RECT *)&pRVar9->w;
    uVar7 = param_3 << 1;
    if ((uVar8 & 1) == 0) {
      uVar7 = param_4;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  rect->x = param_5;
  pRVar6->h = param_6;
  pRVar6[1].x = 4;
  *(short *)((int)(pRVar6 + 1) + 2) = 0xf;
  LoadImage(rect,(u_long *)param_1);
  return (short *)((int)(pRVar6 + 1) + 4);
}


