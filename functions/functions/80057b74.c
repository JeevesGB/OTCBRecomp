/* Function: FUN_80057b74 */
/* Address: 80057b74 */

void FUN_80057b74(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = (&g_SinCosTable)[param_8 & 0xfff];
  if ((int)uVar8 < 0) {
    uVar4 = (int)uVar8 >> 0x10 | 0xffff8000;
  }
  else {
    uVar4 = (int)uVar8 >> 0x10 & 0x7fff;
  }
  if ((uVar8 & 0x8000) == 0) {
    uVar8 = uVar8 & 0x7fff;
  }
  else {
    uVar8 = uVar8 | 0xffff8000;
  }
  iVar5 = param_2 - (param_6 + param_2);
  iVar6 = param_3 - (param_7 + param_3);
  iVar3 = iVar5 * uVar4 - iVar6 * uVar8;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  sVar1 = (short)(param_6 + param_2);
  *(short *)(param_1 + 8) = (short)(iVar3 >> 0xc) + sVar1;
  iVar3 = iVar5 * uVar8 + iVar6 * uVar4;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  iVar5 = iVar5 + param_4;
  sVar2 = (short)(param_7 + param_3);
  *(short *)(param_1 + 10) = (short)(iVar3 >> 0xc) + sVar2;
  iVar3 = iVar5 * uVar4 - iVar6 * uVar8;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  iVar7 = iVar5 * uVar8 + iVar6 * uVar4;
  *(short *)(param_1 + 0x10) = (short)(iVar3 >> 0xc) + sVar1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xfff;
  }
  iVar3 = (iVar6 + param_5) * uVar8;
  *(short *)(param_1 + 0x12) = (short)(iVar7 >> 0xc) + sVar2;
  iVar7 = iVar5 * uVar4 - iVar3;
  iVar6 = (iVar6 + param_5) * uVar4;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xfff;
  }
  *(short *)(param_1 + 0x20) = (short)(iVar7 >> 0xc) + sVar1;
  iVar7 = iVar5 * uVar8 + iVar6;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xfff;
  }
  *(short *)(param_1 + 0x22) = (short)(iVar7 >> 0xc) + sVar2;
  iVar3 = (iVar5 - param_4) * uVar4 - iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  *(short *)(param_1 + 0x18) = (short)(iVar3 >> 0xc) + sVar1;
  iVar6 = (iVar5 - param_4) * uVar8 + iVar6;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  *(short *)(param_1 + 0x1a) = (short)(iVar6 >> 0xc) + sVar2;
  return;
}


