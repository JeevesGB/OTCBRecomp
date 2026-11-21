/* Function: VS_VH_OBJ_16C */
/* Address: 80097598 */

void VS_VH_OBJ_16C(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  ushort unaff_s2;
  uint *unaff_s3;
  code *unaff_s6;
  
  if (0xf < param_3) {
    FUN_8009a1fc(0);
    VS_VH_OBJ_434();
    return;
  }
  (&DAT_800cef08)[param_3] = unaff_s3;
  DAT_800cefa8 = 0;
  puVar6 = unaff_s3 + 8;
  if (*unaff_s3 >> 8 != 0x564142) {
    (&DAT_800cefd0)[param_3] = 0;
    VS_VH_OBJ_358(0);
    return;
  }
  DAT_800cef92 = 0x40;
  if (((*unaff_s3 & 0xff) == 0x70) && (DAT_800cef92 = 0x40, 4 < (int)unaff_s3[1])) {
    DAT_800cef92 = 0x80;
  }
  uVar3 = (uint)DAT_800cef92;
  if (uVar3 < *(ushort *)((int)unaff_s3 + 0x12)) {
    (&DAT_800cefd0)[(int)((uint)unaff_s2 << 0x10) >> 0x10] = 0;
    VS_VH_OBJ_358(0);
    return;
  }
  *(uint **)(&DAT_800ceec8 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = puVar6;
  iVar4 = 0;
  uVar8 = 0;
  puVar7 = puVar6;
  if (uVar3 != 0) {
    do {
      puVar7[2] = uVar8;
      if ((char)*puVar7 != '\0') {
        uVar8 = uVar8 + 1;
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 4;
    } while (iVar4 < (int)uVar3);
  }
  iVar9 = 0;
  iVar4 = 0;
  piVar5 = (int *)&stack0x00000010;
  *(uint **)(&DAT_800cef50 + ((int)((uint)unaff_s2 << 0x10) >> 0xe)) = puVar6 + uVar3 * 4;
  bVar1 = *(byte *)((int)unaff_s3 + 0x16);
  puVar7 = puVar6 + uVar3 * 4 + (uint)*(ushort *)((int)unaff_s3 + 0x12) * 0x80;
  do {
    if (iVar4 <= (int)(uint)bVar1) {
      iVar2 = (uint)(ushort)*puVar7 << 2;
      if (4 < (int)unaff_s3[1]) {
        iVar2 = (uint)(ushort)*puVar7 << 3;
      }
      *piVar5 = iVar2;
      iVar9 = iVar9 + *piVar5;
    }
    puVar7 = (uint *)((int)puVar7 + 2);
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0x100);
  uVar3 = iVar9 + 0x3fU & 0xffffffc0;
  iVar4 = (*unaff_s6)(uVar3);
  if (iVar4 != -1) {
    if (0x80000 < iVar4 + uVar3) {
      (&DAT_800cefd0)[(short)unaff_s2] = 0;
      FUN_8009a1fc(0);
      DAT_800cf028 = DAT_800cf028 + -1;
      VS_VH_OBJ_434();
      return;
    }
    *(int *)(&DAT_800cf030 + (short)unaff_s2 * 4) = iVar4;
    iVar9 = 0;
    uVar3 = 0;
    piVar5 = (int *)&stack0x00000010;
    do {
      iVar9 = iVar9 + *piVar5;
      if ((uVar3 & 1) == 0) {
        *(short *)(puVar6 + ((int)uVar3 / 2) * 4 + 3) = (short)((uint)(iVar4 + iVar9) >> 3);
      }
      else {
        *(short *)((int)puVar6 + ((int)uVar3 / 2) * 0x10 + 0xe) =
             (short)((uint)(iVar4 + iVar9) >> 3);
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
    } while ((int)uVar3 <= (int)(uint)bVar1);
    *(int *)(&DAT_800cefe8 + (short)unaff_s2 * 4) = iVar9;
    (&DAT_800cefd0)[(short)unaff_s2] = 2;
  }
  return;
}


