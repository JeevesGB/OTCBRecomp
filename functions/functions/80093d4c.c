/* Function: SsUtGetDetVVol */
/* Address: 80093d4c */

short SsUtGetDetVVol(short param_1,short *param_2,short *param_3)

{
  short sVar1;
  
  if (0x17 < (ushort)param_1) {
    sVar1 = UT_VVOL_OBJ_2C();
    return sVar1;
  }
  SpuGetVoiceVolume((int)param_1,param_2,param_3);
  return 0;
}


