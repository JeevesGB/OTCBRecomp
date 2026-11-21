/* Function: _SsVmKeyOff */
/* Address: 80095078 */

int _SsVmKeyOff(short param_1,short param_2,short param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if ('\0' < DAT_800cefa4) {
    do {
      uVar1 = uVar2 & 0xff;
      if (((((DAT_800c3b60 & 1 << (uVar2 & 0x1f)) == 0) &&
           ((int)(short)(&DAT_800ce78e)[uVar1 * 0x1c] == (param_4 & 0xffff))) &&
          ((&DAT_800ce794)[uVar1 * 0x1c] == param_3)) &&
         (((&DAT_800ce790)[uVar1 * 0x1c] == param_1 && ((&DAT_800ce798)[uVar1 * 0x1c] == param_2))))
      {
        if ((&DAT_800ce780)[uVar1 * 0x1c] == 0xff) {
          vmNoiseOff();
          iVar3 = VM_KEY_OBJ_638();
          return iVar3;
        }
        DAT_800cefc8 = (ushort)uVar2 & 0xff;
        _SsVmKeyOffNow(0);
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)(uVar2 & 0xff) < (int)DAT_800cefa4);
  }
  return iVar3;
}


