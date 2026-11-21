/* Function: FUN_80053668 */
/* Address: 80053668 */

uint FUN_80053668(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  undefined2 *puVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar2 = DAT_800cd168;
  param_1 = param_1 * 0xc;
  puVar8 = (undefined2 *)(&DAT_800cd170 + DAT_800cd168 * 0x38);
  psVar5 = (short *)(&DAT_800b1168 + (uint)(byte)(&DAT_800b1048)[param_1] * 0x38);
  psVar9 = (short *)(&DAT_800b1168 + (uint)(byte)(&DAT_800b1049)[param_1] * 0x38);
  psVar7 = (short *)(&DAT_800b1168 + (uint)(byte)(&DAT_800b104a)[param_1] * 0x38);
  bVar1 = (&DAT_800b104b)[param_1];
  iVar4 = (int)*(short *)(&DAT_800b104c + param_1);
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (param_2 << 0xd) / iVar4;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (param_2 << 0xd == -0x80000000)) {
      trap(0x1800);
    }
  }
  iVar4 = (int)*(short *)(&DAT_800b104e + param_1);
  if (iVar4 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (param_3 << 0xd) / iVar4;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (param_3 << 0xd == -0x80000000)) {
      trap(0x1800);
    }
  }
  iVar4 = (int)*(short *)(&DAT_800b1050 + param_1);
  if (iVar4 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (param_4 << 0xd) / iVar4;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (param_4 << 0xd == -0x80000000)) {
      trap(0x1800);
    }
  }
  iVar4 = 0;
  DAT_800cd168 = DAT_800cd168 + 1;
  do {
    pbVar3 = &DAT_800b2cc0 + iVar4 + (uint)bVar1 * 0x54;
    iVar6 = (int)*psVar5 +
            (((int)((uint)*pbVar3 * iVar10 + (uint)pbVar3[0x1c] * iVar11 +
                   (uint)pbVar3[0x38] * iVar12) / 100) * ((int)*psVar9 - (int)*psVar5) >> 0xd);
    if (iVar6 < *psVar7) {
      iVar6 = (int)*psVar7;
    }
    *puVar8 = (short)iVar6;
    puVar8 = puVar8 + 1;
    psVar7 = psVar7 + 1;
    psVar9 = psVar9 + 1;
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 < 0x1c);
  return uVar2 | 0x4000;
}


