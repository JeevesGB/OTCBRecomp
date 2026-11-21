/* Function: UpdateCarRaceProgress */
/* Address: 8003ae84 */

void UpdateCarRaceProgress(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = g_CarPhysicsParams;
  uVar3 = *(uint *)(g_CarTrackSegment * 4 + g_TrackSegmentData);
  *(undefined2 *)(g_CarPhysicsParams + 0x58) =
       *(undefined2 *)(&g_TrackAngleTable + ((uVar3 & 0x780) >> 6));
  *(short *)(iVar2 + 0x5a) = -*(short *)(&g_TrackAngleTable + ((uVar3 & 0x7800) >> 10));
  *(undefined2 *)(iVar2 + 0x5c) = *(undefined2 *)(&g_TrackSlopeTable + (uVar3 >> 0xe & 0x1e));
  sVar1 = *(short *)(&g_TrackSlopeTable + (uVar3 >> 0x12 & 0x1e));
  *(ushort *)(iVar2 + 0x60) = (byte)(uVar3 >> 0x18) & 7;
  *(short *)(iVar2 + 0x5e) = -sVar1;
  return;
}


