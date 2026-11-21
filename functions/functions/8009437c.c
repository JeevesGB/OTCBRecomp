/* Function: _SsVmFlush */
/* Address: 8009437c */

void _SsVmFlush(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  short *psVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  SpuVoiceAttr local_68;
  
  DAT_800cee64 = DAT_800cee64 + 1 & 0xf;
  (&DAT_800cee68)[DAT_800cee64] = 0;
  uVar4 = 0;
  if ('\0' < DAT_800cefa4) {
    psVar10 = &DAT_800ce786;
    iVar6 = 0;
    do {
      SpuGetVoiceEnvelope(uVar4,psVar10);
      if (*(short *)((int)&DAT_800ce786 + iVar6) == 0) {
        (&DAT_800cee68)[DAT_800cee64] = (&DAT_800cee68)[DAT_800cee64] | 1 << (uVar4 & 0x1f);
      }
      psVar10 = psVar10 + 0x1c;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x38;
    } while ((int)uVar4 < (int)DAT_800cefa4);
  }
  iVar6 = 0;
  if (DAT_800cefe0 == '\0') {
    uVar4 = 0xffffffff;
    puVar2 = &DAT_800cee68;
    do {
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 & *puVar2;
      puVar2 = puVar2 + 1;
    } while (iVar6 < 0xf);
    uVar5 = 0;
    if ('\0' < DAT_800cefa4) {
      pcVar7 = &DAT_800ce79d;
      do {
        uVar3 = 1 << (uVar5 & 0x1f);
        if ((uVar4 & uVar3) != 0) {
          if (*pcVar7 == '\x02') {
            uVar1 = 0;
            if (0xf < (int)uVar5) {
              uVar3 = 0;
              uVar1 = 1 << (uVar5 - 0x10 & 0x1f);
            }
            FUN_80098d7c(0,(uVar1 & 0xff) << 0x10 | (int)(short)uVar3);
          }
          *pcVar7 = '\0';
        }
        uVar5 = uVar5 + 1;
        pcVar7 = pcVar7 + 0x38;
      } while ((int)uVar5 < (int)DAT_800cefa4);
    }
  }
  iVar6 = 0;
  DAT_800ce770 = DAT_800ce770 & ~DAT_800ceea8;
  iVar8 = 0;
  DAT_800ce772 = DAT_800ce772 & ~DAT_800ceeaa;
  do {
    if (*(short *)((int)&DAT_800ce79e + iVar8) != 0) {
      (*DAT_800cee60)(iVar6);
    }
    if (*(short *)((int)&DAT_800ce7aa + iVar8) != 0) {
      (*DAT_800cecd8)(iVar6);
    }
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0x38;
  } while (iVar6 < 0x18);
  uVar4 = 0;
  pbVar9 = &DAT_800cecc0;
  psVar10 = &DAT_800cece0;
  puVar15 = &DAT_800cecea;
  puVar14 = &DAT_800cece8;
  puVar13 = &DAT_800cece6;
  puVar12 = &DAT_800cece4;
  psVar11 = &DAT_800cece2;
  do {
    local_68.voice = 1 << (uVar4 & 0x1f);
    local_68.mask = 0;
    if ((*pbVar9 & 1) != 0) {
      local_68.mask = 3;
      local_68.volume.left = *psVar10;
      local_68.volume.right = *psVar11;
    }
    if ((*pbVar9 & 4) != 0) {
      local_68.mask = local_68.mask | 0x10;
      local_68.pitch = *puVar12;
    }
    if ((*pbVar9 & 8) != 0) {
      local_68.mask = local_68.mask | 0x80;
      local_68.addr = (uint)*puVar13 << 3;
    }
    if ((*pbVar9 & 0x10) != 0) {
      local_68.mask = local_68.mask | 0x60000;
      local_68.adsr1 = *puVar14;
      local_68.adsr2 = *puVar15;
    }
    if (local_68.mask != 0) {
      SpuSetVoiceAttr(&local_68);
    }
    *pbVar9 = 0;
    pbVar9 = pbVar9 + 1;
    puVar15 = puVar15 + 8;
    puVar14 = puVar14 + 8;
    puVar13 = puVar13 + 8;
    puVar12 = puVar12 + 8;
    psVar11 = psVar11 + 8;
    uVar4 = uVar4 + 1;
    psVar10 = psVar10 + 8;
  } while ((int)uVar4 < 0x18);
  SpuSetKey(0,(uint)CONCAT12((undefined1)DAT_800ceeaa,DAT_800ceea8));
  SpuSetKey(1,(uint)CONCAT12((undefined1)DAT_800ce772,DAT_800ce770));
  FUN_80099ccc(8,(uint)CONCAT12((undefined1)DAT_800ce776,DAT_800ce774));
  FUN_80098d7c(8,(uint)CONCAT12((undefined1)DAT_800ce77a,DAT_800ce778));
  DAT_800ceea8 = 0;
  DAT_800ceeaa = 0;
  DAT_800ce770 = 0;
  DAT_800ce772 = 0;
  DAT_800ce778 = 0;
  DAT_800ce77a = 0;
  return;
}


