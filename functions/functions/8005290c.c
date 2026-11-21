/* Function: FUN_8005290c */
/* Address: 8005290c */

void FUN_8005290c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  iVar3 = *(int *)(param_1 + param_2 * 4 + 0xc);
  iVar1 = (uint)*(ushort *)(param_1 + 0x4e) << 0x10;
  iVar5 = iVar1 >> 0x1a;
  uVar4 = iVar1 >> 0x10;
  iVar1 = iVar5 + 1;
  if (0xc < iVar5) {
    iVar5 = 0xc;
    iVar1 = 0xd;
  }
  iVar5 = (int)*(short *)(iVar3 + iVar5 * 2 + 0x12);
  iVar5 = (iVar5 + ((int)((*(short *)(iVar3 + iVar1 * 2 + 0x12) - iVar5) * (uVar4 & 0x3ff)) >> 10))
          * (int)*(short *)(g_DisplayParams + 0xe) * (int)*(short *)(param_1 + 0x4a) >> 0xe;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = 0;
  }
  sVar6 = (short)iVar1;
  if (0x7f < iVar5) {
    sVar6 = 0x7f;
  }
  iVar5 = (int)*(short *)(iVar3 + 10);
  iVar1 = uVar4 * 10;
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  iVar2 = (int)*(short *)(iVar3 + 0xe);
  iVar1 = iVar1 / iVar5 + (int)*(short *)(param_1 + 0x4c);
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  iVar5 = param_1 + param_2 * 2;
  SsUtChangePitch(*(short *)(iVar5 + 0x36),*(short *)(param_1 + 0x32),*(short *)(iVar3 + 4),
                  *(short *)(iVar3 + 8),0,
                  (short)((uint)(((iVar1 / iVar2) * (int)*(short *)(iVar3 + 0x10) +
                                 (int)*(short *)(iVar3 + 8)) * 0x10000) >> 0x10),
                  (short)(iVar1 % iVar2));
  SsUtSetVVol(*(short *)(iVar5 + 0x36),sVar6,sVar6);
  return;
}


