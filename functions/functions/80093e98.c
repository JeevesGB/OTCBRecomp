/* Function: SsUtSetVVol */
/* Address: 80093e98 */

short SsUtSetVVol(short param_1,short param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (0x17 < (ushort)param_1) {
    sVar2 = UT_VVOL_OBJ_1C8();
    return sVar2;
  }
  iVar3 = (int)param_1;
  (&DAT_800cece2)[iVar3 * 8] = param_3 * 0x81;
  bVar1 = (&DAT_800cecc0)[iVar3];
  (&DAT_800cece0)[iVar3 * 8] = param_2 * 0x81;
  (&DAT_800cecc0)[iVar3] = bVar1 | 3;
  return 0;
}


