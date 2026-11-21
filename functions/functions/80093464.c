/* Function: SsUtKeyOff */
/* Address: 80093464 */

short SsUtKeyOff(short param_1,short param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  int iVar2;
  
  if (DAT_800cdedc != 1) {
    DAT_800cdedc = 1;
    if ((ushort)param_1 < 0x18) {
      iVar2 = (int)param_1;
      if (((((&DAT_800ce798)[iVar2 * 0x1c] == param_2) && ((&DAT_800ce794)[iVar2 * 0x1c] == param_3)
           ) && ((&DAT_800ce796)[iVar2 * 0x1c] == param_4)) &&
         (((&DAT_800ce78e)[iVar2 * 0x1c] == param_5 && ((&DAT_800ce780)[iVar2 * 0x1c] == 0xff)))) {
        vmNoiseOff(param_1 & 0xff);
        sVar1 = UT_KEY_OBJ_444();
        return sVar1;
      }
      DAT_800cefc8 = param_1;
      _SsVmKeyOffNow(0);
      (&DAT_800ce7aa)[param_1 * 0x1c] = 0;
      (&DAT_800ce79e)[param_1 * 0x1c] = 0;
      DAT_800cdedc = 0;
      sVar1 = UT_KEY_OBJ_488();
      return sVar1;
    }
    DAT_800cdedc = 0;
  }
  return -1;
}


