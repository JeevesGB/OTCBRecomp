/* Function: SsUtGetVVol */
/* Address: 80093dec */

short SsUtGetVVol(short param_1,short *param_2,short *param_3)

{
  short sVar1;
  short local_18;
  short local_16 [3];
  
  if (0x17 < (ushort)param_1) {
    sVar1 = UT_VVOL_OBJ_138();
    return sVar1;
  }
  SpuGetVoiceVolume((int)param_1,&local_18,local_16);
  *param_2 = local_18 / 0x81;
  *param_3 = local_16[0] / 0x81;
  return 0;
}


