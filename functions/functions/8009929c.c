/* Function: SpuSetReverbModeParam */
/* Address: 8009929c */

/* WARNING: Removing unreachable block (ram,0x80099600) */
/* WARNING: Removing unreachable block (ram,0x80099624) */
/* WARNING: Removing unreachable block (ram,0x8009969c) */
/* WARNING: Removing unreachable block (ram,0x80099708) */
/* WARNING: Removing unreachable block (ram,0x80099720) */

long SpuSetReverbModeParam(SpuReverbAttr *attr)

{
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  uint local_78;
  short local_74;
  short local_72;
  undefined2 local_66;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_54;
  short local_52;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  uint local_30;
  
  bVar1 = false;
  local_30 = 0;
  uVar8 = attr->mask;
  bVar3 = false;
  local_78 = 0;
  if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
    if ((((uVar8 & 8) != 0) && ((int)DAT_800c3cf4 < 9)) && (6 < (int)DAT_800c3cf4)) {
      bVar1 = true;
      puVar7 = &local_78;
      iVar4 = 0x43;
      puVar6 = &DAT_800c4310 + DAT_800c3cf4 * 0x44;
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
        *(undefined1 *)puVar7 = uVar2;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while (iVar4 != -1);
      local_78 = 0xc011c00;
      DAT_800c3cfc = attr->delay;
      local_60 = (short)((DAT_800c3cfc * 0x2000) / 0x7f) - local_74;
      local_40 = (short)((DAT_800c3cfc * 0x1000) / 0x7f);
      local_5e = local_40 - local_72;
      local_54 = local_52 + local_40;
      local_5c = local_5a + local_40;
      local_3e = local_3a + local_40;
      local_40 = local_3c + local_40;
    }
    if ((((uVar8 & 0x10) != 0) && ((int)DAT_800c3cf4 < 9)) && (6 < (int)DAT_800c3cf4)) {
      bVar3 = true;
      puVar7 = &local_78;
      if (!bVar1) {
        iVar4 = 0x43;
        puVar6 = &DAT_800c4310 + DAT_800c3cf4 * 0x44;
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while (iVar4 != -1);
        lVar5 = S_SRMP_OBJ_31C();
        return lVar5;
      }
      local_78 = local_78 | 0x80;
      DAT_800c3d00 = attr->feedback;
      local_66 = (undefined2)((DAT_800c3d00 * 0x8100) / 0x7f);
    }
    if ((uVar8 & 2) != 0) {
      *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x184) = (attr->depth).left;
      DAT_800c3cf8 = (attr->depth).left;
    }
    if ((uVar8 & 4) == 0) {
      if ((bVar1) || (bVar3)) {
        _spu_setReverbAttr(&local_78);
      }
      if (local_30 != 0) {
        SpuClearReverbWorkArea(DAT_800c3cf4);
      }
      return 0;
    }
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x186) = (attr->depth).right;
    DAT_800c3cfa = (attr->depth).right;
    lVar5 = S_SRMP_OBJ_424();
    return lVar5;
  }
  uVar8 = attr->mode;
  bVar1 = (uVar8 & 0x100) != 0;
  if (bVar1) {
    uVar8 = uVar8 & 0xfffffeff;
  }
  local_30 = (uint)bVar1;
  if ((9 < uVar8) || (iVar4 = _SpuIsInAllocateArea_((&DAT_800c42e0)[uVar8]), iVar4 != 0)) {
    lVar5 = S_SRMP_OBJ_4A4();
    return lVar5;
  }
  puVar7 = &local_78;
  iVar4 = 0x43;
  DAT_800c3cec = (&DAT_800c42e0)[uVar8];
  puVar6 = &DAT_800c4310 + uVar8 * 0x44;
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *(undefined1 *)puVar7 = uVar2;
    puVar7 = (uint *)((int)puVar7 + 1);
  } while (iVar4 != -1);
  DAT_800c3cf4 = uVar8;
  if (uVar8 == 7) {
    DAT_800c3d00 = 0x7f;
    DAT_800c3cfc = 0x7f;
    lVar5 = S_SRMP_OBJ_168();
    return lVar5;
  }
  if (uVar8 == 8) {
    DAT_800c3d00 = 0;
    DAT_800c3cfc = 0x7f;
    lVar5 = S_SRMP_OBJ_168();
    return lVar5;
  }
  lVar5 = S_SRMP_OBJ_158();
  return lVar5;
}


