/* Function: StFreeRing */
/* Address: 800a88dc */

u_long StFreeRing(u_long *base)

{
  int iVar1;
  u_long uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar1 = ((int)base - (DAT_800d0fe0 + DAT_800d0fe4 * 0x20) >> 2) / 0x1f8;
  psVar5 = (short *)(DAT_800d0fe0 + iVar1 * 0x20);
  uVar2 = 1;
  if (*psVar5 == 4) {
    iVar3 = (int)psVar5[3];
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar6 + iVar1;
        iVar6 = iVar6 + 1;
        *(undefined2 *)(DAT_800d0fe0 + iVar4 * 0x20) = 0;
      } while (iVar6 < iVar3);
    }
    DAT_800d0fcc = iVar6 + iVar1;
    uVar2 = 0;
  }
  return uVar2;
}


