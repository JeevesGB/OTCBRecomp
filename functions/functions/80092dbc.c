/* Function: SsUtGetProgAtr */
/* Address: 80092dbc */

short SsUtGetProgAtr(short param_1,short param_2,ProgAtr *param_3)

{
  short sVar1;
  int iVar2;
  
  if ((&DAT_800cefd0)[param_1] != '\x01') {
    sVar1 = UT_GPA_OBJ_F0();
    return sVar1;
  }
  _SsVmVSetUp((int)param_1,(int)param_2);
  iVar2 = param_2 * 0x10;
  param_3->tones = *(uchar *)(iVar2 + DAT_800cef94);
  param_3->mvol = *(uchar *)(iVar2 + DAT_800cef94 + 1);
  param_3->prior = *(uchar *)(iVar2 + DAT_800cef94 + 2);
  param_3->mode = *(uchar *)(iVar2 + DAT_800cef94 + 3);
  param_3->mpan = *(uchar *)(iVar2 + DAT_800cef94 + 4);
  param_3->attr = *(short *)(iVar2 + DAT_800cef94 + 6);
  return 0;
}


