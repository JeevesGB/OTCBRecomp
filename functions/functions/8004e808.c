/* Function: AllocCarAIData */
/* Address: 8004e808 */

void AllocCarAIData(uint param_1)

{
  undefined2 uVar1;
  short *psVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar3 = (undefined2 *)MemAllocTemp(0x40);
  puVar3[7] = 0xffff;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  puVar3[5] = 0;
  puVar3[0xb] = 0;
  psVar2 = DAT_800ccb70;
  uVar1 = g_CameraClipDist;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[6] = uVar1;
  if (*psVar2 == 0) {
    puVar3[9] = 0;
  }
  else {
    puVar3[9] = 1;
  }
  iVar5 = 8;
  puVar4 = puVar3 + 0x10;
  puVar3[10] = DAT_800ccb70[(short)puVar3[9] + 5];
  do {
    *(undefined4 *)(puVar4 + 0xe) = 0;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + -2;
  } while (-1 < iVar5);
  if ((param_1 & 1) == 0) {
    *puVar3 = 0;
  }
  else {
    *puVar3 = 0xffff;
  }
  if ((param_1 & 2) == 0) {
    puVar3[1] = 0;
  }
  else {
    puVar3[1] = 0xffff;
  }
  puVar3[4] = (short)g_AIFlag;
  g_AIFlag = g_AIFlag + 1;
  return;
}


