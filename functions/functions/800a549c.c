/* Function: DecDCTvlc2 */
/* Address: 800a549c */

int DecDCTvlc2(u_long *bs,u_long *buf,u_short *table)

{
  bool bVar1;
  u_long uVar2;
  u_long *puVar3;
  undefined2 *puVar4;
  u_short *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  u_long *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (bs != (u_long *)0x0) {
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    puVar17 = (undefined2 *)((int)buf + DAT_800ca6ec * 2);
    uVar6 = *bs;
    iVar15 = (uint)(ushort)bs[1] << 10;
    uVar16 = (uint)(-1 < (int)(*(ushort *)((int)bs + 6) - 3));
    puVar9 = bs + 3;
    uVar7 = CONCAT22((short)bs[2],*(undefined2 *)((int)bs + 10));
    uVar8 = 0;
    *buf = uVar6;
    DAT_800ca714 = buf + (uVar6 & 0xffff) + 1;
    puVar10 = (undefined2 *)((int)buf + 2);
    goto VLC_C_OBJ_F4;
  }
  puVar17 = DAT_800ca6f4 + DAT_800ca6ec;
  uVar6 = DAT_800ca6f8;
  uVar8 = DAT_800ca6fc;
  puVar9 = DAT_800ca6f0;
  puVar4 = DAT_800ca6f4;
  iVar15 = DAT_800ca700;
  uVar16 = DAT_800ca704;
  iVar18 = DAT_800ca708;
  iVar19 = DAT_800ca70c;
  iVar20 = DAT_800ca710;
VLC_C_OBJ_210:
  do {
    while( true ) {
      puVar11 = puVar4;
      uVar12 = *(uint *)(table + (uVar6 >> 0x13) * 4 + 0x400);
      if (uVar12 == 0) {
        uVar6 = uVar6 << 8;
        uVar7 = uVar8 + 8;
        uVar8 = uVar7 & 0xf;
        if ((uVar7 & 0x10) != 0) {
          uVar2 = *puVar9;
          puVar9 = (u_long *)((int)puVar9 + 2);
          uVar6 = uVar6 | (uint)(ushort)uVar2 << uVar8;
        }
        uVar12 = *(uint *)(table + (uVar6 >> 0x17) * 2 + 0x8400);
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint *)((int)(table + (uVar6 >> 0x13) * 4 + 0x400) + 4);
      }
      uVar6 = uVar6 << (uVar12 & 0x1f);
      uVar7 = uVar8 + (uVar12 & 0xff);
      uVar8 = uVar7 & 0xf;
      if ((uVar7 & 0x10) != 0) {
        uVar2 = *puVar9;
        puVar9 = (u_long *)((int)puVar9 + 2);
        uVar6 = uVar6 | (uint)(ushort)uVar2 << uVar8;
      }
      puVar10 = puVar11;
      if (uVar12 >> 0x10 != 0x7c1f) break;
VLC_C_OBJ_2F4:
      *puVar10 = (short)(uVar6 >> 0x10);
      uVar2 = *puVar9;
      puVar9 = (u_long *)((int)puVar9 + 2);
      uVar6 = uVar6 << 0x10 | (uint)(ushort)uVar2 << uVar8;
      puVar4 = puVar10 + 1;
    }
    *puVar11 = (short)(uVar12 >> 0x10);
    uVar7 = uVar6;
    if (uVar12 >> 0x10 != 0xfe00) {
      puVar10 = puVar11 + 1;
      puVar4 = puVar10;
      if (uVar14 == 0) goto VLC_C_OBJ_210;
      if ((uVar14 & 0xffff) == 0x7c1f) goto VLC_C_OBJ_2F4;
      *puVar10 = (short)uVar14;
      if ((uVar14 & 0xffff) != 0xfe00) {
        uVar12 = uVar14 >> 0x10;
        puVar10 = puVar11 + 2;
        puVar4 = puVar10;
        if (uVar12 == 0) goto VLC_C_OBJ_210;
        if (uVar12 == 0x7c1f) goto VLC_C_OBJ_2F4;
        *puVar10 = (short)(uVar14 >> 0x10);
        if (uVar12 != 0xfe00) {
          puVar4 = puVar11 + 3;
          goto VLC_C_OBJ_210;
        }
      }
    }
VLC_C_OBJ_F4:
    puVar3 = DAT_800ca714;
    if (uVar16 == 0) {
      if (uVar7 >> 0x16 == 0x1ff) goto VLC_C_OBJ_328;
      uVar6 = uVar7 << 10;
      uVar12 = uVar8 + 10;
      uVar8 = uVar12 & 0xf;
      if ((uVar12 & 0x10) != 0) {
        uVar2 = *puVar9;
        puVar9 = (u_long *)((int)puVar9 + 2);
        uVar6 = uVar6 | (uint)(ushort)uVar2 << uVar8;
      }
      puVar10[1] = (ushort)iVar15 | (ushort)(uVar7 >> 0x16);
    }
    else {
      if (uVar7 >> 0x16 == 0x3ff) {
VLC_C_OBJ_328:
        while (puVar10 = puVar10 + 1, (int)puVar10 - (int)puVar3 < 0) {
          *puVar10 = 0xfe00;
        }
        return 0;
      }
      puVar5 = table + 0x200;
      if (-1 < (int)(uVar16 - 3)) {
        puVar5 = table;
      }
      uVar12 = (uint)puVar5[(uVar7 >> 0x18) * 2];
      uVar13 = (uint)(puVar5 + (uVar7 >> 0x18) * 2)[1];
      uVar14 = 0;
      uVar6 = uVar7 << (uVar12 & 0x1f);
      if (uVar13 != 0) {
        uVar14 = uVar6 >> (0x20 - uVar13 & 0x1f);
        bVar1 = -1 < (int)uVar6;
        uVar6 = uVar6 << (uVar13 & 0x1f);
        if (bVar1) {
          uVar14 = uVar14 - (0xffffffffU >> (0x20 - uVar13 & 0x1f));
        }
        uVar8 = uVar8 + uVar13;
      }
      uVar12 = uVar8 + uVar12;
      uVar8 = uVar12 & 0xf;
      if ((uVar12 & 0x10) != 0) {
        uVar2 = *puVar9;
        puVar9 = (u_long *)((int)puVar9 + 2);
        uVar6 = uVar6 | (uint)(ushort)uVar2 << uVar8;
      }
      uVar7 = iVar20 + uVar14;
      if ((int)(uVar16 - 2) < 1) {
        uVar7 = iVar19 + uVar14;
        if (uVar16 == 2) {
          iVar19 = iVar19 + uVar14;
        }
        else {
          uVar7 = iVar18 + uVar14;
          iVar18 = iVar18 + uVar14;
        }
      }
      else {
        iVar20 = iVar20 + uVar14;
      }
      bVar1 = uVar16 == 6;
      puVar10[1] = (ushort)iVar15 | (ushort)((uVar7 & 0xff) << 2);
      uVar16 = uVar16 + 1;
      if (bVar1) {
        uVar16 = 1;
      }
    }
    puVar4 = puVar10 + 2;
    if (-1 < (int)puVar10 + (2 - (int)puVar17)) {
      DAT_800ca6f0 = puVar9;
      DAT_800ca6f4 = puVar10 + 2;
      DAT_800ca6f8 = uVar6;
      DAT_800ca6fc = uVar8;
      DAT_800ca700 = iVar15;
      DAT_800ca704 = uVar16;
      DAT_800ca708 = iVar18;
      DAT_800ca70c = iVar19;
      DAT_800ca710 = iVar20;
      return 1;
    }
  } while( true );
}


