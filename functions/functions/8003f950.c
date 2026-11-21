/* Function: LoadTrackGeometry */
/* Address: 8003f950 */

void LoadTrackGeometry(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  InitTrackGeometryBuffers();
  g_TrackGeomFlag1 = 0;
  g_TrackGeomFlag2 = 0;
  bVar1 = *param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (99 < uVar2) {
      return;
    }
    if (uVar2 < 5) break;
    bVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x8003f9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_TrackGeometryLoaderTable)[uVar2])();
  return;
}


