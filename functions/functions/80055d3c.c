/* Function: FUN_80055d3c */
/* Address: 80055d3c */

/* WARNING: Removing unreachable block (ram,0x80055d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80055d3c(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  g_GTEMaxVal = 0xffff / (int)(short)DAT_800cd480;
  if ((short)DAT_800cd480 == 0) {
    trap(0x1c00);
  }
  g_CameraAngleX = DAT_800cd488;
  g_CameraAngleY = DAT_800cd48c;
  _g_CarPosX = DAT_800cd490;
  _g_CarPosY = DAT_800cd494;
  _g_CarPosZ = DAT_800cd498;
  g_CameraRoll = DAT_800cd49c;
  g_CarTrackSegment = (undefined2)DAT_800cd4a0;
  g_CarPhysicsParams = DAT_800cd484;
  g_GTEScale = (short)DAT_800cd480;
  JOY_MCD_BAUD = (undefined2)(g_GTEMaxVal >> 1);
  SetGTEParams();
  puVar2 = &DAT_800cbb28;
  puVar3 = &GTE_CTRL;
  do {
    puVar6 = puVar3;
    puVar4 = puVar2;
    uVar9 = puVar4[1];
    uVar11 = puVar4[2];
    uVar13 = puVar4[3];
    *puVar6 = *puVar4;
    puVar6[1] = uVar9;
    puVar6[2] = uVar11;
    puVar6[3] = uVar13;
    puVar2 = puVar4 + 4;
    puVar3 = puVar6 + 4;
  } while (puVar4 + 4 != &DAT_800cbb48);
  uVar9 = puVar4[5];
  uVar11 = puVar4[6];
  puVar6[4] = DAT_800cbb48;
  puVar6[5] = uVar9;
  puVar6[6] = uVar11;
  puVar1 = g_VRAMRectPtr;
  iVar7 = *(int *)(g_DisplayConfig + ((int)((DAT_800cbb84 ^ 1) << 0x10) >> 0xe) + 0x2c);
  puVar5 = (uint *)(iVar7 + 0x1c);
  puVar8 = g_VRAMRectPtr;
  g_VRAMRectPtr = g_VRAMRectPtr + 0x10;
  do {
    uVar10 = puVar5[1];
    uVar12 = puVar5[2];
    uVar14 = puVar5[3];
    *puVar8 = *puVar5;
    puVar8[1] = uVar10;
    puVar8[2] = uVar12;
    puVar8[3] = uVar14;
    puVar5 = puVar5 + 4;
    puVar8 = puVar8 + 4;
  } while (puVar5 != (uint *)(iVar7 + 0x5c));
                    /* Probable PsyQ macro: addPrim(). */
  *puVar1 = *puVar1 & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)puVar1 & 0xffffff;
  return;
}


