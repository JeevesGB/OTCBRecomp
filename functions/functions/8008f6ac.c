/* Function: SsSeqOpen */
/* Address: 8008f6ac */

short SsSeqOpen(ulong *param_1,short param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined2 in_register_00000016;
  
  if (DAT_800cdee0 == 0xffffffff) {
    printf("Can\'t Open Sequence data any more\n\n");
    sVar1 = SSOPENQ_OBJ_27C();
    return sVar1;
  }
  uVar3 = 0;
  do {
    if ((DAT_800cdee0 & 1 << (uVar3 & 0x1f)) == 0) {
      sVar1 = SSOPENQ_OBJ_68(DAT_800cdee0,CONCAT22(in_register_00000016,param_2),param_1);
      return sVar1;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x20);
  DAT_800cdee0 = DAT_800cdee0 | 1;
  sVar2 = _SsInitSoundSeq(0,(int)param_2);
  DAT_800cde48 = _SsNoteOn;
  DAT_800cde4c = _SsSetProgramChange;
  DAT_800cde54 = _SsGetMetaEvent;
  DAT_800cde50 = _SsSetPitchBend;
  DAT_800cde58 = _SsSetControlChange;
  DAT_800cde5c = _SsContBankChange;
  DAT_800cde64 = _SsContMainVol;
  DAT_800cde68 = _SsContPanpot;
  DAT_800cde6c = _SsContExpression;
  DAT_800cde70 = _SsContDamper;
  DAT_800cde74 = _SsContNrpn1;
  DAT_800cde78 = _SsContNrpn2;
  DAT_800cde7c = _SsContRpn1;
  DAT_800cde80 = _SsContRpn2;
  DAT_800cde84 = _SsContExternal;
  DAT_800cde88 = _SsContResetAll;
  DAT_800cde60 = _SsContDataEntry;
  DAT_800cde8c = _SsSetNrpnVabAttr0;
  DAT_800cde90 = _SsSetNrpnVabAttr1;
  DAT_800cde94 = _SsSetNrpnVabAttr2;
  DAT_800cde98 = _SsSetNrpnVabAttr3;
  DAT_800cde9c = _SsSetNrpnVabAttr4;
  DAT_800cdea0 = _SsSetNrpnVabAttr5;
  DAT_800cdea4 = _SsSetNrpnVabAttr6;
  DAT_800cdea8 = _SsSetNrpnVabAttr7;
  DAT_800cdeac = _SsSetNrpnVabAttr8;
  DAT_800cdeb0 = _SsSetNrpnVabAttr9;
  DAT_800cdeb4 = _SsSetNrpnVabAttr10;
  DAT_800cdeb8 = _SsSetNrpnVabAttr11;
  DAT_800cdebc = _SsSetNrpnVabAttr12;
  DAT_800cdec0 = _SsSetNrpnVabAttr13;
  DAT_800cdec4 = _SsSetNrpnVabAttr14;
  DAT_800cdec8 = &LAB_8009101c;
  DAT_800cdecc = _SsSetNrpnVabAttr16;
  DAT_800cded0 = &LAB_8009107c;
  DAT_800cded4 = &LAB_800910ac;
  DAT_800cded8 = &LAB_800910dc;
  sVar1 = -1;
  if (sVar2 != -1) {
    sVar1 = 0;
  }
  return sVar1;
}


