/* Function: _SsContDataEntry */
/* Address: 8008f9bc */

/* WARNING: Removing unreachable block (ram,0x8008fb5c) */

void _SsContDataEntry(short param_1,short param_2,uchar param_3)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  uint uStack_74;
  uint uStack_70;
  ProgAtr local_68;
  VagAtr VStack_58;
  uint local_38;
  int local_34;
  
  iVar8 = (&DAT_800cdee8)[param_1] + param_2 * 0xb0;
  uVar11 = (uint)*(byte *)(iVar8 + 0x17);
  SsUtGetProgAtr((short)*(char *)(iVar8 + 0x26),(ushort)*(byte *)(uVar11 + iVar8 + 0x37),&local_68);
  if ((*(char *)(iVar8 + 0x1c) == '\x01') && (*(char *)(iVar8 + 0x15) == '\0')) {
    *(uchar *)(iVar8 + 0x1d) = param_3;
    *(undefined1 *)(iVar8 + 0x1c) = 0;
    *(undefined1 *)(iVar8 + 0x15) = 1;
    CC_6_OBJ_340((int)param_1,(int)param_2);
    return;
  }
  if (*(char *)(iVar8 + 0x1e) != '\x02') {
    if (*(char *)(iVar8 + 0x1f) != '\x02') {
      uVar6 = _SsReadDeltaValue((int)param_1,(int)param_2);
      *(undefined4 *)(iVar8 + 0x90) = uVar6;
      return;
    }
    if (*(char *)(iVar8 + 0x1b) != '\x10') {
      bVar3 = *(byte *)(iVar8 + 0x1a);
      cVar2 = *(char *)(iVar8 + 0x26);
      uVar4 = *(undefined1 *)(uVar11 + iVar8 + 0x37);
      uVar5 = *(undefined1 *)(iVar8 + 0x1b);
      uStack_70 = (uint)param_3;
      uStack_74 = (uint)bVar3;
      puVar1 = auStack_90 + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58._4_4_ >> (3 - uVar11) * 8;
      auStack_90[0] = VStack_58.center;
      auStack_90[1] = VStack_58.shift;
      auStack_90[2] = VStack_58.min;
      auStack_90[3] = VStack_58.max;
      puVar1 = auStack_8c + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58._8_4_ >> (3 - uVar11) * 8;
      auStack_8c[0] = VStack_58.vibW;
      auStack_8c[1] = VStack_58.vibT;
      auStack_8c[2] = VStack_58.porW;
      auStack_8c[3] = VStack_58.porT;
      puVar1 = auStack_88 + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58._12_4_ >> (3 - uVar11) * 8;
      auStack_88[0] = VStack_58.pbmin;
      auStack_88[1] = VStack_58.pbmax;
      auStack_88[2] = VStack_58.reserved1;
      auStack_88[3] = VStack_58.reserved2;
      puVar1 = auStack_84 + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58._16_4_ >> (3 - uVar11) * 8;
      auStack_84._0_2_ = VStack_58.adsr1;
      auStack_84._2_2_ = VStack_58.adsr2;
      puVar1 = auStack_80 + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58._20_4_ >> (3 - uVar11) * 8;
      auStack_80._0_2_ = VStack_58.prog;
      auStack_80._2_2_ = VStack_58.vag;
      puVar1 = auStack_7c + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58.reserved._0_4_ >> (3 - uVar11) * 8;
      auStack_7c._0_2_ = VStack_58.reserved[0];
      auStack_7c._2_2_ = VStack_58.reserved[1];
      puVar1 = auStack_78 + 3;
      uVar11 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar11) =
           *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 |
           (uint)VStack_58.reserved._4_4_ >> (3 - uVar11) * 8;
      auStack_78._0_2_ = VStack_58.reserved[2];
      auStack_78._2_2_ = VStack_58.reserved[3];
      (*(code *)(&DAT_800cde8c)[bVar3])((int)cVar2,uVar4,uVar5,VStack_58._0_4_);
      uVar6 = _SsReadDeltaValue((int)param_1,(int)param_2);
      *(undefined4 *)(iVar8 + 0x90) = uVar6;
      *(undefined1 *)(iVar8 + 0x1f) = 0;
      CC_6_OBJ_34C();
      return;
    }
    CC_6_OBJ_274((int)*(char *)(iVar8 + 0x26),*(undefined1 *)(uVar11 + iVar8 + 0x37),0);
    return;
  }
  if ((*(char *)(iVar8 + 0x19) == '\0') && (iVar10 = 0, local_68.tones != 0)) {
    local_38 = (uint)((byte)(param_3 + 0xbf) < 0x3f);
    local_34 = (uint)param_3 * 0x1900;
    iVar9 = 0;
    do {
      sVar7 = (short)((uint)iVar9 >> 0x10);
      SsUtGetVagAtr((short)*(char *)(iVar8 + 0x26),(ushort)*(byte *)(uVar11 + iVar8 + 0x37),sVar7,
                    &VStack_58);
      bVar3 = *(byte *)(iVar8 + 0x18);
      if (bVar3 == 1) {
        CC_6_OBJ_1E0();
        return;
      }
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          VStack_58._12_4_ = CONCAT31(CONCAT21(VStack_58._14_2_,param_3),param_3) & 0xffff7f7f;
          CC_6_OBJ_1E0();
          return;
        }
        CC_6_OBJ_1E8();
        return;
      }
      if (bVar3 != 2) {
        CC_6_OBJ_1E8();
        return;
      }
      iVar10 = iVar10 + 1;
      SsUtSetVagAtr((short)*(char *)(iVar8 + 0x26),(ushort)*(byte *)(uVar11 + iVar8 + 0x37),sVar7,
                    &VStack_58);
      iVar9 = iVar9 + 0x10000;
    } while (iVar10 < (int)(uint)local_68.tones);
  }
  uVar6 = _SsReadDeltaValue((int)param_1,(int)param_2);
  *(undefined4 *)(iVar8 + 0x90) = uVar6;
  *(undefined1 *)(iVar8 + 0x1e) = 0;
  CC_6_OBJ_34C();
  return;
}


