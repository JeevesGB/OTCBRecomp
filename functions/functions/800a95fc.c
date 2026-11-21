/* Function: PadChkMtap */
/* Address: 800a95fc */

uint PadChkMtap(int param_1)

{
  uint uVar1;
  
  if (DAT_800cba50 == 0) {
    uVar1 = PADENTRY_OBJ_A4();
    return uVar1;
  }
  return (uint)(*(char *)((param_1 >> 4) * 0xf0 + DAT_800cba38 + 0xe8) == '\b');
}


