/* Function: RaceRenderLoop */
/* Address: 8002c798 */

/* WARNING: This function may have set the stack pointer */

void RaceRenderLoop(void)

{
  undefined1 auStack_28 [16];
  
  DAT_1f8003fc = auStack_28;
  g_RacePad2 = g_PadButtons2;
  g_RacePad1 = g_PadButtons;
  g_RacePad3 = g_PadAnalog1;
  if (g_RaceMode == 4) {
    g_RacePad1 = g_PadButtons | g_PadButtons2_Alt;
    g_RacePad3 = g_PadAnalog1 | g_PadAnalog2;
    g_RacePad2 = g_PadButtons2 | g_PadButtons3;
  }
  while (g_PhysicsFlag2 == 0) {
    g_SpriteTableDirty = g_OTBasePtr + 8;
    UpdateCarPosition();
    UpdateTrackSegment();
    UpdateCarAnimation();
    UpdateTrackObjects();
    UpdateTrackEffects();
    UpdateCameraPosition();
    RenderHUD();
    RenderParticles();
    RenderSparks();
    RenderTrack();
    ProcessRenderQueue();
    SortCarsByDepth();
    UpdateCarShadows();
    UpdateCarPhysics2();
    VsyncWait();
    SsSeqCalledTbyT();
    if (g_RaceMode == 4) {
      g_RacePad1 = g_PadButtons | g_PadButtons2_Alt;
      g_RacePad2 = g_PadButtons2 | g_PadButtons3;
      g_RacePad3 = g_PadAnalog1 | g_PadAnalog2;
    }
    else {
      g_RacePad1 = g_PadButtons;
      g_RacePad2 = g_PadButtons2;
      g_RacePad3 = g_PadAnalog1;
    }
    UpdateRaceState();
    g_PhysicsFlag = g_PhysicsFlag + 1;
  }
  return;
}


