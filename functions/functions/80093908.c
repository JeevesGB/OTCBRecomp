/* Function: SsUtKeyOffV */
/* Address: 80093908 */

short SsUtKeyOffV(short voice)

{
  short sVar1;
  
  if (DAT_800cdedc == 1) {
    sVar1 = UT_KEYV_OBJ_3C0();
    return sVar1;
  }
  DAT_800cdedc = 1;
  if (0x17 < (ushort)voice) {
    DAT_800cdedc = 0;
    sVar1 = UT_KEYV_OBJ_3C0();
    return sVar1;
  }
  DAT_800cefc8 = voice;
  _SsVmKeyOffNow(0);
  DAT_800cdedc = 0;
  return 0;
}


