/* Function: UpdateCarAIControl */
/* Address: 8004badc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateCarAIControl(int param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short local_30;
  short local_2e;
  short local_2c;
  short local_28;
  short local_26;
  short local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar11 = ((int)*(short *)(param_1 + 0x5c) * (int)*(short *)(param_1 + 0x5c)) / 9;
  *(int *)(param_1 + 0x26c) = *(short *)(param_1 + 0x264) * iVar11;
  *(int *)(param_1 + 0x270) = *(short *)(param_1 + 0x266) * iVar11;
  local_30 = -(short)(*(int *)(param_1 + 0x188) >> 0xc);
  *(int *)(param_1 + 0x274) = *(short *)(param_1 + 0x268) * iVar11;
  local_2e = -(short)(*(int *)(param_1 + 0x18c) >> 0xc);
  local_2c = -(short)(*(int *)(param_1 + 400) >> 0xc);
  DAT_1f80006c = *(int *)(param_1 + 0x50);
  DAT_1f800070 = *(int *)(param_1 + 0x54);
  DAT_1f800074 = *(int *)(param_1 + 0x58);
  FUN_8005981c(&local_30,&DAT_1f80006c);
  iVar12 = 0;
  iVar7 = 0;
  iVar14 = (int)*(short *)(param_1 + 0x16c);
  iVar11 = param_1;
  do {
    iVar12 = iVar12 + 1;
    iVar7 = iVar7 + *(int *)(iVar11 + 0x33c);
    iVar11 = iVar11 + 4;
  } while (iVar12 < 4);
  DAT_1f800064 = iVar7 / iVar14;
  if (iVar14 == 0) {
    trap(0x1c00);
  }
  if ((iVar14 == -1) && (iVar7 == -0x80000000)) {
    trap(0x1800);
  }
  iVar7 = 0;
  iVar13 = 0;
  iVar12 = 0;
  iVar11 = param_1;
  do {
    piVar1 = (int *)(iVar11 + 0x300);
    piVar2 = (int *)(iVar11 + 0x304);
    iVar11 = iVar11 + 8;
    iVar7 = iVar7 + 1;
    iVar12 = iVar12 + *piVar1;
    iVar13 = iVar13 + *piVar2;
  } while (iVar7 < 4);
  DAT_1f800060 = iVar12 / iVar14;
  if (iVar14 == 0) {
    trap(0x1c00);
  }
  if ((iVar14 == -1) && (iVar12 == -0x80000000)) {
    trap(0x1800);
  }
  DAT_1f800068 = iVar13 / iVar14;
  if (iVar14 == 0) {
    trap(0x1c00);
  }
  if ((iVar14 == -1) && (iVar13 == -0x80000000)) {
    trap(0x1800);
  }
  _DAT_1f800058 = 0x125c;
  _DAT_1f80005c = 0;
  _DAT_1f800054 = 0;
  iVar11 = (int)*(short *)(param_1 + 0x16c);
  iVar7 = *(int *)(param_1 + 0x26c) / iVar11;
  if (iVar11 == 0) {
    trap(0x1c00);
  }
  if ((iVar11 == -1) && (*(int *)(param_1 + 0x26c) == -0x80000000)) {
    trap(0x1800);
  }
  uVar5 = ratan2(*(long *)(param_1 + 0x50),*(long *)(param_1 + 0x58));
  uVar5 = (&g_SinCosTable)[uVar5 & 0xfff];
  if ((int)uVar5 < 0) {
    uVar8 = (int)uVar5 >> 0x10 | 0xffff8000;
  }
  else {
    uVar8 = (int)uVar5 >> 0x10 & 0x7fff;
  }
  if ((uVar5 & 0x8000) == 0) {
    uVar5 = uVar5 & 0x7fff;
  }
  else {
    uVar5 = uVar5 | 0xffff8000;
  }
  _DAT_1f800054 = _DAT_1f800054 - ((int)(iVar7 * uVar5) >> 0xc);
  _DAT_1f80005c = _DAT_1f80005c - ((int)(iVar7 * uVar8) >> 0xc);
  FUN_8004ae88(param_1);
  local_28 = -(short)(*(int *)(param_1 + 0x188) >> 0xc);
  local_26 = -(short)(*(int *)(param_1 + 0x18c) >> 0xc);
  local_20 = _DAT_1f800054;
  local_1c = _DAT_1f800058;
  local_18 = _DAT_1f80005c;
  local_24 = -(short)(*(int *)(param_1 + 400) >> 0xc);
  FUN_8005981c(&local_28,&local_20);
  DAT_1f800060 = DAT_1f800060 + local_20;
  DAT_1f800064 = DAT_1f800064 + local_1c;
  DAT_1f800068 = DAT_1f800068 + local_18;
  DAT_1f80006c = DAT_1f80006c + DAT_1f800060;
  DAT_1f800070 = DAT_1f800070 + DAT_1f800064;
  DAT_1f800074 = DAT_1f800074 + DAT_1f800068;
  FUN_8004afcc(param_1);
  FUN_8004b1a4(param_1);
  if (*(short *)(param_1 + 0x176) != 0) {
    DAT_1f80006c = DAT_1f80006c - ((DAT_1f80006c >> 1) + (DAT_1f80006c >> 2));
    if (DAT_1f80006c < -8000) {
      DAT_1f80006c = -8000;
    }
    else if (8000 < DAT_1f80006c) {
      DAT_1f80006c = 8000;
    }
    DAT_1f800068 = DAT_1f800068 - ((DAT_1f800068 >> 1) + (DAT_1f800068 >> 2));
    if (DAT_1f800068 < -2000) {
      DAT_1f800068 = -2000;
    }
    else if (2000 < DAT_1f800068) {
      DAT_1f800068 = 2000;
    }
    DAT_1f800060 = DAT_1f800060 - ((DAT_1f800060 >> 1) + (DAT_1f800060 >> 2));
  }
  FUN_8004b598(param_1);
  FUN_8004b818(param_1);
  uVar3 = *(ushort *)(param_1 + 0x362);
  iVar11 = *(int *)(param_1 + 0x188) >> 5;
  if ((uVar3 & 0xc) == 0) {
    DAT_1f800078 = DAT_1f800078 - iVar11;
  }
  if ((uVar3 & 3) == 0) {
    DAT_1f800078 = DAT_1f800078 - iVar11;
  }
  if ((uVar3 & 10) == 0) {
    DAT_1f800088 = DAT_1f800088 + -10000;
  }
  if ((uVar3 & 5) == 0) {
    DAT_1f800088 = DAT_1f800088 + 10000;
  }
  local_30 = (short)(*(int *)(param_1 + 0x188) >> 0xc);
  local_2e = (short)(*(int *)(param_1 + 0x18c) >> 0xc);
  local_2c = (short)(*(int *)(param_1 + 400) >> 0xc);
  *(int *)(param_1 + 0x50) = DAT_1f80006c;
  *(int *)(param_1 + 0x54) = DAT_1f800070;
  *(int *)(param_1 + 0x58) = DAT_1f800074;
  FUN_8005951c(&local_30,param_1 + 0x50);
  if (*(short *)(param_1 + 0x178) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + DAT_1f800078;
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + DAT_1f800084;
  uVar5 = *(uint *)(param_1 + 0x188);
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + DAT_1f800088;
  if ((uVar5 & 0x800000) == 0) {
    uVar5 = uVar5 & 0x7fffff;
  }
  else {
    uVar5 = uVar5 | 0xff800000;
  }
  uVar8 = *(uint *)(param_1 + 0x18c);
  *(uint *)(param_1 + 0x188) = uVar5;
  if ((uVar8 & 0x800000) == 0) {
    uVar8 = uVar8 & 0x7fffff;
  }
  else {
    uVar8 = uVar8 | 0xff800000;
  }
  uVar5 = *(uint *)(param_1 + 400);
  *(uint *)(param_1 + 0x18c) = uVar8;
  if ((uVar5 & 0x800000) == 0) {
    uVar5 = uVar5 & 0x7fffff;
  }
  else {
    uVar5 = uVar5 | 0xff800000;
  }
  uVar9 = 0x181000;
  *(uint *)(param_1 + 400) = uVar5;
  if ((0x181000 < *(int *)(param_1 + 0x188)) ||
     (uVar9 = 0xffe7f000, *(int *)(param_1 + 0x188) < -0x181000)) {
    *(undefined4 *)(param_1 + 0x188) = uVar9;
  }
  uVar9 = 0x181000;
  if ((0x181000 < *(int *)(param_1 + 400)) ||
     (uVar9 = 0xffe7f000, *(int *)(param_1 + 400) < -0x181000)) {
    *(undefined4 *)(param_1 + 400) = uVar9;
  }
  FUN_8004b990(param_1);
  iVar7 = *(int *)(param_1 + 0x50);
  iVar12 = *(int *)(param_1 + 0x58);
  iVar11 = iVar7;
  if (iVar7 < 0) {
    iVar11 = -iVar7;
  }
  if (iVar11 < 0x1f) {
    iVar11 = iVar12;
    if (iVar12 < 0) {
      iVar11 = -iVar12;
    }
    if (iVar11 < 0x1f) {
      uVar4 = (undefined2)(*(int *)(param_1 + 0x18c) >> 0xc);
      goto LAB_8004c228;
    }
  }
  lVar6 = ratan2(iVar7,iVar12);
  uVar4 = (undefined2)lVar6;
LAB_8004c228:
  *(undefined2 *)(param_1 + 0x4e) = uVar4;
  iVar11 = FUN_800541e0(DAT_1f80006c,DAT_1f800070,DAT_1f800074);
  *(short *)(param_1 + 0x5e) = (short)(iVar11 >> 0xc);
  *(int *)(param_1 + 0x60) = iVar11;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x58);
  *(short *)(param_1 + 0x5c) = (short)(iVar11 / 0xed0);
  FUN_8004b310(param_1);
  uVar9 = FUN_8002e538(*(int *)(param_1 + 0x68) >> 0xc,*(int *)(param_1 + 0x70) >> 0xc,
                       (int)*(short *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 100) = uVar9;
  puVar10 = (undefined4 *)((DAT_800cca78 >> 4) * 4 + g_TrackSegmentData);
  *(undefined2 *)(param_1 + 0x15c) = (undefined2)DAT_800cca78;
  *(undefined4 *)(param_1 + 0x160) = *puVar10;
  *(int *)(param_1 + 0x194) = DAT_1f800078;
  *(int *)(param_1 + 0x198) = DAT_1f800084;
  *(int *)(param_1 + 0x19c) = DAT_1f800088;
  *(int *)(param_1 + 0x1b8) = DAT_1f80006c;
  *(int *)(param_1 + 0x1bc) = DAT_1f800070;
  *(int *)(param_1 + 0x1c0) = DAT_1f800074;
  FUN_8003b994(param_1);
  FUN_8003c790(param_1);
  return;
}


