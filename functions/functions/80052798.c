/* Function: FUN_80052798 */
/* Address: 80052798 */

void FUN_80052798(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  
  uVar9 = *(uint *)(param_1 + 4);
  sVar10 = *(short *)(param_1 + 0x50);
  iVar11 = (int)sVar10;
  iVar7 = *(int *)(param_1 + param_2 * 4 + 0xc);
  sVar1 = *(short *)(param_1 + 0x4e);
  iVar8 = (int)sVar1;
  if ((uVar9 & 0x10000) == 0) {
    if ((*(short *)(iVar7 + 0xc) < iVar8) && (iVar8 < iVar11 - *(short *)(iVar7 + 0xe))) {
      if (*(short *)(iVar7 + 0x10) < iVar8) {
        sVar3 = *(short *)(param_1 + 0x32);
        sVar4 = *(short *)(iVar7 + 4);
        sVar5 = *(short *)(iVar7 + 6);
        sVar6 = *(short *)(iVar7 + 8);
        sVar2 = (short)((int)*(short *)(iVar7 + 10) * (int)*(short *)(g_DisplayParams + 0xe) *
                        (int)*(short *)(param_1 + 0x4a) * 0x80 >> 0x15);
      }
      else {
        sVar3 = *(short *)(param_1 + 0x32);
        sVar4 = *(short *)(iVar7 + 0x12);
        sVar5 = *(short *)(iVar7 + 0x14);
        sVar6 = *(short *)(iVar7 + 0x16);
        sVar2 = (short)((uint)((int)*(short *)(iVar7 + 0x18) *
                               (int)*(short *)(g_DisplayParams + 0xe) *
                               (int)*(short *)(param_1 + 0x4a) * 4) >> 0x10);
      }
      uVar9 = uVar9 | 0x10000;
      SsUtKeyOn(sVar3,sVar4,sVar5,sVar6,0,sVar2,sVar2);
    }
    if (iVar8 <= iVar11) goto LAB_800528e4;
  }
  else if (iVar11 < iVar8) {
    uVar9 = uVar9 & 0xfffeffff;
  }
  sVar10 = sVar1;
LAB_800528e4:
  *(short *)(param_1 + 0x50) = sVar10;
  *(uint *)(param_1 + 4) = uVar9;
  return;
}


