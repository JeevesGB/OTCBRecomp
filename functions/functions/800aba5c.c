/* Function: PadInitDirect */
/* Address: 800aba5c */

void PadInitDirect(uchar *param_1,uchar *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  
  DAT_800cba3c = 0;
  DAT_800cba50 = 0;
  _padInitDirSeq();
  puVar7 = &DAT_800d1118;
  DAT_800cba04 = PADPORTD_OBJ_1C8;
  DAT_800cba08 = PADPORTD_OBJ_160;
  DAT_800cba0c = PADPORTD_OBJ_2CC;
  DAT_800cba10 = PADPORTD_OBJ_388;
  DAT_800cba14 = PADPORTD_OBJ_604;
  DAT_800cba18 = PADPORTD_OBJ_63C;
  DAT_800cba38 = &DAT_800d1118;
  DAT_800cba28 = PADPORTD_OBJ_2BC;
  bzero(&DAT_800d1118,0x1e0);
  iVar6 = 0;
  puVar2 = &DAT_800d1158;
  puVar5 = &DAT_800d10d0;
  puVar4 = &DAT_800d1088;
  DAT_800d1148 = param_1;
  DAT_800d1238 = param_2;
  do {
    puVar3 = puVar7 + 0x5d;
    puVar2[-0xd] = 0;
    puVar2[-0xc] = puVar7;
    *(undefined1 *)puVar2[-4] = 0xff;
    iVar1 = 5;
    *(undefined1 *)(puVar2[-4] + 1) = 0;
    puVar2[-1] = puVar4;
    *puVar2 = puVar5;
    do {
      *puVar3 = 0xff;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar1);
    puVar5 = puVar5 + 0x23;
    puVar4 = puVar4 + 0x23;
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 0x3c;
    puVar7 = puVar7 + 0xf0;
  } while (iVar6 < 2);
  _padSetVsyncParam();
  DAT_800cba3c = 1;
  return;
}


