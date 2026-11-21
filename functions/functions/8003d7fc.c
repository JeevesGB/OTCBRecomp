/* Function: FUN_8003d7fc */
/* Address: 8003d7fc */

void FUN_8003d7fc(int param_1)

{
  short *psVar1;
  ushort uVar2;
  RECT *rect;
  short sVar3;
  uint uVar4;
  undefined2 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(ushort *)(param_1 + 0x4c);
  uVar9 = *(int *)(param_1 + 0x14) - 1;
  while ((int)uVar9 < 1) {
    uVar8 = *(uint *)(param_1 + 0x18);
    pbVar6 = (byte *)(*(int *)(param_1 + 0x28) + ((int)uVar8 >> 3));
    uVar4 = (uint)*pbVar6 + (uint)pbVar6[1] * 0x100 + (uint)pbVar6[2] * 0x10000 +
            (uint)pbVar6[3] * 0x1000000 >> (uVar8 & 7);
    switch(uVar4 & 7) {
    default:
      iVar7 = 0xb;
      uVar4 = uVar4 & 0x7ff;
      break;
    case 4:
      iVar7 = 6;
      uVar4 = uVar4 & 0x3f;
      break;
    case 5:
      iVar7 = 8;
      uVar4 = uVar4 & 0xff;
      break;
    case 6:
      iVar7 = 0x10;
      uVar4 = uVar4 & 0xffff;
      break;
    case 7:
      iVar7 = 0x18;
      uVar4 = uVar4 & 0xffffff;
    }
    *(uint *)(param_1 + 0x18) = uVar8 + iVar7;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar7;
    uVar8 = (int)uVar4 >> 3;
    uVar5 = (undefined2)uVar8;
    switch(uVar4 & 7) {
    case 0:
      *(undefined2 *)(param_1 + 0x4c) = uVar5;
      break;
    case 1:
      if ((uVar8 & 0x80) != 0) {
        uVar8 = uVar8 | 0xffffff80;
      }
      *(short *)(param_1 + 0x50) = (short)uVar8;
      break;
    case 2:
      *(undefined2 *)(param_1 + 0x52) = uVar5;
      break;
    case 3:
      *(undefined2 *)(param_1 + 0x54) = uVar5;
      break;
    case 4:
      if ((uVar8 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x3e) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x3e) = 0xffff;
      }
      if ((uVar8 & 2) == 0) {
        *(undefined2 *)(param_1 + 0x40) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x40) = 0xffff;
      }
      if ((uVar8 & 4) == 0) {
        *(undefined2 *)(param_1 + 0x42) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x42) = 0xffff;
      }
      break;
    case 5:
    case 6:
    case 7:
      uVar9 = uVar8;
    }
    iVar7 = *(int *)(param_1 + 0x24) >> 3;
    if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x18)) {
      memcpy(*(uchar **)(param_1 + 0x28),*(uchar **)(param_1 + 0x28) + iVar7,iVar7);
      rect = g_VRAMRectPtr;
      g_VRAMRectPtr->x = *(short *)(param_1 + 0xe);
      psVar1 = &g_VRAMRectPtr->y;
      g_VRAMRectPtr = g_VRAMRectPtr + 1;
      *psVar1 = *(short *)(param_1 + 0x10);
      sVar3 = *(short *)(param_1 + 0x12);
      rect->h = 1;
      rect->w = sVar3;
      StoreImage2(rect,(u_long *)(*(int *)(param_1 + 0x28) + (*(int *)(param_1 + 0x24) >> 3)));
      sVar3 = *(short *)(param_1 + 0xe) + *(short *)(param_1 + 0x12);
      *(short *)(param_1 + 0xe) = sVar3;
      if ((int)*(short *)(param_1 + 8) + (int)*(short *)(param_1 + 0xc) <= (int)sVar3) {
        *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 8);
        *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar9;
  *(ushort *)(param_1 + 0x4e) = (uVar2 ^ *(ushort *)(param_1 + 0x4c)) & *(ushort *)(param_1 + 0x4c);
  return;
}


