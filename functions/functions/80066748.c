/* Function: FUN_80066748 */
/* Address: 80066748 */

void FUN_80066748(int param_1,short param_2,short param_3,undefined4 param_4,ushort *param_5,
                 undefined4 param_6,uint *param_7)

{
  DR_OFFSET *pDVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  u_short local_60;
  short local_5e;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  undefined2 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  DAT_800cdb80 = DAT_800cdb80 + -0x21;
  iVar2 = DAT_800cdb84 + 8;
  iVar3 = DAT_800cdb84 + -0x520;
  DAT_800cdb84 = iVar2;
  if (0x528 < iVar2) {
    DAT_800cdb84 = iVar3;
  }
  iVar2 = DAT_800cdb84 + -0x294;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  local_44 = 0;
  local_40 = 0;
  uVar4 = (&g_SinCosTable)[*param_5 & 0xfff];
  uVar5 = (&g_SinCosTable)[param_5[1] & 0xfff];
  uVar6 = (&g_SinCosTable)[param_5[2] & 0xfff];
  local_34._0_2_ = (short)uVar5;
  local_38._0_2_ = (short)uVar4;
  iVar8 = (int)(short)local_34;
  local_34._2_2_ = (short)((uint)uVar5 >> 0x10);
  local_30._2_2_ = (short)((uint)uVar6 >> 0x10);
  iVar11 = (int)local_30._2_2_;
  iVar10 = (int)local_34._2_2_;
  local_30._0_2_ = (short)uVar6;
  iVar9 = (int)(short)local_30;
  iVar12 = (short)local_38 * iVar8 >> 6;
  local_58 = (short)(iVar10 * iVar11 >> 0xc) - (short)(iVar12 * iVar9 >> 0x12);
  local_38._2_2_ = (short)((uint)uVar4 >> 0x10);
  iVar7 = (int)local_38._2_2_;
  iVar3 = (short)local_38 * iVar10 >> 6;
  local_54 = (short)(iVar8 * iVar11 >> 0xc) + (short)(iVar3 * iVar9 >> 0x12);
  local_52 = (short)(iVar10 * iVar9 >> 0xc) + (short)(iVar12 * iVar11 >> 0x12);
  local_4a = (short)local_38;
  local_4e = (short)(iVar8 * iVar9 >> 0xc) - (short)(iVar3 * iVar11 >> 0x12);
  local_56 = -(short)(iVar7 * iVar9 >> 0xc);
  local_50 = (short)(iVar7 * iVar11 >> 0xc);
  local_4c = -(short)(iVar7 * iVar8 >> 0xc);
  local_48 = (undefined2)(iVar7 * iVar10 >> 0xc);
  local_3c = param_4;
  local_38 = uVar4;
  local_34 = uVar5;
  local_30 = uVar6;
  FUN_80051638((int)*(short *)(param_1 + 0xc),(int)*(short *)(param_1 + 0xe),param_6);
  pDVar1 = g_VRAMRectPtr;
  local_60 = 0x140;
  local_5e = 0xf0;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  SetDrawOffset(pDVar1,&local_60);
                    /* Probable PsyQ macro: addPrim(). */
  pDVar1->tag = pDVar1->tag & 0xff000000 | *param_7 & 0xffffff;
  *param_7 = *param_7 & 0xff000000 | (uint)pDVar1 & 0xffffff;
  GTE_CTRL = GTE_CTRL & 0xfffffffd;
  DAT_1f800028 = FUN_80067638();
  GTE_IR1 = 0;
  GTE_OFX = param_7;
  local_56 = (short)((uint)(local_56 * 0xe1) >> 8);
  local_50 = (short)((uint)(local_50 * 0xe1) >> 8);
  local_4a = (short)((uint)(local_4a * 0xe1) >> 8);
  FUN_80066b5c(param_1,&local_58,DAT_800cdb80,iVar2 + -0x14a);
  pDVar1 = g_VRAMRectPtr;
  local_60 = param_2 + 0x140;
  local_5e = param_3 + 0xf0;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  SetDrawOffset(pDVar1,&local_60);
                    /* Probable PsyQ macro: addPrim(). */
  pDVar1->tag = pDVar1->tag & 0xff000000 | param_7[0xfe] & 0xffffff;
  param_7[0xfe] = param_7[0xfe] & 0xff000000 | (uint)pDVar1 & 0xffffff;
  return;
}


