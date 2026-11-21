/* Function: FUN_8003f310 */
/* Address: 8003f310 */

int FUN_8003f310(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar3 = g_TrackGeomFlag2;
  iVar8 = g_TrackGeomFlag2 * 0x20;
  *(short *)(&g_BarrierType + iVar8) = (short)g_TrackGeomFlag1;
  g_TrackGeomFlag1 = g_TrackGeomFlag1 + 1;
  g_TrackGeomFlag2 = g_TrackGeomFlag2 + 1;
  *(short *)(&g_BarrierCollisionData + iVar8) = (short)param_1;
  *(undefined4 *)(&g_BarrierFriction + iVar8) = 0;
  piVar4 = (int *)GsGetWorkBase();
  LoadCDFile((int)*(short *)(&DAT_800af198 + param_1 * 2),piVar4);
  *(int *)(&g_CarCollisionBounce + iVar8) = (int)piVar4 + *piVar4;
  *(int *)(&g_BarrierBounceTable + iVar8) = (int)piVar4 + piVar4[1];
  iVar12 = (int)piVar4 + piVar4[4];
  SetHeapBase(iVar12);
  iVar9 = *(short *)(&g_BarrierType + iVar8) * 2;
  sVar1 = *(short *)(&DAT_800ae9d4 + iVar9);
  iVar13 = (*(short *)(&DAT_800ae9f8 + iVar9) + -0x180) * 0x10000 >> 0x10;
  iVar11 = (*(short *)(&DAT_800aea04 + iVar9) + -0x100) * 0x10000 >> 0x10;
  sVar2 = (&DAT_800af06c)[*(short *)(&g_BarrierType + iVar8)];
  iVar9 = *(short *)(&DAT_800ae9e0 + iVar9) + -0x100;
  FUN_8005c64c(iVar12,0x16,iVar13,iVar11);
  FUN_8005b934(iVar12,0x16,iVar13,iVar11);
  iVar10 = (sVar1 + -0x140) * 0x10000 >> 0x10;
  iVar14 = (int)(short)iVar9;
  FUN_8005c64c(iVar12,0x15,iVar10,iVar14);
  FUN_8005b934(iVar12,0x15,iVar10,iVar14);
  iVar5 = GetHeapEnd();
  iVar6 = FUN_8003e7ec(iVar5 + -0x63c,iVar12,0x150,0x100);
  *(int *)(iVar5 + -0x640) = iVar6;
  iVar6 = iVar6 * 0x20 + 4;
  LoadCDFile((int)*(short *)(&DAT_800af2d0 + param_2 * 2),iVar12);
  FUN_8005c058(iVar12,0x15,iVar10,iVar14);
  FUN_8005c188(iVar12,0x15,iVar10,iVar14);
  FUN_8003e740(iVar5 + -0x63c,iVar12,0x150,0x100);
  puVar7 = (uchar *)MemAlloc(iVar6);
  *(uchar **)(&DAT_800ccce0 + iVar8) = puVar7;
  memcpy(puVar7,(uchar *)(iVar5 + -0x640),iVar6);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),0,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),1,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),2,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),4,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),5,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),6,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),7,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),8,0x16,iVar13,iVar11);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),0,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),1,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),2,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),4,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),5,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),6,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),7,0x15,iVar10,iVar14);
  FUN_80056e98(*(undefined4 *)(&g_BarrierBounceTable + iVar8),8,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),0,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),1,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),2,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),4,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),5,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),6,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),7,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),8,0x16,iVar13,iVar11);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),0,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),1,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),2,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),4,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),5,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),6,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),7,0x15,iVar10,iVar14);
  FUN_80056fe0(*(undefined4 *)(&g_BarrierBounceTable + iVar8),8,0x15,iVar10,iVar14);
  FUN_80056be4(*(undefined4 *)(&g_BarrierBounceTable + iVar8),3,(int)(short)(sVar2 + -0x3f0),0);
  *(int *)(&DAT_800cccdc + iVar8) = (int)piVar4 + piVar4[2];
  FUN_8003e908();
  if (piVar4[3] == 0) {
    *(undefined4 *)(&g_BarrierNormalX + iVar8) = 0;
  }
  else {
    *(int *)(&g_BarrierNormalX + iVar8) = (int)piVar4 + piVar4[3];
    FUN_8003ec94(*(undefined4 *)(&g_BarrierNormalX + iVar8),
                 *(undefined4 *)(&g_BarrierBounceTable + iVar8),sVar1 + -0x140,iVar9,sVar2 + -0x3f0,
                 iVar9);
    puVar7 = (uchar *)MemAlloc(0xc);
    *(uchar **)(&g_BarrierNormalY + iVar8) = puVar7;
    bzero(puVar7,0xc);
  }
  return iVar3;
}


