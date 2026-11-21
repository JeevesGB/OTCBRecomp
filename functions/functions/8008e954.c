/* Function: CRES_OBJ_1B8 */
/* Address: 8008e954 */

void CRES_OBJ_1B8(void)

{
  int in_v0;
  int unaff_s2;
  short unaff_s4;
  ushort unaff_s5;
  
  *(uint *)(in_v0 + 0x98) = *(uint *)(in_v0 + 0x98) & 0xffffffef;
  _SsVmGetSeqVol((int)(short)(unaff_s5 | unaff_s4 << 8),unaff_s2 + 0x5c,unaff_s2 + 0x5e);
  return;
}


