/* Function: _card_format */
/* Address: 800a4bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _card_format(long chan)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    bzero(&DAT_800d0f20,0x80);
    bzero((uchar *)(&DAT_800d0cf0 + iVar4 * 8),0x20);
    (&DAT_800d0cf0)[iVar4 * 8] = 0xa0;
    (&DAT_800d0cf4)[iVar4 * 8] = 0;
    *(undefined2 *)(&DAT_800d0cf8 + iVar4 * 8) = 0xffff;
    _DAT_800d0f20 = (&DAT_800d0cf0)[iVar4 * 8];
    DAT_800d0f24 = (&DAT_800d0cf4)[iVar4 * 8];
    DAT_800d0f28 = (&DAT_800d0cf8)[iVar4 * 8];
    DAT_800d0f2c = (&DAT_800d0cfc)[iVar4 * 8];
    DAT_800d0f30 = (&DAT_800d0d00)[iVar4 * 8];
    DAT_800d0f34 = (&DAT_800d0d04)[iVar4 * 8];
    DAT_800d0f38 = (&DAT_800d0d08)[iVar4 * 8];
    DAT_800d0f3c = (&DAT_800d0d0c)[iVar4 * 8];
    iVar4 = iVar4 + 1;
    iVar1 = FORMAT_OBJ_0(chan,iVar4,&DAT_800d0f20);
    if (iVar1 != 1) {
      return 0;
    }
  } while (iVar4 < 0xf);
  iVar4 = 0;
  puVar3 = &DAT_800d0ed0;
  do {
    *puVar3 = 0xffffffff;
    bzero(&DAT_800d0f20,0x80);
    _DAT_800d0f20 = *puVar3;
    iVar1 = FORMAT_OBJ_0(chan,iVar4 + 0x10,&DAT_800d0f20);
    iVar4 = iVar4 + 1;
    if (iVar1 != 1) {
      lVar2 = FORMAT_OBJ_320();
      return lVar2;
    }
    puVar3 = puVar3 + 1;
  } while (iVar4 < 0x14);
  bzero(&DAT_800d0f20,0x80);
  _DAT_800d0f20 = CONCAT22(DAT_800d0f20_2,0x434d);
  iVar4 = FORMAT_OBJ_0(chan,0);
  return (uint)(iVar4 == 1);
}


