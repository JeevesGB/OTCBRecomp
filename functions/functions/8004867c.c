/* Function: FUN_8004867c */
/* Address: 8004867c */

void FUN_8004867c(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  puVar7 = &DAT_1f800054;
  iVar6 = param_1;
  do {
    uVar3 = (uint)(short)puVar7[4];
    uVar2 = uVar3 & 0xc00;
    if (uVar2 == 0x400) {
      iVar5 = 0;
LAB_800486e8:
      uVar3 = -uVar3 & 0x3ff;
    }
    else {
      iVar5 = 0;
      if (0x400 < uVar2) {
        if (uVar2 == 0x800) {
          iVar5 = -1;
          uVar3 = uVar3 & 0x3ff;
          goto LAB_800486f0;
        }
        if (uVar2 == 0xc00) {
          iVar5 = -1;
          goto LAB_800486e8;
        }
      }
      uVar3 = uVar3 & 0x3ff;
    }
LAB_800486f0:
    if (uVar3 < 0x240) {
      iVar4 = (int)*(short *)(&DAT_800aeb8c + (uVar3 / 0x18) * 2) +
              (int)(((int)*(short *)(&DAT_800aeb8c + (uVar3 / 0x18 + 1) * 2) -
                    (int)*(short *)(&DAT_800aeb8c + (uVar3 / 0x18) * 2)) * (uVar3 % 0x18)) / 0x18;
    }
    else {
      iVar4 = (int)DAT_800aebbc +
              (int)(((int)DAT_800aebbe - (int)DAT_800aebbc) * (uVar3 - 0x240)) / 0x1c0;
    }
    if (iVar5 != 0) {
      iVar4 = -iVar4;
    }
    uVar1 = (undefined2)(*(short *)(iVar6 + 0x3b4) + iVar4 >> 1);
    *(undefined2 *)(iVar6 + 0x3b4) = uVar1;
    iVar6 = iVar6 + 2;
    puVar7[0x3a] = uVar1;
    puVar7 = puVar7 + 1;
    if (param_1 + 8 <= iVar6) {
      return;
    }
  } while( true );
}


