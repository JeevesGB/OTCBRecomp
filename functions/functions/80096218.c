/* Function: _SsVmPitchBend */
/* Address: 80096218 */

int _SsVmPitchBend(short param_1,short param_2,short param_3,undefined2 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _SsVmVSetUp((int)param_2,(int)param_3);
  iVar4 = 0;
  iVar3 = 0;
  DAT_800cefc4 = param_1;
  if ('\0' < DAT_800cefa4) {
    iVar2 = 0;
    do {
      sVar1 = _SsVmPBVoice(iVar2 >> 0x10,(int)param_1,(int)param_2,(int)param_3,param_4);
      iVar3 = iVar3 + sVar1;
      iVar4 = iVar4 + 1;
      iVar2 = iVar4 * 0x10000;
    } while (iVar4 * 0x10000 >> 0x10 < (int)DAT_800cefa4);
  }
  return iVar3;
}


