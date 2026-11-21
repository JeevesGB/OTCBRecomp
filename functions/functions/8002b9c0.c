/* Function: UpdateAudioParams */
/* Address: 8002b9c0 */

void UpdateAudioParams(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  if (-1 < (int)((uint)param_1 << 0x10)) {
    *(ushort *)(g_DisplayParams + 2) = param_1;
  }
  if (-1 < (int)((uint)param_2 << 0x10)) {
    *(ushort *)(g_DisplayParams + 6) = param_2;
  }
  if (-1 < (int)((uint)param_3 << 0x10)) {
    *(ushort *)(g_DisplayParams + 10) = param_3;
  }
  if (-1 < (int)((uint)param_4 << 0x10)) {
    *(ushort *)(g_DisplayParams + 0xe) = param_4;
  }
  if (-1 < (int)((uint)param_5 << 0x10)) {
    *(ushort *)(g_DisplayParams + 0x12) = param_5;
  }
  return;
}


