/* Function: FUN_80064434 */
/* Address: 80064434 */

void FUN_80064434(short *param_1,byte *param_2,short *param_3,byte *param_4,byte param_5,
                 uint *param_6)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short local_10 [8];
  
  puVar11 = g_VRAMRectPtr;
  bVar5 = *param_4;
  bVar6 = *param_2;
  uVar14 = (uint)param_5;
  bVar7 = param_4[1];
  bVar8 = param_2[1];
  bVar9 = param_4[2];
  bVar10 = param_2[2];
  iVar12 = 0;
  do {
    local_10[iVar12 * 2] =
         *param_1 + (short)((int)(((int)*param_3 - (int)*param_1) * uVar14) / 0xff);
    psVar1 = param_3 + 1;
    psVar2 = param_1 + 1;
    iVar13 = iVar12 + 1;
    psVar3 = param_1 + 1;
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
    local_10[iVar12 * 2 + 1] =
         *psVar3 + (short)((int)(((int)*psVar1 - (int)*psVar2) * uVar14) / 0xff);
    iVar12 = iVar13;
  } while (iVar13 != 4);
  puVar4 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = g_VRAMRectPtr + 6;
  *puVar4 = 5;
                    /* Probable PsyQ macro: setPolyF4() */
  *(undefined1 *)((int)puVar11 + 7) = 0x28;
  *(byte *)(puVar11 + 1) = bVar6 + (char)((int)(((uint)bVar5 - (uint)bVar6) * uVar14) / 0xff);
  *(byte *)((int)puVar11 + 5) = bVar8 + (char)((int)(((uint)bVar7 - (uint)bVar8) * uVar14) / 0xff);
  *(byte *)((int)puVar11 + 6) = bVar10 + (char)((int)(((uint)bVar9 - (uint)bVar10) * uVar14) / 0xff)
  ;
  *(short *)(puVar11 + 2) = local_10[0];
  *(short *)((int)puVar11 + 10) = local_10[1];
  *(short *)(puVar11 + 3) = local_10[2];
  *(short *)((int)puVar11 + 0xe) = local_10[3];
  *(short *)(puVar11 + 4) = local_10[4];
  *(short *)((int)puVar11 + 0x12) = local_10[5];
  *(short *)(puVar11 + 5) = local_10[6];
  *(short *)((int)puVar11 + 0x16) = local_10[7];
                    /* Probable PsyQ macro: addPrim(). */
  *puVar11 = *puVar11 & 0xff000000 | *param_6 & 0xffffff;
  *param_6 = *param_6 & 0xff000000 | (uint)puVar11 & 0xffffff;
  return;
}


