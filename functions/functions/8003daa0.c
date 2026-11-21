/* Function: AllocCarRenderData */
/* Address: 8003daa0 */

void AllocCarRenderData(int param_1,undefined2 *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  RECT *rect;
  uchar *puVar4;
  undefined4 uVar5;
  
  puVar4 = (uchar *)MemAllocTemp(0x80);
  bzero(puVar4,0x80);
  uVar3 = *param_2;
  *(undefined2 *)(puVar4 + 8) = uVar3;
  *(undefined2 *)(puVar4 + 0xe) = uVar3;
  uVar3 = param_2[1];
  *(undefined2 *)(puVar4 + 10) = uVar3;
  *(undefined2 *)(puVar4 + 0x10) = uVar3;
  uVar3 = param_2[2];
  puVar4[0x12] = '\x10';
  puVar4[0x13] = '\0';
  *(undefined2 *)(puVar4 + 0xc) = uVar3;
  uVar5 = MemAllocTemp(0x40);
  *(undefined4 *)(puVar4 + 0x28) = uVar5;
  *(int *)(puVar4 + 0x24) = (int)*(short *)(puVar4 + 0x12) << 4;
  sVar1 = param_2[2];
  sVar2 = param_2[3];
  puVar4[0x54] = '\0';
  puVar4[0x55] = '\0';
  puVar4[0x52] = '\0';
  puVar4[0x53] = '\0';
  puVar4[0x50] = '\0';
  puVar4[0x51] = '\0';
  puVar4[0x6a] = '\0';
  puVar4[0x6b] = '\0';
  puVar4[0x4e] = '\0';
  puVar4[0x4f] = '\0';
  puVar4[0x4c] = '\0';
  puVar4[0x4d] = '\0';
  puVar4[0x14] = '\0';
  puVar4[0x15] = '\0';
  puVar4[0x16] = '\0';
  puVar4[0x17] = '\0';
  puVar4[0x1c] = '\0';
  puVar4[0x1d] = '\0';
  puVar4[0x1e] = '\0';
  puVar4[0x1f] = '\0';
  puVar4[0x18] = '\0';
  puVar4[0x19] = '\0';
  puVar4[0x1a] = '\0';
  puVar4[0x1b] = '\0';
  puVar4[4] = '\0';
  puVar4[5] = '\0';
  puVar4[2] = '\0';
  puVar4[3] = '\0';
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  *(int *)(puVar4 + 0x20) = (int)sVar1 * sVar2 * 0x10;
  rect = g_VRAMRectPtr;
  if (param_1 < 0) {
    puVar4[6] = '\0';
    puVar4[7] = '\0';
    g_VRAMRectPtr->x = *(short *)(puVar4 + 0xe);
    g_VRAMRectPtr->y = *(short *)(puVar4 + 0x10);
    sVar1 = *(short *)(puVar4 + 0x12);
    g_VRAMRectPtr->h = 1;
    g_VRAMRectPtr->w = sVar1 << 1;
    g_VRAMRectPtr = g_VRAMRectPtr + 1;
    StoreImage2(rect,*(u_long **)(puVar4 + 0x28));
    *(short *)(puVar4 + 0xe) = *(short *)(puVar4 + 0xe) + *(short *)(puVar4 + 0x12) * 2;
  }
  else {
    puVar4[6] = 0xff;
    puVar4[7] = 0xff;
    *(short *)(puVar4 + 0x38) = (short)param_1;
  }
  puVar4[0x3a] = 0xff;
  puVar4[0x3b] = 0xff;
  puVar4[0x7c] = '\0';
  puVar4[0x7d] = '\0';
  puVar4[0x7a] = '\0';
  puVar4[0x7b] = '\0';
  puVar4[0x78] = '\0';
  puVar4[0x79] = '\0';
  return;
}


