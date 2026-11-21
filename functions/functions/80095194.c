/* Function: VM_KEY_OBJ_638 */
/* Address: 80095194 */

int VM_KEY_OBJ_638(void)

{
  int iVar1;
  uint uVar2;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  do {
    if ((int)DAT_800cefa4 <= (int)(unaff_s0 & 0xff)) {
      return unaff_s1;
    }
    uVar2 = unaff_s0 & 0xff;
    if (((((DAT_800c3b60 & unaff_s6 << (unaff_s0 & 0x1f)) == 0) &&
         ((short)(&DAT_800ce78e)[uVar2 * 0x1c] == unaff_s5)) &&
        ((short)(&DAT_800ce794)[uVar2 * 0x1c] == unaff_s4)) &&
       (((short)(&DAT_800ce790)[uVar2 * 0x1c] == unaff_s3 &&
        ((short)(&DAT_800ce798)[uVar2 * 0x1c] == unaff_s2)))) {
      if ((&DAT_800ce780)[uVar2 * 0x1c] == 0xff) {
        vmNoiseOff();
        iVar1 = VM_KEY_OBJ_638();
        return iVar1;
      }
      DAT_800cefc8 = (ushort)unaff_s0 & 0xff;
      _SsVmKeyOffNow(0);
      unaff_s1 = unaff_s1 + 1;
    }
    unaff_s0 = unaff_s0 + 1;
  } while( true );
}


