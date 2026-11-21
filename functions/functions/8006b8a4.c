/* Function: GetCarTuningData */
/* Address: 8006b8a4 */

undefined * GetCarTuningData(void)

{
  uint uVar1;
  
  uVar1 = GetReplayCarIndex();
  return (&PTR_DAT_800c38a0)[uVar1 & 0xff];
}


