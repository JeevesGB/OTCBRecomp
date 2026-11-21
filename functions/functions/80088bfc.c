/* Function: FUN_80088bfc */
/* Address: 80088bfc */

undefined1 * FUN_80088bfc(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  char cVar15;
  char *pcVar16;
  byte local_100 [8];
  undefined1 auStack_f8 [20];
  undefined1 local_e4;
  undefined1 local_e2;
  undefined1 local_e0;
  undefined1 local_de;
  undefined1 local_dc;
  undefined1 local_da;
  undefined2 local_bc;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined1 local_a0;
  undefined1 local_9e;
  undefined1 local_9c;
  undefined1 local_9a;
  undefined1 local_98;
  undefined1 local_96;
  undefined1 local_8e;
  undefined1 local_8c;
  byte local_8a;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  byte local_48;
  undefined1 local_47;
  char local_40;
  ushort local_38;
  ushort local_30;
  
  local_48 = FUN_80067748(param_4);
  iVar7 = FUN_80067664(*(undefined1 *)(param_3 + 2));
  uVar13 = 0;
  if (local_48 != 0) {
    do {
      do {
        iVar8 = rand();
        iVar12 = -1;
        bVar2 = *(byte *)(iVar7 + (iVar8 >> 8) % 5);
        uVar11 = 0;
        pbVar9 = local_100;
        if (uVar13 != 0) {
          do {
            if (*pbVar9 == bVar2) {
              iVar12 = 0;
            }
            uVar11 = uVar11 + 1;
            pbVar9 = local_100 + uVar11;
          } while (uVar11 != uVar13);
        }
      } while (iVar12 == 0);
      local_100[uVar13] = bVar2;
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_48);
    uVar13 = 0;
    if (local_48 != 0) {
      puVar14 = param_1 + 8;
      pcVar16 = (char *)(param_2 + 3);
      do {
        cVar15 = '\0';
        bVar2 = local_100[uVar13];
        local_40 = (char)uVar13 + '\x01';
        local_47 = GetChampionshipTrackIndex(bVar2,param_4);
        pbVar9 = (byte *)FUN_80067680(bVar2,param_4);
        cVar5 = HasTurboKit(bVar2);
        local_38 = (ushort)bVar2;
        if ((cVar5 == '\0') && (*(byte *)(param_3 + 2) == bVar2)) {
          uVar11 = *(byte *)(param_3 + 3) + 1;
          cVar15 = (char)uVar11 + (char)(uVar11 / 3) * -3;
        }
        pcVar16[-1] = bVar2;
        *pcVar16 = cVar15;
        pcVar16 = pcVar16 + 5;
        uVar10 = GsGetWorkBase();
        FUN_80066bd4(local_47,auStack_f8,uVar10);
        local_30 = (ushort)*pbVar9;
        bVar3 = pbVar9[1];
        uVar6 = FUN_80067888(bVar2);
        cVar5 = FUN_800678a4(bVar2);
        local_68._0_2_ = 0x8008;
        if (cVar5 != '\0') {
          local_68._0_2_ = 0x800a;
        }
        local_68 = CONCAT13(local_e2,CONCAT12(local_e4,(undefined2)local_68));
        uVar4 = CONCAT13(local_da,CONCAT21(CONCAT11(local_dc,local_de),local_e0));
        local_50 = CONCAT22(local_a6,local_a8);
        uStack_58 = CONCAT13(local_8c,CONCAT12(local_8e,(undefined2)uStack_58));
        local_4c = CONCAT22(local_30,local_bc) & 0xffffff;
        local_54 = CONCAT13(bVar3,CONCAT12(uVar6,(ushort)local_8a));
        local_60 = CONCAT22(CONCAT11(local_9a,local_9c),CONCAT11(local_9e,local_a0));
        local_5c._0_2_ = CONCAT11(local_96,local_98);
        *param_1 = 2;
        uVar13 = uVar13 + 1;
        puVar14[-7] = local_47;
        puVar14[-5] = cVar15;
        param_1 = param_1 + 0x28;
        puVar14[-3] = local_40;
        *(undefined2 *)(puVar14 + -2) = 0;
        puVar14[-6] = (undefined1)local_38;
        puVar1 = puVar14 + 3;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | local_68 >> (3 - uVar11) * 8;
        uVar11 = (uint)puVar14 & 3;
        *(uint *)(puVar14 + -uVar11) =
             *(uint *)(puVar14 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | local_68 << uVar11 * 8
        ;
        puVar1 = puVar14 + 7;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | uVar4 >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 4;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | uVar4 << uVar11 * 8;
        puVar1 = puVar14 + 0xb;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | local_60 >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 8;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | local_60 << uVar11 * 8;
        puVar1 = puVar14 + 0xf;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | local_5c >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 0xc;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | local_5c << uVar11 * 8;
        puVar1 = puVar14 + 0x13;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | uStack_58 >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 0x10;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | uStack_58 << uVar11 * 8
        ;
        puVar1 = puVar14 + 0x17;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | local_54 >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 0x14;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | local_54 << uVar11 * 8;
        puVar1 = puVar14 + 0x1b;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | local_50 >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 0x18;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | local_50 << uVar11 * 8;
        puVar1 = puVar14 + 0x1f;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & -1 << (uVar11 + 1) * 8 | local_4c >> (3 - uVar11) * 8;
        puVar1 = puVar14 + 0x1c;
        uVar11 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar11) =
             *(uint *)(puVar1 + -uVar11) & 0xffffffffU >> (4 - uVar11) * 8 | local_4c << uVar11 * 8;
        puVar14 = puVar14 + 0x28;
      } while (uVar13 != local_48);
    }
  }
  return param_1;
}


