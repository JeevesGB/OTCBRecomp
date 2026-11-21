/* Function: SetupRace_Type3 */
/* Address: 80089938 */

void SetupRace_Type3(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint3 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 auStack_1a8 [2];
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined4 local_1a0;
  uint local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  uint local_188;
  uint local_184;
  undefined1 auStack_180 [20];
  char local_16c;
  char local_16a;
  char local_168;
  char local_166;
  char local_164;
  char local_162;
  ushort local_144;
  char local_128;
  char local_126;
  char local_124;
  char local_122;
  undefined1 local_120;
  undefined1 local_11e;
  undefined1 local_11c;
  undefined1 local_116;
  undefined1 local_114;
  byte local_112;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [20];
  undefined1 local_bc;
  undefined1 local_ba;
  undefined1 local_b8;
  undefined1 local_b6;
  undefined1 local_b4;
  undefined1 local_b2;
  undefined2 local_94;
  undefined2 local_80;
  undefined2 local_7e;
  undefined1 local_78;
  undefined1 local_76;
  undefined1 local_74;
  undefined1 local_72;
  undefined1 local_70;
  undefined1 local_6e;
  undefined1 local_66;
  undefined1 local_64;
  byte local_62;
  int local_40;
  undefined1 local_3c;
  ushort local_3a;
  undefined2 local_38;
  undefined1 *local_30;
  
  iVar12 = GetChampionshipData();
  local_40 = GetCarReplayData();
  iVar13 = GetRaceTypePtr();
  uVar1 = *(undefined1 *)(iVar13 + 3);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 4) = 2;
  uVar10 = FUN_80067560(uVar1);
  *(undefined2 *)(param_1 + 6) = uVar10;
  uVar11 = FUN_80067788(uVar1);
  *(ushort *)(param_1 + 8) = uVar11 & 0xff;
  uVar2 = *(undefined1 *)(local_40 + 0x11);
  uVar7 = GetChampionshipTrackIndex(uVar2,uVar1);
  local_3c = *(undefined1 *)(local_40 + 0x12);
  local_3a = GetChampionshipCarIndex(uVar2);
  local_3a = local_3a & 0xff;
  iVar13 = GetReplayCarData(uVar2);
  iVar14 = GetCarTuningData(uVar2);
  uVar15 = GsGetWorkBase();
  local_30 = auStack_180;
  FUN_80066bd4(uVar7,local_30,uVar15);
  local_38 = *(undefined2 *)(iVar13 + 0xac);
  cVar8 = FUN_80067854(uVar2);
  if (cVar8 == '\0') {
    uVar9 = FUN_80067888(uVar2);
    cVar8 = FUN_800678a4(uVar2);
    iVar18 = 0;
    uStack_190 = CONCAT13(local_114,CONCAT12(local_116,(undefined2)uStack_190));
    local_184 = (uint)local_144;
    local_194._0_2_ = CONCAT11(local_11e,local_120);
    iVar17 = iVar13 + 0x1a;
    do {
      if (*(char *)(iVar17 + 0x6e) == '\x02') {
        iVar17 = *(int *)(iVar14 + 100) + iVar18 * 0x10;
        local_194._0_2_ =
             CONCAT11((char)*(undefined2 *)(iVar17 + 0xe) +
                      ((char)*(undefined2 *)(iVar13 + 0x10) - (*(char *)(iVar17 + 0xd) + '\x01')),
                      (char)*(undefined2 *)(iVar17 + 10) +
                      ((char)*(undefined2 *)(iVar13 + 0xe) - (*(char *)(iVar17 + 9) + '\x01')));
      }
      iVar18 = iVar18 + 1;
      iVar17 = iVar13 + 0x1a + iVar18;
    } while (iVar18 != 5);
    local_1a0 = CONCAT13(local_16a - *(char *)(iVar13 + 10),
                         CONCAT12(local_16c - *(char *)(iVar13 + 10),0x8008));
    local_19c = CONCAT13(local_162 - *(char *)(iVar13 + 0xc),
                         CONCAT21(CONCAT11(local_164 - *(char *)(iVar13 + 0xc),
                                           local_166 - *(char *)(iVar13 + 0xc)),
                                  local_168 - *(char *)(iVar13 + 10)));
    local_188 = *(uint *)(iVar13 + 0x16);
    local_198 = CONCAT22(CONCAT11(local_122 + *(char *)(iVar13 + 0x14),
                                  local_124 + *(char *)(iVar13 + 0x12)),
                         CONCAT11(local_126 + *(char *)(iVar13 + 8),
                                  local_128 + *(char *)(iVar13 + 6)));
    if (cVar8 != '\0') {
      local_1a0 = CONCAT22(local_1a0._2_2_,0x8008) | 2;
    }
    local_18c = CONCAT13(local_11c,CONCAT12(uVar9,(ushort)local_112));
  }
  else {
    FUN_800884c4(&local_1a0,local_30,iVar13 + 6,iVar13 + 0x1a,iVar14,uVar2);
  }
  cVar8 = *(char *)(local_40 + 0x13);
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = uVar7;
  *(undefined1 *)(param_1 + 0x17) = local_3c;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(ushort *)(param_1 + 0x1a) = (ushort)(cVar8 == '\0');
  *(undefined1 *)(param_1 + 0x16) = (undefined1)local_3a;
  uVar3 = param_1 + 0x1fU & 3;
  puVar4 = (uint *)((param_1 + 0x1fU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_1a0 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x1cU & 3;
  puVar4 = (uint *)((param_1 + 0x1cU) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_1a0 << uVar3 * 8;
  uVar3 = param_1 + 0x23U & 3;
  puVar4 = (uint *)((param_1 + 0x23U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_19c >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x20U & 3;
  puVar4 = (uint *)((param_1 + 0x20U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_19c << uVar3 * 8;
  uVar3 = param_1 + 0x27U & 3;
  puVar4 = (uint *)((param_1 + 0x27U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_198 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x24U & 3;
  puVar4 = (uint *)((param_1 + 0x24U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_198 << uVar3 * 8;
  uVar3 = param_1 + 0x2bU & 3;
  puVar4 = (uint *)((param_1 + 0x2bU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_194 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x28U & 3;
  puVar4 = (uint *)((param_1 + 0x28U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_194 << uVar3 * 8;
  uVar3 = param_1 + 0x2fU & 3;
  puVar4 = (uint *)((param_1 + 0x2fU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | uStack_190 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x2cU & 3;
  puVar4 = (uint *)((param_1 + 0x2cU) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | uStack_190 << uVar3 * 8;
  uVar3 = param_1 + 0x33U & 3;
  puVar4 = (uint *)((param_1 + 0x33U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_18c >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x30U & 3;
  puVar4 = (uint *)((param_1 + 0x30U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_18c << uVar3 * 8;
  uVar3 = param_1 + 0x37U & 3;
  puVar4 = (uint *)((param_1 + 0x37U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_188 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x34U & 3;
  puVar4 = (uint *)((param_1 + 0x34U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_188 << uVar3 * 8;
  uVar3 = param_1 + 0x3bU & 3;
  puVar4 = (uint *)((param_1 + 0x3bU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_184 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x38U & 3;
  puVar4 = (uint *)((param_1 + 0x38U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_184 << uVar3 * 8;
  *(undefined2 *)(param_1 + 0x3c) = local_38;
  uVar2 = *(undefined1 *)(iVar12 + 2);
  uVar7 = GetChampionshipTrackIndex(uVar2,uVar1);
  uVar15 = GsGetWorkBase();
  FUN_80066bd4(uVar7,auStack_d0,uVar15);
  uVar9 = FUN_80067888(uVar2);
  cVar8 = FUN_800678a4(uVar2);
  local_30 = (undefined1 *)CONCAT22(local_30._2_2_,*(undefined2 *)(iVar12 + 10));
  puVar16 = local_30;
  local_f0._0_2_ = 0x8008;
  if (cVar8 != '\0') {
    local_f0._0_2_ = 0x800a;
  }
  local_30._0_1_ = (undefined1)*(undefined2 *)(iVar12 + 10);
  local_d4._0_3_ = CONCAT12(local_30._0_1_,local_94);
  uVar6 = (uint3)local_d4;
  local_d4 = (uint)(uint3)local_d4;
  local_f0 = CONCAT13(local_ba,CONCAT12(local_bc,(undefined2)local_f0));
  uVar5 = CONCAT13(local_b2,CONCAT21(CONCAT11(local_b4,local_b6),local_b8));
  local_d8 = CONCAT22(local_7e,local_80);
  uStack_e0 = CONCAT13(local_64,CONCAT12(local_66,(undefined2)uStack_e0));
  local_dc = CONCAT13((char)*(undefined2 *)(iVar12 + 0xc),CONCAT12(uVar9,(ushort)local_62));
  local_1a5 = 0;
  local_e8 = CONCAT22(CONCAT11(local_72,local_74),CONCAT11(local_76,local_78));
  local_e4._0_2_ = CONCAT11(local_6e,local_70);
  *(undefined1 *)(param_1 + 0x40) = 2;
  *(undefined1 *)(param_1 + 0x41) = uVar7;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 0x42) = uVar2;
  *(undefined2 *)(param_1 + 0x46) = 0;
  uVar3 = param_1 + 0x4bU & 3;
  puVar4 = (uint *)((param_1 + 0x4bU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_f0 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x48U & 3;
  puVar4 = (uint *)((param_1 + 0x48U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_f0 << uVar3 * 8;
  uVar3 = param_1 + 0x4fU & 3;
  puVar4 = (uint *)((param_1 + 0x4fU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | uVar5 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x4cU & 3;
  puVar4 = (uint *)((param_1 + 0x4cU) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | uVar5 << uVar3 * 8;
  uVar3 = param_1 + 0x53U & 3;
  puVar4 = (uint *)((param_1 + 0x53U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_e8 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x50U & 3;
  puVar4 = (uint *)((param_1 + 0x50U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_e8 << uVar3 * 8;
  uVar3 = param_1 + 0x57U & 3;
  puVar4 = (uint *)((param_1 + 0x57U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_e4 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x54U & 3;
  puVar4 = (uint *)((param_1 + 0x54U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_e4 << uVar3 * 8;
  uVar3 = param_1 + 0x5bU & 3;
  puVar4 = (uint *)((param_1 + 0x5bU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | uStack_e0 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x58U & 3;
  puVar4 = (uint *)((param_1 + 0x58U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | uStack_e0 << uVar3 * 8;
  uVar3 = param_1 + 0x5fU & 3;
  puVar4 = (uint *)((param_1 + 0x5fU) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_dc >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x5cU & 3;
  puVar4 = (uint *)((param_1 + 0x5cU) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_dc << uVar3 * 8;
  uVar3 = param_1 + 99U & 3;
  puVar4 = (uint *)((param_1 + 99U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | local_d8 >> (3 - uVar3) * 8;
  uVar3 = param_1 + 0x60U & 3;
  puVar4 = (uint *)((param_1 + 0x60U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_d8 << uVar3 * 8;
  uVar3 = param_1 + 0x67U & 3;
  puVar4 = (uint *)((param_1 + 0x67U) - uVar3);
  *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 | (uint)(uVar6 >> (3 - uVar3) * 8);
  uVar3 = param_1 + 100U & 3;
  puVar4 = (uint *)((param_1 + 100U) - uVar3);
  *puVar4 = *puVar4 & 0xffffffffU >> (4 - uVar3) * 8 | local_d4 << uVar3 * 8;
  puVar19 = (undefined1 *)(param_1 + 0x68);
  local_1a6 = uVar2;
  local_30 = puVar16;
  cVar8 = FUN_800677a8(uVar1);
  if (cVar8 != '\0') {
    *puVar19 = 4;
    *(undefined1 *)(param_1 + 0x69) = 0xf6;
    *(undefined1 *)(param_1 + 0x6b) = 0;
    puVar19 = (undefined1 *)(param_1 + 0x6c);
  }
  puVar16 = (undefined1 *)FUN_80088910(puVar19,local_40 + 0xf,auStack_1a8,uVar1);
  *puVar16 = 0xff;
  return;
}


