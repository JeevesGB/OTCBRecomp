/* Function: FUN_80051fdc */
/* Address: 80051fdc */

/* WARNING: Removing unreachable block (ram,0x800520ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051fdc(void)

{
  MATRIX *r0;
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [16];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  puVar4 = auStack_40;
  puVar1 = &DAT_800af17c;
  iVar2 = *(int *)(g_PlayerCarObject + 0x14);
  local_30 = 0;
  local_2c = DAT_800af186;
  r0 = (MATRIX *)(iVar2 + 0x10);
  iVar3 = iVar2 + 8;
  local_2e = DAT_800af184;
  gte_SetRotMatrix(r0);
  gte_ldv0((SVECTOR *)(puVar4 + 0x10));
  gte_rtv0();
  gte_stlvnl((VECTOR *)(puVar4 + 0x18));
  _g_CarPosX = r0->t[0] + *(int *)(puVar4 + 0x18);
  _g_CarPosY = r0->t[1] + *(int *)(puVar4 + 0x1c);
  _g_CarPosZ = r0->t[2] + *(int *)(puVar4 + 0x20);
  g_CarTrackSegment = FindNearestSegment(_g_CarPosX,_g_CarPosZ,(int)g_CarTrackSegment);
  g_GTEScale = puVar1[6];
  g_GTEMaxVal = 0xffff / (int)g_GTEScale;
  if (g_GTEScale == 0) {
    trap(0x1c00);
  }
  g_CameraAngleX._0_2_ = puVar1[3] - *(short *)(iVar2 + 8);
  g_CameraAngleX._2_2_ = *(ushort *)(iVar3 + 2) ^ 0x800;
  GTE_CTRL = GTE_CTRL | 0x80000000;
  g_CameraAngleY._0_2_ = -*(short *)(iVar3 + 4);
  JOY_MCD_BAUD = (undefined2)(g_GTEMaxVal >> 1);
  SetGTEParams();
  FUN_8005407c();
  FUN_80055938(&DAT_800cd0e0,g_RaceOTPtr1 + 4);
  return;
}


