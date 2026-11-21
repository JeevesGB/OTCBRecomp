/* Function: FUN_8004ced0 */
/* Address: 8004ced0 */

void FUN_8004ced0(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (param_1 * 0x10 + DAT_800ccf0c) * 4;
  sVar1 = *(short *)(&DAT_800aee34 + *(short *)(&DAT_800aec64 + iVar6) * 4);
  iVar7 = (int)*(short *)(&DAT_800aee36 + *(short *)(&DAT_800aec64 + iVar6) * 4) << 0xc;
  DAT_800ccf08 = 0x15;
  iVar3 = DAT_800ccf0c;
  if (sVar1 == 1) {
    DAT_800ccf24 = DAT_800ccf24 + -7000;
    bVar2 = iVar7 < DAT_800ccf24;
LAB_8004cf78:
    iVar4 = DAT_800ccf20;
    iVar5 = iVar7;
    if (bVar2) goto LAB_8004d02c;
  }
  else {
    if (sVar1 < 2) {
      if (sVar1 != 0) goto LAB_8004d02c;
      DAT_800ccf24 = DAT_800ccf24 + 7000;
      bVar2 = DAT_800ccf24 < iVar7;
      goto LAB_8004cf78;
    }
    iVar4 = iVar7;
    iVar5 = DAT_800ccf24;
    if (sVar1 == 2) {
      DAT_800ccf20 = DAT_800ccf20 + -7000;
      if (iVar7 < DAT_800ccf20) goto LAB_8004d02c;
    }
    else if ((sVar1 != 3) || (DAT_800ccf20 = DAT_800ccf20 + 7000, DAT_800ccf20 < iVar7))
    goto LAB_8004d02c;
  }
  DAT_800ccf24 = iVar5;
  DAT_800ccf20 = iVar4;
  iVar3 = (int)*(short *)(&DAT_800aec66 + iVar6);
  if (*(short *)(&DAT_800aec66 + iVar6) == -1) {
    DAT_800ccf08 = (int)*(short *)(&DAT_800aee24 + param_1 * 2);
    iVar3 = DAT_800ccf0c;
  }
LAB_8004d02c:
  DAT_800ccf0c = iVar3;
  DAT_800ccf18 = DAT_800ccf10 + (DAT_800ccf20 >> 0xc);
  DAT_800ccf1c = DAT_800ccf14 + (DAT_800ccf24 >> 0xc);
  return;
}


