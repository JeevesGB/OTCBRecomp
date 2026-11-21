/* Function: UpdateCarCollisionResponse */
/* Address: 8003e3c0 */

void UpdateCarCollisionResponse(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  RECT *rect;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  u_long *p;
  uint *puVar8;
  uint uVar9;
  
  puVar8 = *(uint **)(param_1 + 0x1c);
  if (puVar8 == (uint *)0x0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x160) >> 3 & 2;
  if (*(short *)(param_1 + 0x240) != 0) {
    uVar9 = uVar9 | 1;
  }
  uVar4 = *puVar8;
  if ((uVar9 ^ uVar4) == 0) {
    return;
  }
  if (uVar9 == 1) {
    psVar6 = (short *)puVar8[6];
    psVar7 = psVar6 + 2;
    iVar5 = psVar6[1] * 0x10 + -1;
    psVar6 = (short *)(puVar8[4] + (*psVar6 + -0x100) * 0x20);
    if (iVar5 != -1) {
      do {
        if (*psVar7 != 0) {
          *psVar6 = *psVar7;
        }
        psVar6 = psVar6 + 1;
        iVar5 = iVar5 + -1;
        psVar7 = psVar7 + 1;
      } while (iVar5 != -1);
      *puVar8 = 1;
      goto LAB_8003e5bc;
    }
  }
  else if (uVar9 < 2) {
    if (uVar9 != 0) {
      *puVar8 = uVar9;
      goto LAB_8003e5bc;
    }
    psVar6 = (short *)puVar8[7];
    psVar7 = psVar6 + 2;
    iVar5 = psVar6[1] * 0x10 + -1;
    psVar6 = (short *)(puVar8[4] + (*psVar6 + -0x100) * 0x20);
    if (iVar5 != -1) {
      do {
        if (*psVar7 != 0) {
          *psVar6 = *psVar7;
        }
        psVar6 = psVar6 + 1;
        iVar5 = iVar5 + -1;
        psVar7 = psVar7 + 1;
      } while (iVar5 != -1);
      *puVar8 = 0;
      goto LAB_8003e5bc;
    }
  }
  else if (uVar9 == 2) {
    psVar6 = (short *)puVar8[7];
    psVar7 = psVar6 + 2;
    iVar5 = psVar6[1] * 0x10 + -1;
    psVar6 = (short *)(puVar8[5] + (*psVar6 + -0x100) * 0x20);
    if (iVar5 != -1) {
      do {
        if (*psVar7 != 0) {
          *psVar6 = *psVar7;
        }
        psVar6 = psVar6 + 1;
        iVar5 = iVar5 + -1;
        psVar7 = psVar7 + 1;
      } while (iVar5 != -1);
      *puVar8 = 2;
      goto LAB_8003e5bc;
    }
  }
  else {
    if (uVar9 != 3) {
      *puVar8 = uVar9;
      goto LAB_8003e5bc;
    }
    psVar7 = (short *)puVar8[6];
    psVar6 = psVar7 + 2;
    iVar5 = psVar7[1] * 0x10;
    psVar7 = (short *)(puVar8[5] + (*psVar7 + -0x100) * 0x20);
    while (iVar5 = iVar5 + -1, iVar5 != -1) {
      if (*psVar6 != 0) {
        *psVar7 = *psVar6;
      }
      psVar7 = psVar7 + 1;
      psVar6 = psVar6 + 1;
    }
  }
  *puVar8 = uVar9;
LAB_8003e5bc:
  rect = g_VRAMRectPtr;
  if (((uVar9 ^ uVar4) & 2) == 0) {
    sVar2 = ((short *)puVar8[6])[1];
    sVar1 = *(short *)puVar8[6];
    sVar3 = *(short *)(&DAT_800ae9ec + *(short *)(param_1 + 0x4a) * 2);
    psVar6 = &g_VRAMRectPtr->w;
    g_VRAMRectPtr = g_VRAMRectPtr + 1;
    *psVar6 = 0x10;
    rect->h = sVar2;
    rect->y = sVar1;
    rect->x = sVar3;
    if ((*puVar8 & 2) == 0) {
      uVar9 = puVar8[4];
    }
    else {
      uVar9 = puVar8[5];
    }
    p = (u_long *)(uVar9 + (sVar1 + -0x100) * 0x20);
  }
  else {
    sVar2 = *(short *)(&DAT_800ae9ec + *(short *)(param_1 + 0x4a) * 2);
    g_VRAMRectPtr->y = 0x100;
    g_VRAMRectPtr->w = 0x10;
    g_VRAMRectPtr->x = sVar2;
    g_VRAMRectPtr->h = (short)puVar8[1];
    g_VRAMRectPtr = g_VRAMRectPtr + 1;
    if ((*puVar8 & 2) == 0) {
      p = (u_long *)puVar8[4];
    }
    else {
      p = (u_long *)puVar8[5];
    }
  }
  LoadImage(rect,p);
  return;
}


