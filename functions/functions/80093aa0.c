/* Function: UT_REV_OBJ_54 */
/* Address: 80093aa0 */

void UT_REV_OBJ_54(int param_1)

{
  int in_v0;
  short in_v1;
  
  *(int *)(param_1 + 4) = in_v0 >> 0x10;
  if (in_v1 == 0) {
    SpuSetReverb(0);
  }
  SpuSetReverbModeParam((SpuReverbAttr *)&DAT_800ceeb0);
  UT_REV_OBJ_8C();
  return;
}


