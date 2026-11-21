/* Function: _SpuInit */
/* Address: 8009799c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _SpuInit(void)

{
  undefined2 *puVar1;
  int iVar2;
  int in_a0;
  
  ResetCallback();
  _spu_init();
  if (in_a0 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_800c3d3a;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  SpuStart();
  DAT_800c3ce4 = 0;
  DAT_800c3ce8 = 0;
  DAT_800c3cf4 = 0;
  DAT_800c3cf8 = 0;
  DAT_800c3cfa = 0;
  DAT_800c3cfc = 0;
  DAT_800c3d00 = 0;
  DAT_800c3cec = DAT_800c42e0;
  _spu_FsetRXX(0xd1,DAT_800c42e0,0);
  DAT_800c3db0 = 0;
  DAT_800c3db4 = 0;
  DAT_800c3db8 = 0;
  DAT_800c3ce0 = 0;
  DAT_800c3d6c = 0;
  DAT_800c3cdc = 0;
  DAT_800c3d08 = 0;
  DAT_800c3d04 = 0;
  DAT_800c3d3c = 0;
  return;
}


