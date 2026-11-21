/* Function: _SsInit */
/* Address: 8008f54c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _SsInit(void)

{
  word wVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  word *pwVar5;
  word *pwVar6;
  int iVar7;
  
  pwVar6 = &SPU_MAIN_VOL_L;
  iVar3 = 0;
  pwVar5 = &DAT_800c3b6c;
  do {
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
    iVar3 = iVar3 + 1;
    *pwVar6 = wVar1;
    pwVar6 = pwVar6 + 1;
  } while (iVar3 < 0x10);
  _SsVmInit(0x18);
  iVar7 = 0;
  iVar3 = -0x7ff32098;
  do {
    iVar4 = 0xf;
    puVar2 = (undefined4 *)(iVar3 + 0x3c);
    do {
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar4);
    iVar7 = iVar7 + 1;
    iVar3 = iVar3 + 0x40;
  } while (iVar7 < 0x20);
  DAT_800cdee4 = 0x3c;
  DAT_800cdee0 = 0;
  DAT_800cdedc = 0;
  return;
}


