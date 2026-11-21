/* Function: FUN_800524dc */
/* Address: 800524dc */

void FUN_800524dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x4e) << 0x10;
  iVar5 = iVar1 >> 0x1a;
  uVar4 = iVar1 >> 0x10;
  puVar3 = *(ushort **)(param_1 + param_2 * 4 + 0xc);
  iVar1 = iVar5 + 1;
  if (0xc < iVar5) {
    iVar5 = 0xc;
    iVar1 = 0xd;
  }
  iVar5 = ((int)(short)puVar3[iVar5 + 7] +
          ((int)(((int)(short)puVar3[iVar1 + 7] - (int)(short)puVar3[iVar5 + 7]) * (uVar4 & 0x3ff))
          >> 10)) * (int)*(short *)(g_DisplayParams + 0xe) * (int)*(short *)(param_1 + 0x4a) >> 0xe;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = 0;
  }
  if (0x7f < iVar5) {
    iVar1 = 0x7f;
  }
  if (((*puVar3 & 8) != 0) && ((*(uint *)(param_1 + 4) & 0x20000) == 0)) {
    iVar1 = iVar1 * 0x33 >> 7;
  }
  iVar2 = (int)(short)puVar3[5];
  iVar5 = uVar4 * 0x14;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar5 == -0x80000000)) {
    trap(0x1800);
  }
  iVar6 = param_1 + param_2 * 2;
  iVar5 = iVar5 / iVar2 + (int)*(short *)(param_1 + 0x4c);
  SsUtChangePitch(*(short *)(iVar6 + 0x36),*(short *)(param_1 + 0x32),puVar3[2],puVar3[4],0,
                  (short)((uint)(((iVar5 >> 7) + (int)(short)puVar3[4]) * 0x10000) >> 0x10),
                  (ushort)iVar5 & 0x7f);
  SsUtSetVVol(*(short *)(iVar6 + 0x36),(short)iVar1,(short)iVar1);
  return;
}


