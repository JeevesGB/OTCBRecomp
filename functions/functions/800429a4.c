/* Function: FUN_800429a4 */
/* Address: 800429a4 */

void FUN_800429a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  undefined1 auStack_230 [88];
  undefined4 local_1d8;
  
  FUN_800464d8(auStack_230);
  FUN_80046c6c(param_1,0x5a,0);
  FUN_80046a30(param_1,0x5a,0);
  FUN_800467f4(param_1,0x3c,0);
  FUN_80046ea8(param_1);
  uVar3 = *(uint *)(((int)((uint)DAT_800cce24 << 0x10) >> 0x14) * 4 + g_TrackSegmentData);
  if ((uVar3 & 1) == 0) {
    DAT_800cce1c = 1;
    if ((uVar3 & 2) == 0) {
      DAT_800cce1c = 2;
    }
  }
  else {
    DAT_800cce1c = 0;
  }
  FUN_80042454(local_1d8);
  if (DAT_800cce1c == 1) {
    uVar1 = FUN_800426ec(local_1d8);
  }
  else if ((DAT_800cce1c < 2) && (DAT_800cce1c == 0)) {
    uVar1 = FUN_800425ac();
  }
  else {
    uVar1 = FUN_80042850();
  }
  switch(uVar1) {
  case 0:
    DAT_800cce18 = 0xffff;
    DAT_800cce1a = 0;
    DAT_800cce28 = DAT_800cce30;
    DAT_800cce2a = DAT_800cce20;
    break;
  case 1:
    DAT_800cce28 = *(ushort *)(DAT_800cce4c + 0x14);
    iVar5 = (int)*(short *)(DAT_800cce4c + 8) - (int)DAT_800cce20;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    DAT_800cce2a = *(short *)(DAT_800cce4c + 10);
    iVar2 = (int)*(short *)(DAT_800cce4c + 10) - (int)DAT_800cce20;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar5 < iVar2) {
      DAT_800cce2a = *(short *)(DAT_800cce4c + 8);
    }
    goto LAB_80042e28;
  case 2:
    uVar6 = *(uint *)(DAT_800cce4c + 0x14);
    uVar3 = uVar6 - (int)*(short *)(param_1 + 0x4e);
    if ((uVar3 & 0x800) == 0) {
      uVar3 = uVar3 & 0x7ff;
    }
    else {
      uVar3 = uVar3 | 0xfffff800;
    }
    if ((int)uVar3 < 0) {
      if ((int)uVar3 < -0x37) {
        uVar6 = (int)(short)DAT_800cce30 - 0x37;
      }
    }
    else if (0x37 < (int)uVar3) {
      uVar6 = (int)(short)DAT_800cce30 + 0x37;
    }
    DAT_800cce28 = (ushort)uVar6 | 0xf800;
    DAT_800cce2a = DAT_800cce20;
    if ((uVar6 & 0x800) == 0) {
      DAT_800cce28 = (ushort)uVar6 & 0x7ff;
    }
    goto LAB_80042c60;
  case 3:
    DAT_800cce28 = DAT_800cce30;
    iVar2 = (int)*(short *)(DAT_800cce4c + 10) + (int)*(short *)(DAT_800cce4c + 8) >> 1;
    iVar5 = iVar2 - DAT_800cce20;
    if (iVar5 < 0) {
      DAT_800cce2a = (short)iVar5 + -0x96;
      if (iVar5 < -0x95) goto LAB_80042c60;
LAB_80042c50:
      iVar4 = iVar2;
    }
    else {
      iVar4 = iVar5 + 0x96;
      if (iVar5 < 0x96) goto LAB_80042c50;
    }
    DAT_800cce2a = (short)iVar4;
LAB_80042c60:
    DAT_800cce1a = 0;
    break;
  case 4:
    DAT_800cce1a = 0xffff;
    DAT_800cce28 = DAT_800cce2c;
    DAT_800cce2a = DAT_800cce2e;
    break;
  case 5:
    DAT_800cce18 = 0xffff;
    DAT_800cce1a = 0xffff;
    DAT_800cce28 = DAT_800cce2c;
    DAT_800cce2a = DAT_800cce2e;
    break;
  case 6:
    sVar7 = *(short *)(DAT_800cce4c + 8);
    iVar5 = (int)*(short *)(DAT_800cce4c + 8) - (int)DAT_800cce2e;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar2 = (int)*(short *)(DAT_800cce4c + 10) - (int)DAT_800cce2e;
    goto LAB_80042cf0;
  case 7:
    DAT_800cce18 = 0xffff;
    sVar7 = *(short *)(DAT_800cce4c + 8);
    iVar5 = (int)*(short *)(DAT_800cce4c + 8) - (int)DAT_800cce2e;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar2 = (int)*(short *)(DAT_800cce4c + 10) - (int)DAT_800cce2e;
LAB_80042cf0:
    DAT_800cce28 = DAT_800cce2c;
    DAT_800cce2a = *(short *)(DAT_800cce4c + 10);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar5 < iVar2) {
      DAT_800cce2a = sVar7;
    }
    goto LAB_80042e28;
  case 8:
    DAT_800cce28 = DAT_800cce30;
    iVar5 = (int)*(short *)(DAT_800cce4c + 8) - (int)DAT_800cce2e;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar2 = (int)*(short *)(DAT_800cce4c + 10) - (int)DAT_800cce2e;
    sVar7 = *(short *)(DAT_800cce4c + 10);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_800cce2a = *(short *)(DAT_800cce4c + 8) + 0x32;
    if (iVar2 <= iVar5) {
LAB_80042e20:
      DAT_800cce2a = sVar7 + -0x32;
      goto LAB_80042e24;
    }
    goto LAB_80042e28;
  case 9:
    DAT_800cce18 = 0xffff;
    iVar5 = (int)*(short *)(DAT_800cce4c + 8) - (int)DAT_800cce2e;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar2 = (int)*(short *)(DAT_800cce4c + 10) - (int)DAT_800cce2e;
    sVar7 = *(short *)(DAT_800cce4c + 10);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    DAT_800cce2a = *(short *)(DAT_800cce4c + 8) + 0x32;
    if (iVar2 <= iVar5) goto LAB_80042e20;
LAB_80042e24:
    DAT_800cce28 = DAT_800cce30;
LAB_80042e28:
    DAT_800cce1a = 0xffff;
  }
  DAT_800cce34 = (int)DAT_800cce2a - (int)DAT_800cce20;
  uVar3 = (int)(short)DAT_800cce28 - (int)*(short *)(param_1 + 0x4e);
  if ((uVar3 & 0x800) == 0) {
    DAT_800cce38 = uVar3 & 0x7ff;
  }
  else {
    DAT_800cce38 = uVar3 | 0xfffff800;
  }
  uVar3 = (int)(short)DAT_800cce28 - (*(int *)(param_1 + 0x18c) >> 0xc);
  if ((uVar3 & 0x800) == 0) {
    DAT_800cce3c = uVar3 & 0x7ff;
  }
  else {
    DAT_800cce3c = uVar3 | 0xfffff800;
  }
  return;
}


