/* Function: UpdateVSPlayerPhysics */
/* Address: 8002d154 */

void UpdateVSPlayerPhysics(void)

{
  int iVar1;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  GTE_FLAG = 6;
  GTE_LZCS = g_CameraAngle;
  FUN_8005622c();
  SetCarMatrix(g_PlayerCarPtr);
  GTE_CTRL = GTE_CTRL | 2;
  GTE_OFX = g_PlayerCarPtr;
  SetCameraMatrix((&g_CameraList)[g_CameraFlag1]);
  FUN_80055938(&DAT_800cc960,g_RaceOTPtr1 + 0x40c);
  iVar1 = g_PlayerCarObject;
  if ((*(uint *)(g_PlayerCarObject + 0x40) & 1) != 0) {
    iVar1 = 0;
  }
  UpdateCarInput(iVar1);
  UpdateCarSegment();
  if (g_RaceComplete != 0) {
    UpdateCarHUD(iVar1);
    UpdateCarParticles(iVar1);
    UpdateCarReplay(iVar1);
  }
  UpdateTrackLOD(g_RaceOTPtr1 + 0x408);
  RenderPlayerCar(g_PlayerCarPtr,g_RaceOTPtr1 + 8);
  SetCarMatrix(g_PlayerCarPtr);
  GTE_CTRL = GTE_CTRL | 2;
  GTE_OFX = g_PlayerCarPtr;
  SetCameraMatrix((&g_CameraList)[g_CameraActive]);
  FUN_80055938(&DAT_800cc9b0,g_RaceOTPtr1 + 4);
  iVar1 = g_PlayerCarObject;
  if ((*(uint *)(g_PlayerCarObject + 0x40) & 1) != 0) {
    iVar1 = 0;
  }
  UpdateCarInput(iVar1);
  UpdateCarSegment();
  if (g_RaceComplete != 0) {
    UpdateCarHUD(iVar1);
    UpdateCarParticles(iVar1);
    UpdateCarReplay(iVar1);
  }
  UpdateTrackLOD(g_MenuAnimPtr + 0x408);
  RenderPlayerCar(g_PlayerCarPtr,g_MenuAnimPtr + 8);
  if (g_RaceComplete != 0) {
    RenderTrackBackground();
  }
  FUN_80055d3c(g_MenuAnimPtr + 4);
  UpdateCarSound();
  local_28 = 0xff60;
  local_26 = 0xffff;
  local_24 = 0x140;
  local_22 = 2;
  DrawSpriteScaled(&DAT_800add4c,&local_28,g_OTBasePtr + 0xc);
  return;
}


