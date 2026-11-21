/* Function: SSOPENQ_OBJ_68 */
/* Address: 8008f714 */

uint SSOPENQ_OBJ_68(undefined4 param_1,short param_2)

{
  short sVar1;
  uint uVar2;
  short in_t0;
  uint uVar3;
  
  uVar3 = (uint)in_t0;
  DAT_800cdee0 = DAT_800cdee0 | 1 << (uVar3 & 0x1f);
  sVar1 = _SsInitSoundSeq(uVar3,(int)param_2);
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
  uVar2 = 0xffffffff;
  if (sVar1 != -1) {
    uVar2 = uVar3;
  }
  return uVar2;
}


