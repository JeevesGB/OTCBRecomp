/* Function: DecDCTvlcSize2 */
/* Address: 800a546c */

int DecDCTvlcSize2(int size)

{
  int iVar1;
  
  iVar1 = DAT_800ca6ec;
  if (0 < size + -1) {
    DAT_800ca6ec = size << 1;
    return iVar1;
  }
  DAT_800ca6ec = 0xffffff;
  return iVar1;
}


