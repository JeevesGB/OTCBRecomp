/* Function: _SsInitSoundSeq */
/* Address: 8009170c */

/* WARNING: Removing unreachable block (ram,0x800918b0) */

undefined4 _SsInitSoundSeq(ushort param_1,undefined1 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  short sVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  iVar9 = 0;
  puVar14 = *(undefined4 **)((int)&DAT_800cdee8 + ((int)((uint)param_1 << 0x10) >> 0xe));
  *(undefined1 *)((int)puVar14 + 0x26) = param_2;
  *(undefined2 *)(puVar14 + 0x14) = 0;
  *(undefined1 *)(puVar14 + 6) = 0;
  *(undefined1 *)((int)puVar14 + 0x19) = 0;
  *(undefined1 *)((int)puVar14 + 0x1e) = 0;
  *(undefined1 *)((int)puVar14 + 0x1a) = 0;
  *(undefined1 *)((int)puVar14 + 0x1b) = 0;
  *(undefined1 *)((int)puVar14 + 0x1f) = 0;
  *(undefined1 *)((int)puVar14 + 0x17) = 0;
  puVar14[0x21] = 0;
  puVar14[0x22] = 0;
  puVar14[0x23] = 0;
  *(undefined2 *)((int)puVar14 + 0x56) = 0;
  *(undefined1 *)((int)puVar14 + 0x21) = 0;
  *(undefined1 *)(puVar14 + 8) = 1;
  *(undefined1 *)(puVar14 + 5) = 0;
  puVar14[0x24] = 0;
  *(undefined1 *)(puVar14 + 7) = 0;
  *(undefined1 *)((int)puVar14 + 0x1d) = 0;
  *(undefined1 *)((int)puVar14 + 0x15) = 0;
  *(undefined1 *)((int)puVar14 + 0x16) = 0;
  *(undefined2 *)(puVar14 + 0x20) = 0;
  *(undefined1 *)(puVar14 + 9) = 0;
  *(undefined1 *)((int)puVar14 + 0x25) = 0;
  puVar12 = puVar14;
  do {
    *(char *)((int)puVar14 + iVar9 + 0x37) = (char)iVar9;
                    /* Possible PsyQ macro: setLineF2() */
    *(undefined1 *)((int)puVar14 + iVar9 + 0x27) = 0x40;
                    /* Possible PsyQ macro: setSprt16() + setSemiTrans(sprt16, 1) +
                       setShadeTex(sprt16, 1) */
    *(undefined2 *)(puVar12 + 0x18) = 0x7f;
    iVar9 = iVar9 + 1;
    puVar12 = (undefined4 *)((int)puVar12 + 2);
  } while (iVar9 < 0x10);
  *(undefined2 *)((int)puVar14 + 0x52) = 1;
  *puVar14 = param_3;
  if ((*param_3 != 'S') && (*param_3 != 'p')) {
    printf("This is an old SEQ Data Format.\n");
    uVar6 = SEQINIT_OBJ_334();
    return uVar6;
  }
  *puVar14 = param_3 + 7;
  cVar1 = param_3[7];
  *puVar14 = param_3 + 8;
  if (cVar1 != '\x01') {
    printf("This is not SEQ Data.\n");
    uVar6 = SEQINIT_OBJ_334();
    return uVar6;
  }
  cVar1 = param_3[8];
  *puVar14 = param_3 + 9;
  cVar2 = param_3[9];
  *puVar14 = param_3 + 10;
  pbVar10 = (byte *)*puVar14;
  *(ushort *)(puVar14 + 0x14) = CONCAT11(cVar1,cVar2);
  bVar3 = *pbVar10;
  *puVar14 = pbVar10 + 1;
  bVar4 = pbVar10[1];
  *puVar14 = pbVar10 + 2;
  uVar7 = (uint)pbVar10[2] | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
  if (uVar7 == 0) {
    trap(0x1c00);
  }
  *puVar14 = pbVar10 + 3;
  puVar14[0x23] = uVar7;
  if (60000000U % uVar7 <= uVar7 >> 1) {
    puVar14[0x23] = 60000000 / uVar7;
    puVar8 = (undefined1 *)*puVar14;
    puVar14[0x25] = puVar14[0x23];
    uVar5 = *puVar8;
    *puVar14 = puVar8 + 1;
    *(undefined1 *)(puVar14 + 9) = uVar5;
    uVar5 = puVar8[1];
    *puVar14 = puVar8 + 2;
    *(undefined1 *)((int)puVar14 + 0x25) = uVar5;
    uVar6 = _SsReadDeltaValue((int)(short)param_1,0);
    uVar7 = (int)*(short *)(puVar14 + 0x14) * puVar14[0x23];
    puVar14[2] = *puVar14;
    iVar9 = DAT_800cdee4;
    puVar14[0x21] = uVar6;
    puVar14[0x24] = uVar6;
    puVar14[4] = 0;
    puVar14[3] = *puVar14;
    puVar14[1] = *puVar14;
    uVar13 = iVar9 * 0x3c;
    if (uVar13 <= uVar7 * 10) {
      if (uVar13 == 0) {
        trap(0x1c00);
      }
      if (uVar13 == 0) {
        trap(0x1c00);
      }
      *(undefined2 *)((int)puVar14 + 0x52) = 0xffff;
      sVar11 = (short)((uint)((int)*(short *)(puVar14 + 0x14) * puVar14[0x23] * 10) / uVar13);
      *(short *)(puVar14 + 0x15) = sVar11;
      if ((uint)(iVar9 * 0x1e) <
          (uint)((int)*(short *)(puVar14 + 0x14) * puVar14[0x23] * 10) % uVar13) {
        *(short *)(puVar14 + 0x15) = sVar11 + 1;
      }
      *(undefined2 *)((int)puVar14 + 0x56) = *(undefined2 *)(puVar14 + 0x15);
      return 0;
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    *(short *)((int)puVar14 + 0x52) = (short)((uint)(iVar9 * 600) / uVar7);
    uVar6 = SEQINIT_OBJ_324();
    return uVar6;
  }
  puVar14[0x23] = 60000000 / uVar7 + 1;
  uVar6 = SEQINIT_OBJ_1D8();
  return uVar6;
}


