/* Function: FUN_8003d118 */
/* Address: 8003d118 */

void FUN_8003d118(short *param_1)

{
  short sVar1;
  RECT *rect;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0x12) >> 3;
  if (*(int *)(param_1 + 0x12) <= *(int *)(param_1 + 0xc)) {
    memcpy(*(uchar **)(param_1 + 0x14),*(uchar **)(param_1 + 0x14) + iVar4,iVar4);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x12);
  }
  if (*param_1 != 0) {
    *param_1 = 0;
    uVar2 = (uint)(param_1[0x1f] != 0);
    if (param_1[0x20] != 0) {
      uVar2 = uVar2 | 2;
    }
    if (param_1[0x21] != 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_8003cd80(param_1,uVar2 << 3 | 4,6);
  }
  uVar6 = 0;
  iVar4 = (int)param_1[0x28];
  iVar5 = (int)param_1[0x1c];
  iVar7 = (int)param_1[0x29];
  iVar8 = (int)param_1[0x2a];
  iVar3 = (&g_PadRawState)[iVar5 * 3];
  uVar2 = ~(uint)CONCAT11(*(undefined1 *)(iVar3 + 2),*(undefined1 *)(iVar3 + 3));
  if (param_1[0x1f] == 0) {
    uVar6 = (uint)((uVar2 & 0x8000) != 0);
    if ((uVar2 & 0x2000) != 0) {
      uVar6 = uVar6 | 2;
    }
  }
  else {
    iVar4 = (uint)*(byte *)(iVar3 + param_1[0x2b]) - (int)param_1[0x34];
    if (iVar4 < 0) {
      iVar4 = iVar4 + param_1[0x36];
      if (0 < iVar4) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = iVar4 - param_1[0x36];
      if (iVar4 < 0) {
        iVar4 = 0;
      }
    }
    iVar4 = iVar4 * param_1[0x37] >> 5;
    if (iVar4 < 0x80) {
      if (iVar4 < -0x7f) {
        iVar4 = -0x7f;
      }
    }
    else {
      iVar4 = 0x7f;
    }
  }
  if (param_1[0x20] == 0) {
    if ((uVar2 & (int)param_1[0x2c]) != 0) {
      uVar6 = uVar6 | 4;
    }
  }
  else {
    iVar7 = (int)(((uint)*(byte *)((&g_PadRawState)[iVar5 * 3] + (int)param_1[0x2c]) -
                  (int)param_1[0x38]) * (int)param_1[0x39]) >> 4;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (0xff < iVar7) {
      iVar7 = 0xff;
    }
  }
  if (param_1[0x21] == 0) {
    if ((uVar2 & (int)param_1[0x2d]) != 0) {
      uVar6 = uVar6 | 8;
    }
  }
  else {
    iVar8 = (int)(((uint)*(byte *)((&g_PadRawState)[iVar5 * 3] + (int)param_1[0x2d]) -
                  (int)param_1[0x3a]) * (int)param_1[0x3b]) >> 4;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (0xff < iVar8) {
      iVar8 = 0xff;
    }
  }
  if ((uVar2 & (int)param_1[0x2e]) != 0) {
    uVar6 = uVar6 | 0x10;
  }
  if ((uVar2 & (int)param_1[0x2f]) != 0) {
    uVar6 = uVar6 | 0x20;
  }
  if (param_1[0x22] == 0) {
    if ((uVar2 & (int)param_1[0x30]) != 0) {
      uVar6 = uVar6 | 0x80;
    }
  }
  else if (0x1e < *(byte *)((&g_PadRawState)[iVar5 * 3] + (int)param_1[0x30])) {
    uVar6 = uVar6 | 0x80;
  }
  if (param_1[0x23] == 0) {
    if ((uVar2 & (int)param_1[0x32]) != 0) {
      uVar6 = uVar6 | 0x100;
    }
  }
  else if (0x1e < *(byte *)((&g_PadRawState)[iVar5 * 3] + (int)param_1[0x32])) {
    uVar6 = uVar6 | 0x100;
  }
  if (param_1[0x24] == 0) {
    if ((uVar2 & (int)param_1[0x33]) != 0) {
      uVar6 = uVar6 | 0x200;
    }
  }
  else if (0x1e < *(byte *)((&g_PadRawState)[iVar5 * 3] + (int)param_1[0x33])) {
    uVar6 = uVar6 | 0x200;
  }
  if (param_1[0x25] == 0) {
    if ((uVar2 & (int)param_1[0x31]) != 0) {
      uVar6 = uVar6 | 0x40;
    }
  }
  else if (0x1e < *(byte *)((&g_PadRawState)[iVar5 * 3] + (int)param_1[0x31])) {
    uVar6 = uVar6 | 0x40;
  }
  sVar1 = param_1[0x26];
  if ((((int)sVar1 ^ uVar6) & 0xff) != 0) {
    FUN_8003cd80(param_1,uVar6 << 3,0xb);
  }
  param_1[0x27] = (ushort)((int)sVar1 ^ uVar6) & (ushort)uVar6;
  param_1[0x26] = (ushort)uVar6;
  if (param_1[0x28] != iVar4) {
    param_1[0x28] = (short)iVar4;
    FUN_8003cd80(param_1,iVar4 << 3 | 1,0xb);
  }
  if (param_1[0x29] != iVar7) {
    param_1[0x29] = (short)iVar7;
    FUN_8003cd80(param_1,iVar7 << 3 | 2,0xb);
  }
  if (param_1[0x2a] != iVar8) {
    param_1[0x2a] = (short)iVar8;
    FUN_8003cd80(param_1,iVar8 << 3 | 3,0xb);
  }
  *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
  rect = g_VRAMRectPtr;
  if (*(int *)(param_1 + 0x12) <= *(int *)(param_1 + 0xc)) {
    g_VRAMRectPtr->x = param_1[7];
    g_VRAMRectPtr->y = param_1[8];
    sVar1 = param_1[9];
    g_VRAMRectPtr->h = 1;
    g_VRAMRectPtr->w = sVar1;
    g_VRAMRectPtr = g_VRAMRectPtr + 1;
    LoadImage(rect,*(u_long **)(param_1 + 0x14));
    sVar1 = param_1[7];
    param_1[7] = sVar1 + param_1[9];
    if ((int)param_1[4] + (int)param_1[6] <= (int)(short)(sVar1 + param_1[9])) {
      param_1[7] = param_1[4];
      param_1[8] = param_1[8] + 1;
    }
  }
  return;
}


