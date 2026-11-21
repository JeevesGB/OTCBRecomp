/* Function: SetupRace_Type4 */
/* Address: 80089f34 */

void SetupRace_Type4(undefined2 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 auStack_c0 [20];
  char local_ac;
  char local_aa;
  char local_a8;
  char local_a6;
  char local_a4;
  char local_a2;
  ushort local_84;
  char local_68;
  char local_66;
  char local_64;
  char local_62;
  undefined1 local_60;
  undefined1 local_5e;
  undefined1 local_5c;
  undefined1 local_56;
  undefined1 local_54;
  byte local_52;
  undefined1 local_30;
  ushort local_2e;
  
  iVar9 = GetRaceTypePtr();
  uVar4 = *(undefined1 *)(iVar9 + 3);
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 3;
  uVar7 = FUN_80067560(uVar4);
  param_1[3] = uVar7;
  uVar8 = FUN_80067788(uVar4);
  param_1[4] = uVar8 & 0xff;
  iVar9 = GetCarReplayData();
  uVar1 = *(undefined1 *)(iVar9 + 0x11);
  uVar4 = GetChampionshipTrackIndex(uVar1,uVar4);
  local_30 = *(undefined1 *)(iVar9 + 0x12);
  local_2e = GetChampionshipCarIndex(uVar1);
  local_2e = local_2e & 0xff;
  iVar10 = GetReplayCarData(uVar1);
  iVar11 = GetCarTuningData(uVar1);
  uVar12 = GsGetWorkBase();
  FUN_80066bd4(uVar4,auStack_c0,uVar12);
  uVar7 = *(undefined2 *)(iVar10 + 0xac);
  cVar5 = FUN_80067854(uVar1);
  if (cVar5 == '\0') {
    uVar6 = FUN_80067888(uVar1);
    cVar5 = FUN_800678a4(uVar1);
    uStack_d0 = CONCAT13(local_54,CONCAT12(local_56,(undefined2)uStack_d0));
    iVar14 = 0;
    local_c4 = (uint)local_84;
    local_d4._0_2_ = CONCAT11(local_5e,local_60);
    iVar13 = iVar10 + 0x1a;
    do {
      if (*(char *)(iVar13 + 0x6e) == '\x02') {
        iVar13 = *(int *)(iVar11 + 100) + iVar14 * 0x10;
        local_d4._0_2_ =
             CONCAT11((char)*(undefined2 *)(iVar13 + 0xe) +
                      ((char)*(undefined2 *)(iVar10 + 0x10) - (*(char *)(iVar13 + 0xd) + '\x01')),
                      (char)*(undefined2 *)(iVar13 + 10) +
                      ((char)*(undefined2 *)(iVar10 + 0xe) - (*(char *)(iVar13 + 9) + '\x01')));
      }
      iVar14 = iVar14 + 1;
      iVar13 = iVar10 + 0x1a + iVar14;
    } while (iVar14 != 5);
    local_e0 = CONCAT13(local_aa - *(char *)(iVar10 + 10),
                        CONCAT12(local_ac - *(char *)(iVar10 + 10),0x8008));
    local_dc = CONCAT13(local_a2 - *(char *)(iVar10 + 0xc),
                        CONCAT21(CONCAT11(local_a4 - *(char *)(iVar10 + 0xc),
                                          local_a6 - *(char *)(iVar10 + 0xc)),
                                 local_a8 - *(char *)(iVar10 + 10)));
    local_c8 = *(uint *)(iVar10 + 0x16);
    local_d8 = CONCAT22(CONCAT11(local_62 + *(char *)(iVar10 + 0x14),
                                 local_64 + *(char *)(iVar10 + 0x12)),
                        CONCAT11(local_66 + *(char *)(iVar10 + 8),local_68 + *(char *)(iVar10 + 6)))
    ;
    if (cVar5 != '\0') {
      local_e0 = CONCAT22(local_e0._2_2_,0x8008) | 2;
    }
    local_cc = CONCAT13(local_5c,CONCAT12(uVar6,(ushort)local_52));
  }
  else {
    FUN_800884c4(&local_e0,auStack_c0,iVar10 + 6,iVar10 + 0x1a,iVar11,uVar1);
  }
  cVar5 = *(char *)(iVar9 + 0x13);
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = uVar4;
  *(undefined1 *)((int)param_1 + 0x17) = local_30;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[0xd] = (ushort)(cVar5 == '\0');
  *(undefined1 *)(param_1 + 0xb) = (undefined1)local_2e;
  uVar2 = (int)param_1 + 0x1fU & 3;
  puVar3 = (uint *)(((int)param_1 + 0x1fU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_e0 >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0xe) & 3;
  puVar3 = (uint *)((int)(param_1 + 0xe) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_e0 << uVar2 * 8;
  uVar2 = (int)param_1 + 0x23U & 3;
  puVar3 = (uint *)(((int)param_1 + 0x23U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_dc >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x10) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x10) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_dc << uVar2 * 8;
  uVar2 = (int)param_1 + 0x27U & 3;
  puVar3 = (uint *)(((int)param_1 + 0x27U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_d8 >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x12) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x12) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_d8 << uVar2 * 8;
  uVar2 = (int)param_1 + 0x2bU & 3;
  puVar3 = (uint *)(((int)param_1 + 0x2bU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_d4 >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x14) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x14) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_d4 << uVar2 * 8;
  uVar2 = (int)param_1 + 0x2fU & 3;
  puVar3 = (uint *)(((int)param_1 + 0x2fU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uStack_d0 >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x16) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x16) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | uStack_d0 << uVar2 * 8;
  uVar2 = (int)param_1 + 0x33U & 3;
  puVar3 = (uint *)(((int)param_1 + 0x33U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_cc >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x18) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x18) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_cc << uVar2 * 8;
  uVar2 = (int)param_1 + 0x37U & 3;
  puVar3 = (uint *)(((int)param_1 + 0x37U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_c8 >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x1a) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x1a) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_c8 << uVar2 * 8;
  uVar2 = (int)param_1 + 0x3bU & 3;
  puVar3 = (uint *)(((int)param_1 + 0x3bU) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | local_c4 >> (3 - uVar2) * 8;
  uVar2 = (uint)(param_1 + 0x1c) & 3;
  puVar3 = (uint *)((int)(param_1 + 0x1c) - uVar2);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar2) * 8 | local_c4 << uVar2 * 8;
  param_1[0x1e] = uVar7;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  return;
}


