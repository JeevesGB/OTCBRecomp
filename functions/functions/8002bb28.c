/* Function: SetAudioVolumes */
/* Address: 8002bb28 */

void SetAudioVolumes(short param_1,short param_2,short param_3)

{
  if (-1 < param_1) {
    SsSetMVol(param_1,param_1);
  }
  if (-1 < param_2) {
    SsSetRVol(param_2,param_2);
  }
  if (-1 < param_3) {
    SsSetSerialVol('\0',param_3,param_3);
  }
  return;
}


