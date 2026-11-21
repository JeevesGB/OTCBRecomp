/* Function: InitSoundTest */
/* Address: 80054a68 */

/* WARNING: Removing unreachable block (ram,0x80054aa0) */
/* WARNING: Removing unreachable block (ram,0x80054aa4) */
/* WARNING: Removing unreachable block (ram,0x80054af0) */

void InitSoundTest(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  CdlATV local_10 [2];
  
  puVar2 = &DAT_800b5118;
  DAT_800cd47c = &DAT_800cd338;
  DAT_800cd338 = 0;
  puVar1 = (uint *)&DAT_800cd368;
  do {
    puVar3 = puVar1;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    uVar4 = uRam800b5198;
    puVar2 = puVar2 + 4;
    puVar1 = puVar3 + 4;
  } while (puVar2 != (uint *)0x800b5198);
  uVar5 = (int)puVar3 + 0x13U & 3;
  puVar1 = (uint *)(((int)puVar3 + 0x13U) - uVar5);
  *puVar1 = *puVar1 & -1 << (uVar5 + 1) * 8 | uRam800b5198 >> (3 - uVar5) * 8;
  puVar3[4] = uVar4;
  DAT_800cd360 = &DAT_800cd368;
  SsSetSerialAttr('\0','\0','\x01');
  local_10[0].val0 = '\x7f';
  local_10[0].val1 = '\0';
  local_10[0].val2 = '\x7f';
  local_10[0].val3 = '\0';
  CdMix(local_10);
  return;
}


