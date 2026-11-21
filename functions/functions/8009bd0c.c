/* Function: SquareRoot0 */
/* Address: 8009bd0c */

/* WARNING: Instruction at (ram,0x8009bd54) overlaps instruction at (ram,0x8009bd50)
    */

long SquareRoot0(long a)

{
  uint uVar1;
  int iVar2;
  
  gte_ldLZCS(a);
  uVar1 = gte_stLZCR();
  if (uVar1 != 0x20) {
    uVar1 = uVar1 & 0xfffffffe;
    if ((int)(uVar1 - 0x18) < 0) {
      iVar2 = a >> (0x18 - uVar1 & 0x1f);
    }
    else {
      iVar2 = a << (uVar1 - 0x18 & 0x1f);
    }
    return (uint)((int)*(short *)(&DAT_800c577c + (iVar2 + -0x40) * 2) <<
                 ((int)(0x1f - uVar1) >> 1 & 0x1fU)) >> 0xc;
  }
  return 0;
}


