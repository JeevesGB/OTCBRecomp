/* Function: FUN_80045390 */
/* Address: 80045390 */

void FUN_80045390(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  puVar7 = (uchar *)MemAlloc(iVar10);
  memcpy(puVar7,*(uchar **)(param_1 + 8),iVar10);
  iVar10 = g_TrackGeomFlag1;
  *(uchar **)(param_1 + 8) = puVar7;
  iVar8 = iVar10 * 2;
  iVar9 = *(short *)(param_1 + 2) * 2;
  sVar1 = *(short *)(&DAT_800ae9d4 + iVar8);
  sVar2 = *(short *)(&DAT_800ae9d4 + iVar9);
  sVar3 = *(short *)(&DAT_800ae9e0 + iVar8);
  iVar11 = ((int)*(short *)(&DAT_800ae9f8 + iVar8) - (int)*(short *)(&DAT_800ae9f8 + iVar9)) *
           0x10000 >> 0x10;
  sVar4 = *(short *)(&DAT_800ae9e0 + iVar9);
  iVar8 = ((int)*(short *)(&DAT_800aea04 + iVar8) - (int)*(short *)(&DAT_800aea04 + iVar9)) *
          0x10000 >> 0x10;
  sVar5 = (&DAT_800af06c)[iVar10];
  sVar6 = (&DAT_800af06c)[*(short *)(param_1 + 2)];
  FUN_80056e98(puVar7,0,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,1,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,2,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,4,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,5,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,6,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,7,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,8,0x16,iVar11,iVar8);
  FUN_80056e98(puVar7,9,0x16,iVar11,iVar8);
  iVar9 = ((int)sVar1 - (int)sVar2) * 0x10000 >> 0x10;
  iVar10 = ((int)sVar3 - (int)sVar4) * 0x10000 >> 0x10;
  FUN_80056e98(puVar7,0,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,1,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,2,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,4,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,5,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,6,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,7,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,8,0x15,iVar9,iVar10);
  FUN_80056e98(puVar7,9,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,0,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,1,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,2,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,4,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,5,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,6,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,7,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,8,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,9,0x16,iVar11,iVar8);
  FUN_80056fe0(puVar7,0,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,1,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,2,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,4,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,5,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,6,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,7,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,8,0x15,iVar9,iVar10);
  FUN_80056fe0(puVar7,9,0x15,iVar9,iVar10);
  FUN_80056be4(puVar7,3,((int)sVar5 - (int)sVar6) * 0x10000 >> 0x10,0);
  FUN_800411f0(puVar7);
  return;
}


