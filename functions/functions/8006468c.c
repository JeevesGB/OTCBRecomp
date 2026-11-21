/* Function: FUN_8006468c */
/* Address: 8006468c */

void FUN_8006468c(short *param_1,byte *param_2,short *param_3,byte *param_4,uint param_5,
                 uint *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  undefined1 *puVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char local_20 [6];
  undefined1 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  short local_10 [8];
  
  puVar7 = g_VRAMRectPtr;
  pcVar8 = local_20;
  iVar9 = 0;
  uVar11 = param_5 & 0xff;
  do {
    *pcVar8 = *param_2 + (char)((int)(((uint)*param_4 - (uint)*param_2) * uVar11) / 0xff);
    pcVar8[1] = param_2[1] + (char)((int)(((uint)param_4[1] - (uint)param_2[1]) * uVar11) / 0xff);
    pbVar1 = param_4 + 2;
    pbVar2 = param_2 + 2;
    iVar9 = iVar9 + 1;
    param_2 = param_2 + 4;
    param_4 = param_4 + 4;
    pcVar8[2] = *pbVar2 + (char)((int)(((uint)*pbVar1 - (uint)*pbVar2) * uVar11) / 0xff);
    pcVar8 = pcVar8 + 4;
  } while (iVar9 != 4);
  iVar9 = 0;
  do {
    local_10[iVar9 * 2] =
         *param_1 + (short)((int)(((int)*param_3 - (int)*param_1) * (param_5 & 0xff)) / 0xff);
    psVar3 = param_3 + 1;
    psVar4 = param_1 + 1;
    iVar10 = iVar9 + 1;
    psVar5 = param_1 + 1;
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
    local_10[iVar9 * 2 + 1] =
         *psVar5 + (short)((int)(((int)*psVar3 - (int)*psVar4) * (param_5 & 0xff)) / 0xff);
    iVar9 = iVar10;
  } while (iVar10 != 4);
  puVar6 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = g_VRAMRectPtr + 9;
  *puVar6 = 8;
                    /* Probable PsyQ macro: setPolyG4() */
  *(undefined1 *)((int)puVar7 + 7) = 0x38;
  *(char *)(puVar7 + 1) = local_20[0];
  *(char *)((int)puVar7 + 5) = local_20[1];
  *(char *)((int)puVar7 + 6) = local_20[2];
  *(char *)(puVar7 + 3) = local_20[4];
  *(char *)((int)puVar7 + 0xd) = local_20[5];
  *(undefined1 *)((int)puVar7 + 0xe) = local_1a;
  *(undefined1 *)(puVar7 + 5) = local_18;
  *(undefined1 *)((int)puVar7 + 0x15) = local_17;
  *(undefined1 *)((int)puVar7 + 0x16) = local_16;
  *(undefined1 *)(puVar7 + 7) = local_14;
  *(undefined1 *)((int)puVar7 + 0x1d) = local_13;
  *(undefined1 *)((int)puVar7 + 0x1e) = local_12;
  *(short *)(puVar7 + 2) = local_10[0];
  *(short *)((int)puVar7 + 10) = local_10[1];
  *(short *)(puVar7 + 4) = local_10[2];
  *(short *)((int)puVar7 + 0x12) = local_10[3];
  *(short *)(puVar7 + 6) = local_10[4];
  *(short *)((int)puVar7 + 0x1a) = local_10[5];
  *(short *)(puVar7 + 8) = local_10[6];
  *(short *)((int)puVar7 + 0x22) = local_10[7];
                    /* Probable PsyQ macro: addPrim(). */
  *puVar7 = *puVar7 & 0xff000000 | *param_6 & 0xffffff;
  *param_6 = *param_6 & 0xff000000 | (uint)puVar7 & 0xffffff;
  return;
}


