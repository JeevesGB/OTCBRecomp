/* Function: UpdateSinglePlayerPhysics */
/* Address: 8002ccac */

void UpdateSinglePlayerPhysics(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_20;
  short sStack_1e;
  short local_1c;
  short sStack_1a;
  short local_18;
  short sStack_16;
  
  GTE_FLAG = 6;
  GTE_LZCS = g_CameraAngle;
  SetCameraMatrix((&g_CameraList)[g_CameraFlag2]);
  local_1c = (short)(&g_SinCosTable)[g_CameraAngleX._2_2_ & 0xfff];
  local_20 = (short)(&g_SinCosTable)[(ushort)g_CameraAngleX & 0xfff];
  iVar3 = (int)local_1c;
  sStack_1a = (short)((uint)(&g_SinCosTable)[g_CameraAngleX._2_2_ & 0xfff] >> 0x10);
  sStack_16 = (short)((uint)(&g_SinCosTable)[(ushort)g_CameraAngleY & 0xfff] >> 0x10);
  iVar7 = (int)sStack_16;
  iVar6 = (int)sStack_1a;
  local_18 = (short)(&g_SinCosTable)[(ushort)g_CameraAngleY & 0xfff];
  iVar4 = (int)local_18;
  iVar1 = local_20 * iVar3 >> 6;
  iVar2 = local_20 * iVar6 >> 6;
  sStack_1e = (short)((uint)(&g_SinCosTable)[(ushort)g_CameraAngleX & 0xfff] >> 0x10);
  iVar5 = (int)sStack_1e;
  GTE_VXY0 = (undefined2)
             ((uint)((((iVar6 * iVar7 >> 0xc) + (iVar1 * iVar4 >> 0x12)) * 0x10000 >> 0x10) * 0x113)
             >> 8);
  GTE_VZ1 = (undefined2)
            ((((iVar1 * iVar7 >> 0x12) - (iVar6 * iVar4 >> 0xc)) * 0x10000 >> 0x10) * 0x39d >> 10);
  GTE_VXY1 = (undefined2)
             ((uint)((((iVar2 * iVar4 >> 0x12) - (iVar3 * iVar7 >> 0xc)) * 0x10000 >> 0x10) * 0x113)
             >> 8);
  GTE_VZ2 = (undefined2)
            ((((iVar3 * iVar4 >> 0xc) + (iVar2 * iVar7 >> 0x12)) * 0x10000 >> 0x10) * 0x39d >> 10);
  GTE_VZ0 = (undefined2)((uint)((short)(iVar5 * iVar4 >> 0xc) * 0x113) >> 8);
  GTE_VXY2 = (undefined2)((short)(iVar5 * iVar7 >> 0xc) * 0x39d >> 10);
  GTE_RGB = (undefined2)((short)(iVar5 * iVar3 >> 0xc) * 0x465 >> 10);
  GTE_OTZ = (undefined2)(-local_20 * 0x465 >> 10);
  GTE_IR0 = (undefined2)((short)(iVar5 * iVar6 >> 0xc) * 0x465 >> 10);
  SetCarMatrix(g_PlayerCarPtr);
  GTE_CTRL = GTE_CTRL | 2;
  GTE_OFX = g_PlayerCarPtr;
  iVar1 = g_PlayerCarObject;
  if ((*(uint *)(g_PlayerCarObject + 0x40) & 1) != 0) {
    iVar1 = 0;
  }
  UpdateCarInput(iVar1);
  UpdateCarHUD(iVar1);
  UpdateCarParticles(iVar1);
  UpdateCarReplay(iVar1);
  if (g_RaceComplete == 0) {
    UpdateCarRaceProgress();
  }
  UpdateCarSegment();
  RenderTrackSection((int)((uint)*(ushort *)(g_PlayerCarObject + 0x15c) << 0x10) >> 0x14,0xffffffff,
                     0);
  RenderTrackSection((int)((uint)*(ushort *)(g_PlayerCarObject + 0x15c) << 0x10) >> 0x14,2,0);
  RenderPlayerCar(g_PlayerCarPtr,g_RaceOTPtr1 + 8);
  UpdateTrackLOD(g_RaceOTPtr1 + 0x40c);
  RenderTrackObjects(g_RaceOTPtr1 + 8);
  RenderTrackEffects();
  RenderTrackBackground();
  UpdateCarSound();
  return;
}


