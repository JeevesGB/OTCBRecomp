/* Function: FUN_80044034 */
/* Address: 80044034 */

void FUN_80044034(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(short *)(param_1 + 0x15c) + 1;
  if (g_TrackLength <= iVar5) {
    iVar5 = iVar5 - g_TrackLength;
  }
  iVar4 = *(short *)(param_1 + 0x15c) + 1;
  if (g_TrackLength <= iVar4) {
    iVar4 = iVar4 - g_TrackLength;
  }
  DAT_800cce6a = (undefined2)iVar5;
  DAT_800cce68 = (undefined2)iVar4;
  iVar5 = FUN_8002fa2c(iVar4,(int)*(short *)(*(int *)(param_1 + 0x3c) + 2));
  DAT_800cce64 = (undefined2)(iVar5 >> 0xc);
  FUN_80043f04(param_1);
  iVar5 = (int)DAT_800cce6e;
  if (iVar5 < 0) {
    if (iVar5 < -0xc6) {
      iVar5 = -0xc6;
    }
  }
  else if (0xc6 < iVar5) {
    iVar5 = 0xc6;
  }
  iVar4 = (int)*(short *)(param_1 + 0x5c);
  if (iVar4 < 0x65) {
    if (iVar4 < 0x14) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 100;
  }
  DAT_800cce74 = ((iVar5 * iVar4) / 100) * 800;
  iVar5 = 0x5dc;
  if (DAT_800cce62 == 2) {
    iVar5 = 0x76c;
  }
  iVar4 = (int)DAT_800cce6c;
  if (iVar4 < 0) {
    if (iVar4 < -100) {
      iVar4 = -300;
    }
  }
  else if (100 < iVar4) {
    iVar4 = 300;
  }
  iVar6 = (int)*(short *)(param_1 + 0x5c);
  if (iVar6 < 0x51) {
    if (iVar6 < 0x1e) {
      iVar6 = 0x1e;
    }
  }
  else {
    iVar6 = 0x50;
  }
  DAT_800cce7c = DAT_800cce70 * 1000;
  DAT_800cce78 = (iVar4 * iVar5 * (((0x50 - iVar6) * 0x28) / 0x32 + 0x3c)) / 100;
  uVar3 = DAT_800cce74 + DAT_800cce78 + DAT_800cce7c;
  if ((uVar3 & 0x800000) == 0) {
    uVar3 = uVar3 & 0x7fffff;
  }
  else {
    uVar3 = uVar3 | 0xff800000;
  }
  if ((int)uVar3 < 0) {
    if ((int)uVar3 < -0x14a000) {
      uVar3 = 0xffeb6000;
    }
  }
  else if (0x14a000 < (int)uVar3) {
    uVar3 = 0x14a000;
  }
  *(uint *)(param_1 + 0x3c8) = uVar3;
  FUN_8004819c(param_1);
  if ((g_CollisionResponseData == 0) && (*(short *)(param_1 + 0x5c) <= **(short **)(param_1 + 0x3c))
     ) {
    uVar2 = 0x100;
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0x100;
  }
  *(undefined2 *)(param_1 + 0x210) = uVar2;
  *(undefined2 *)(param_1 + 0x238) = uVar1;
  return;
}


