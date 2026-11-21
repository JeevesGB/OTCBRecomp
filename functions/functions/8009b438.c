/* Function: INTR_OBJ_26C */
/* Address: 8009b438 */

void INTR_OBJ_26C(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (DAT_800c4664 == 0) {
    printf("unexpected interrupt(%04x)\n",(uint)*(ushort *)PTR_I_STAT_800c56f0);
    ReturnFromException();
  }
  DAT_800c4666 = 1;
  uVar2 = (uint)(*(ushort *)PTR_I_MASK_800c56f4 & DAT_800c4694 & *(ushort *)PTR_I_STAT_800c56f0);
  if (uVar2 != 0) {
    do {
      puVar5 = &DAT_800c4668;
      for (uVar4 = 0; (uVar2 != 0 && ((int)uVar4 < 0xb)); uVar4 = uVar4 + 1) {
        if ((uVar2 & 1) != 0) {
          *(ushort *)PTR_I_STAT_800c56f0 = ~(ushort)(1 << (uVar4 & 0x1f));
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)();
          }
        }
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 >> 1;
      }
      uVar2 = (uint)(*(ushort *)PTR_I_MASK_800c56f4 & DAT_800c4694 & *(ushort *)PTR_I_STAT_800c56f0)
      ;
    } while (uVar2 != 0);
  }
  if ((*(ushort *)PTR_I_STAT_800c56f0 & *(ushort *)PTR_I_MASK_800c56f4) == 0) {
    DAT_800c56fc = 0;
  }
  else {
    iVar3 = DAT_800c56fc + 1;
    bVar1 = 0x800 < DAT_800c56fc;
    DAT_800c56fc = iVar3;
    if (bVar1) {
      printf("intr timeout(%04x:%04x)\n",(uint)*(ushort *)PTR_I_STAT_800c56f0,
             (uint)*(ushort *)PTR_I_MASK_800c56f4);
      DAT_800c56fc = 0;
      *(undefined2 *)PTR_I_STAT_800c56f0 = 0;
      INTR_OBJ_410();
      return;
    }
  }
  DAT_800c4666 = 0;
  ReturnFromException();
  return;
}


