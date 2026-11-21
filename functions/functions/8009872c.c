/* Function: SpuMalloc */
/* Address: 8009872c */

/* WARNING: Removing unreachable block (ram,0x80098864) */
/* WARNING: Removing unreachable block (ram,0x80098928) */
/* WARNING: Removing unreachable block (ram,0x8009893c) */
/* WARNING: Removing unreachable block (ram,0x8009895c) */
/* WARNING: Removing unreachable block (ram,0x80098998) */
/* WARNING: Removing unreachable block (ram,0x80098888) */
/* WARNING: Removing unreachable block (ram,0x800988a0) */
/* WARNING: Removing unreachable block (ram,0x800988b8) */

long SpuMalloc(long size)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_800c3ce8 == 0) {
    lVar3 = S_M_M_OBJ_54();
    return lVar3;
  }
  if ((size & ~DAT_800c3d80) != 0) {
    size = size + DAT_800c3d80;
  }
  uVar2 = DAT_800c3d78 & 0x1f;
  uVar1 = DAT_800c3d78 & 0x1f;
  if ((*DAT_800c3db8 & 0x40000000) != 0) {
    lVar3 = S_M_M_OBJ_12C();
    return lVar3;
  }
  _spu_gcSPU();
  puVar4 = DAT_800c3db8;
  if (0 < DAT_800c3db0) {
    do {
      if (((*puVar4 & 0x40000000) != 0) ||
         (((*puVar4 & 0x80000000) != 0 && ((uint)((size >> uVar2) << uVar1) <= puVar4[1])))) {
        lVar3 = S_M_M_OBJ_12C();
        return lVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < DAT_800c3db0);
  }
  return -1;
}


