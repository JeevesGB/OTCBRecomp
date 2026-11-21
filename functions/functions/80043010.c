/* Function: FUN_80043010 */
/* Address: 80043010 */

void FUN_80043010(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  
  iVar1 = (int)((uint)DAT_800cce22 << 0x10) >> 0x15;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (0x46 < iVar1) {
    iVar1 = 0x46;
  }
  iVar3 = *(short *)(param_1 + 0x15c) + 1;
  if (g_TrackLength <= iVar3) {
    iVar3 = iVar3 - g_TrackLength;
  }
  iVar1 = iVar1 + *(short *)(param_1 + 0x15c);
  DAT_800cce24 = (short)iVar3;
  if (g_TrackLength <= iVar1) {
    iVar1 = iVar1 - g_TrackLength;
  }
  DAT_800cce26 = (short)iVar1;
  iVar1 = FUN_8003c7dc((int)DAT_800cce24);
  DAT_800cce30 = (undefined2)(iVar1 >> 0xc);
  DAT_800cce2c = FUN_8003bc18((int)DAT_800cce24,2);
  iVar1 = FUN_8002fa2c((int)DAT_800cce26,2);
  DAT_800cce2e = (undefined2)(iVar1 >> 0xc);
  FUN_800429a4(param_1);
  DAT_800cce40 = DAT_800cce38 * 0x5dc;
  if (DAT_800cce40 < 0x14a001) {
    if (DAT_800cce40 < -0x14a000) {
      DAT_800cce40 = -0x14a000;
    }
  }
  else {
    DAT_800cce40 = 0x14a000;
  }
  iVar1 = DAT_800cce34;
  if (DAT_800cce34 < 0) {
    iVar1 = -DAT_800cce34;
  }
  if (iVar1 < 0x12d) {
    if (iVar1 < 0xc9) {
      iVar3 = DAT_800cce34;
      if (100 < iVar1) {
        iVar3 = DAT_800cce34 >> 1;
        goto LAB_80043170;
      }
    }
    else {
      iVar3 = DAT_800cce34 << 1;
    }
  }
  else {
    iVar3 = DAT_800cce34 << 1;
LAB_80043170:
    iVar3 = DAT_800cce34 + iVar3;
  }
  iVar1 = 3000;
  if (DAT_800cce1a != 0) {
    iVar1 = 4000;
  }
  DAT_800cce44 = iVar3 * iVar1;
  if ((int)DAT_800cce44 < 0x1b8001) {
    if (-0x1b8001 < (int)DAT_800cce44) goto LAB_800431cc;
    uVar5 = 0xffe40000;
  }
  else {
    uVar5 = 0x1b0000;
  }
  DAT_800cce44 = uVar5 | 0x8000;
LAB_800431cc:
  DAT_800cce48 = DAT_800cce3c * 7000;
  if (DAT_800cce48 < 0x14a001) {
    if (DAT_800cce48 < -0x14a000) {
      DAT_800cce48 = -0x14a000;
    }
  }
  else {
    DAT_800cce48 = 0x14a000;
  }
  uVar5 = DAT_800cce40 + DAT_800cce44 + DAT_800cce48;
  if ((uVar5 & 0x800000) == 0) {
    uVar5 = uVar5 & 0x7fffff;
  }
  else {
    uVar5 = uVar5 | 0xff800000;
  }
  iVar3 = (int)(*(int *)(*(int *)(param_1 + 0x3c) + 0xc) + uVar5) >> 1;
  *(int *)(*(int *)(param_1 + 0x3c) + 0xc) = iVar3;
  iVar1 = (short)DAT_800cce22 + -0x1e;
  if ((short)DAT_800cce22 < 0x1e) {
    iVar1 = 100;
  }
  else {
    if (iVar1 < 0xc9) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 200;
    }
    iVar1 = 0x100 - iVar1;
  }
  iVar1 = iVar3 * iVar1 >> 8;
  if (iVar1 < 0) {
    if (iVar1 < -0x1ef000) {
      iVar1 = -0x1ef000;
    }
  }
  else if (0x1ef000 < iVar1) {
    iVar1 = 0x1ef000;
  }
  *(int *)(param_1 + 0x3c8) = iVar1;
  FUN_8004819c(param_1);
  if ((DAT_800cce18 == 0) && (iVar1 = FUN_80042ec0(param_1), iVar1 == 0)) {
    uVar2 = 0x100;
    if (0x4f < (short)DAT_800cce22) {
      uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x3c) + 2);
    }
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    uVar4 = 0x100;
    **(undefined2 **)(param_1 + 0x3c) = 8;
  }
  *(undefined2 *)(param_1 + 0x210) = uVar2;
  *(undefined2 *)(param_1 + 0x238) = uVar4;
  return;
}


