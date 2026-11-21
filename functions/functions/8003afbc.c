/* Function: UpdateTrackLOD */
/* Address: 8003afbc */

void UpdateTrackLOD(undefined4 param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar3 = DAT_1f800028;
  puVar1 = &GTE_CTRL;
  DAT_1f800028 = &DAT_800b52e4;
  GTE_IR1 = 0;
  GTE_CTRL = GTE_CTRL & 0xfffffffd;
  uVar4 = GTE_OFX;
  uVar2 = DAT_1f800038;
  GTE_OFX = param_1;
  gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
  gte_SetTransVector((VECTOR *)&DAT_800b5384);
  g_WheelDataPtr = &PTR_DAT_800ad908;
  ApplyWheelForce(0,DAT_800ccbfc,0);
  *(undefined2 *)(puVar1 + 6) = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = (uint)puVar3;
  return;
}


