/* Function: FUN_80039b5c */
/* Address: 80039b5c */

undefined2 * FUN_80039b5c(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  short local_38;
  short local_36;
  undefined2 local_34;
  undefined2 local_32;
  short local_30;
  short local_2e;
  
  iVar6 = 0;
  puVar1 = (undefined2 *)MemAlloc(g_TrackSegmentCount << 5);
  if (0 < g_TrackSegmentCount) {
    puVar5 = puVar1 + 1;
    puVar8 = puVar1;
    do {
      uVar7 = (int)*(short *)(iVar6 * 2 + DAT_800cca18) - 0x400;
      uVar3 = (&g_SinCosTable)[-uVar7 & 0xfff];
      if ((int)uVar3 < 0) {
        uVar4 = (int)uVar3 >> 0x10 | 0xffff8000;
      }
      else {
        uVar4 = (int)uVar3 >> 0x10 & 0x7fff;
      }
      uVar2 = uVar3 | 0xffff8000;
      if ((uVar3 & 0x8000) == 0) {
        uVar2 = uVar3 & 0x7fff;
      }
      local_30 = 0x7fff;
      local_34 = 0x7fff;
      local_38 = 0x7fff;
      local_2e = -0x8000;
      local_32 = 0x8000;
      local_36 = -0x8000;
      FUN_80035d50(&local_38,g_WheelForceTable2,iVar6,uVar2,uVar4);
      FUN_80035d50(&local_38,g_WheelForceTable4,iVar6,uVar2,uVar4);
      if (local_38 < -10000) {
        local_38 = -10000;
      }
      if (10000 < local_36) {
        local_36 = 10000;
      }
      local_30 = local_30 + -200;
      if (local_30 < -0x9c4) {
        local_30 = -0x9c4;
      }
      local_2e = local_2e + 200;
      if (0x9c4 < local_2e) {
        local_2e = 0x9c4;
      }
      uVar3 = (&g_SinCosTable)[uVar7 & 0xfff];
      if ((int)uVar3 < 0) {
        uVar7 = (int)uVar3 >> 0x10 | 0xffff8000;
      }
      else {
        uVar7 = (int)uVar3 >> 0x10 & 0x7fff;
      }
      uVar4 = uVar3 | 0xffff8000;
      if ((uVar3 & 0x8000) == 0) {
        uVar4 = uVar3 & 0x7fff;
      }
      *puVar8 = (short)((int)((int)local_38 * uVar7 + (int)local_30 * uVar4) >> 0xc);
      puVar5[1] = (short)((int)((int)local_30 * uVar7 - (int)local_38 * uVar4) >> 0xc);
      puVar5[3] = (short)((int)((int)local_38 * uVar7 + (int)local_2e * uVar4) >> 0xc);
      puVar5[5] = (short)((int)((int)local_2e * uVar7 - (int)local_38 * uVar4) >> 0xc);
      puVar5[7] = (short)((int)((int)local_36 * uVar7 + (int)local_30 * uVar4) >> 0xc);
      puVar5[9] = (short)((int)((int)local_30 * uVar7 - (int)local_36 * uVar4) >> 0xc);
      puVar5[0xb] = (short)((int)((int)local_36 * uVar7 + (int)local_2e * uVar4) >> 0xc);
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 0x10;
      puVar5[0xc] = 0xff9c;
      puVar5[8] = 0xff9c;
      puVar5[4] = 0xff9c;
      *puVar5 = 0xff9c;
      puVar5[0xd] = (short)((int)((int)local_2e * uVar7 - (int)local_36 * uVar4) >> 0xc);
      puVar5 = puVar5 + 0x10;
    } while (iVar6 < g_TrackSegmentCount);
  }
  return puVar1;
}


