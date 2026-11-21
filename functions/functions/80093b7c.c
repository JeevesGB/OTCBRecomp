/* Function: SsUtSetVagAtr */
/* Address: 80093b7c */

short SsUtSetVagAtr(short param_1,short param_2,short param_3,VagAtr *param_4)

{
  short sVar1;
  int iVar2;
  
  if ((&DAT_800cefd0)[param_1] != '\x01') {
    sVar1 = UT_SVA_OBJ_1B0();
    return sVar1;
  }
  _SsVmVSetUp((int)param_1,(int)param_2);
  iVar2 = (int)(((uint)(ushort)param_3 + DAT_800cefb7 * 0x10) * 0x10000) >> 0xb;
  *(uchar *)(iVar2 + DAT_800cefa0) = param_4->prior;
  *(uchar *)(iVar2 + DAT_800cefa0 + 1) = param_4->mode;
  *(uchar *)(iVar2 + DAT_800cefa0 + 2) = param_4->vol;
  *(uchar *)(iVar2 + DAT_800cefa0 + 3) = param_4->pan;
  *(uchar *)(iVar2 + DAT_800cefa0 + 4) = param_4->center;
  *(uchar *)(iVar2 + DAT_800cefa0 + 5) = param_4->shift;
  *(uchar *)(iVar2 + DAT_800cefa0 + 7) = param_4->max;
  *(uchar *)(iVar2 + DAT_800cefa0 + 6) = param_4->min;
  *(uchar *)(iVar2 + DAT_800cefa0 + 8) = param_4->vibW;
  *(uchar *)(iVar2 + DAT_800cefa0 + 9) = param_4->vibT;
  *(uchar *)(iVar2 + DAT_800cefa0 + 10) = param_4->porW;
  *(uchar *)(iVar2 + DAT_800cefa0 + 0xb) = param_4->porT;
  *(uchar *)(iVar2 + DAT_800cefa0 + 0xc) = param_4->pbmin;
  *(uchar *)(iVar2 + DAT_800cefa0 + 0xd) = param_4->pbmax;
  iVar2 = iVar2 + DAT_800cefa0;
  *(ushort *)(iVar2 + 0x10) = param_4->adsr1;
  *(ushort *)(iVar2 + 0x12) = param_4->adsr2;
  *(short *)(iVar2 + 0x14) = param_4->prog;
  *(short *)(iVar2 + 0x16) = param_4->vag;
  return 0;
}


