/* Function: FlushRenderer */
/* Address: 800550d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FlushRenderer(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  GTE_CTRL = 0;
  GTE_IR1 = 0;
  DAT_1f800028 = &DAT_800b5324;
  DAT_1f80003a = *(short *)(g_DisplayConfig + 8) >> 1;
  DAT_1f80003c = -DAT_1f80003a;
  JOY_MCD_BAUD = 4;
  DAT_1f800038 = 50000;
  DAT_1f800044._0_2_ = 100;
  DAT_1f800030._0_2_ = 0;
  DAT_1f800044._2_2_ = 0x80;
  sVar3 = *(short *)(g_DisplayConfig + 10) >> 1;
  _DAT_1f800040 = CONCAT22(3,sVar3);
  DAT_1f80003e = -sVar3;
  puVar1 = &GTE_CTRL;
  puVar2 = &DAT_800cbb28;
  do {
    puVar5 = puVar2;
    puVar4 = puVar1;
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    uVar8 = puVar4[3];
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;
    puVar5[3] = uVar8;
    puVar1 = puVar4 + 4;
    puVar2 = puVar5 + 4;
  } while (puVar4 + 4 != (undefined4 *)&DAT_1f800040);
  uVar6 = puVar4[5];
  uVar7 = puVar4[6];
  puVar5[4] = _DAT_1f800040;
  puVar5[5] = uVar6;
  puVar5[6] = uVar7;
  return;
}


