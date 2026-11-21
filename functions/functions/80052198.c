/* Function: FUN_80052198 */
/* Address: 80052198 */

void FUN_80052198(void)

{
  int iVar1;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  FUN_8005622c();
  iVar1 = g_PlayerCarObject;
  if ((*(uint *)(g_PlayerCarObject + 0x40) & 1) != 0) {
    iVar1 = 0;
  }
  FUN_80051fdc();
  FUN_8002d3d8();
  UpdateCarInput(iVar1);
  UpdateCarSegment();
  UpdateCarHUD(0);
  UpdateCarParticles(0);
  RenderPlayerCar(g_PlayerCarPtr,g_MenuAnimPtr + 8);
  UpdateTrackLOD(g_MenuAnimPtr + 0x400);
  FUN_80055d3c(g_MenuAnimPtr + 4);
  local_1e = 0xff9d;
  local_20 = 0xffbe;
  local_1c = 0x7a;
  local_1a = 1;
  DrawSpriteScaled(&DAT_800af18c,&local_20,g_OTBasePtr + 8);
  local_1e = 0xffbc;
  DrawSpriteScaled(&DAT_800af18c,&local_20,g_OTBasePtr + 8);
  local_1e = 0xff9e;
  local_20 = 0xffbe;
  local_1c = 1;
  local_1a = 0x1e;
  DrawSpriteScaled(&DAT_800af18c,&local_20,g_OTBasePtr + 8);
  local_20 = 0x37;
  DrawSpriteScaled(&DAT_800af18c,&local_20,g_OTBasePtr + 8);
  return;
}


