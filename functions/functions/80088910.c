/* Function: FUN_80088910 */
/* Address: 80088910 */

undefined1 * FUN_80088910(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte *pbVar15;
  byte local_58 [8];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int local_30;
  
  bVar5 = FUN_80067768(param_4);
  local_30 = FUN_800676a4(param_4);
  uVar14 = 0;
  if (bVar5 != 0) {
    do {
      do {
        iVar8 = rand();
        iVar11 = -1;
        uVar9 = 0;
        uVar10 = (uint)(iVar8 >> 8) % 3;
        pbVar15 = local_58;
        if (uVar14 != 0) {
          do {
            if (*pbVar15 == uVar10) {
              iVar11 = 0;
            }
            uVar9 = uVar9 + 1;
            pbVar15 = local_58 + uVar9;
          } while (uVar9 != uVar14);
        }
      } while (iVar11 == 0);
      local_58[uVar14] = (byte)uVar10;
      uVar14 = uVar14 + 1;
    } while (uVar14 != bVar5);
    uVar14 = 0;
    if (bVar5 != 0) {
      pbVar15 = local_58;
      puVar13 = param_1 + 8;
      do {
        uVar9 = 0;
        uVar12 = 0;
        cVar2 = *(char *)((uint)*pbVar15 * 2 + local_30);
        uVar6 = GetChampionshipTrackIndex(cVar2,param_4);
        cVar7 = FUN_80067854(cVar2);
        if (cVar7 != '\0') {
          if (*(char *)(param_2 + 2) == cVar2) {
            uVar9 = (uint)(*(char *)(param_2 + 3) == '\0');
          }
          if ((*(char *)(param_3 + 2) == cVar2) && (*(byte *)(param_3 + 3) == uVar9)) {
            uVar9 = (uVar9 + 1) % 3;
          }
          uVar12 = (undefined1)uVar9;
          if ((*(char *)(param_2 + 2) == cVar2) && (*(byte *)(param_2 + 3) == uVar9)) {
            uVar12 = (undefined1)((uVar9 + 1) % 3);
          }
        }
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        uVar14 = uVar14 + 1;
        uVar4 = *(undefined1 *)((uint)bVar3 * 2 + local_30 + 1);
        *param_1 = 3;
        param_1 = param_1 + 0x28;
        puVar13[-7] = uVar6;
        puVar13[-5] = uVar12;
        puVar13[-6] = cVar2;
        *(undefined2 *)(puVar13 + -2) = 0;
        puVar13[-3] = uVar4;
        puVar1 = puVar13 + 3;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_50 >> (3 - uVar9) * 8;
        uVar9 = (uint)puVar13 & 3;
        *(uint *)(puVar13 + -uVar9) =
             *(uint *)(puVar13 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_50 << uVar9 * 8;
        puVar1 = puVar13 + 7;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_4c >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 4;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_4c << uVar9 * 8;
        puVar1 = puVar13 + 0xb;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_48 >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 8;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_48 << uVar9 * 8;
        puVar1 = puVar13 + 0xf;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_44 >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 0xc;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_44 << uVar9 * 8;
        puVar1 = puVar13 + 0x13;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_40 >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 0x10;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_40 << uVar9 * 8;
        puVar1 = puVar13 + 0x17;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_3c >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 0x14;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_3c << uVar9 * 8;
        puVar1 = puVar13 + 0x1b;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_38 >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 0x18;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_38 << uVar9 * 8;
        puVar1 = puVar13 + 0x1f;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & -1 << (uVar9 + 1) * 8 | uStack_34 >> (3 - uVar9) * 8;
        puVar1 = puVar13 + 0x1c;
        uVar9 = (uint)puVar1 & 3;
        *(uint *)(puVar1 + -uVar9) =
             *(uint *)(puVar1 + -uVar9) & 0xffffffffU >> (4 - uVar9) * 8 | uStack_34 << uVar9 * 8;
        puVar13 = puVar13 + 0x28;
      } while (uVar14 != bVar5);
    }
  }
  return param_1;
}


