/* Function: PADSEQD_OBJ_108 */
/* Address: 800ac1c4 */

undefined4 PADSEQD_OBJ_108(void)

{
  undefined4 uVar1;
  int unaff_s0;
  
  if (*(code **)(unaff_s0 + 0x14) != (code *)0x0) {
    (**(code **)(unaff_s0 + 0x14))();
    uVar1 = PADSEQD_OBJ_134();
    return uVar1;
  }
  _padSendAtLoadInfo();
  return 0;
}


