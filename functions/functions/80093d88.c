/* Function: SsUtSetDetVVol */
/* Address: 80093d88 */

short SsUtSetDetVVol(short param_1,short param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (0x17 < (ushort)param_1) {
    sVar2 = UT_VVOL_OBJ_98();
    return sVar2;
  }
  iVar3 = (int)param_1;
  (&DAT_800cece2)[iVar3 * 8] = param_3;
  bVar1 = (&DAT_800cecc0)[iVar3];
  (&DAT_800cece0)[iVar3 * 8] = param_2;
  (&DAT_800cecc0)[iVar3] = bVar1 | 3;
  return 0;
}


