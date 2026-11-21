/* Function: SsUtSetReverbType */
/* Address: 80093a4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short SsUtSetReverbType(short param_1)

{
  bool bVar1;
  short sVar2;
  
  bVar1 = (int)((uint)(ushort)param_1 << 0x10) < 0;
  if (bVar1) {
    param_1 = -param_1;
  }
  if ((ushort)param_1 < 10) {
    DAT_800ceeb0 = 1;
    if (bVar1) {
      sVar2 = UT_REV_OBJ_54();
      return sVar2;
    }
    _DAT_800ceeb4 = (int)param_1;
    if (param_1 == 0) {
      SpuSetReverb(0);
    }
    SpuSetReverbModeParam((SpuReverbAttr *)&DAT_800ceeb0);
    sVar2 = UT_REV_OBJ_8C();
    return sVar2;
  }
  return -1;
}


