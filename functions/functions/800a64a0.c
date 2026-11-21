/* Function: BIOS_OBJ_64 */
/* Address: 800a64a0 */

undefined4 BIOS_OBJ_64(byte *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint unaff_s1;
  byte in_stack_00000010;
  byte bStack00000018;
  byte bStack00000019;
  
  while (iVar5 = 0, in_stack_00000010 != (*param_1 & 7)) {
    in_stack_00000010 = *param_1 & 7;
  }
  do {
    puVar3 = (undefined1 *)((int)&stack0x00000018 + iVar5);
    iVar6 = iVar5;
    if ((*PTR_CDROM_REG0_800cb898 & 0x20) == 0) break;
    iVar5 = iVar5 + 1;
    *puVar3 = *PTR_CDROM_REG1_800cb89c;
    iVar6 = iVar5;
  } while (iVar5 < 8);
  for (; iVar5 < 8; iVar5 = iVar5 + 1) {
    *(undefined1 *)((int)&stack0x00000018 + iVar5) = 0;
  }
  *PTR_CDROM_REG0_800cb898 = 1;
  *PTR_CDROM_REG3_800cb8a4 = 7;
  *PTR_CDROM_REG2_800cb8a0 = 7;
  if ((in_stack_00000010 != 3) || (*(int *)(&DAT_800cb798 + (uint)DAT_800cb5f1 * 4) != 0)) {
    if (((DAT_800cb5e0 & 0x10) == 0) && ((bStack00000018 & 0x10) != 0)) {
      DAT_800cb5e8 = DAT_800cb5e8 + 1;
    }
    DAT_800cb5e0 = (uint)bStack00000018;
    DAT_800cb5e4 = (uint)bStack00000019;
    unaff_s1 = DAT_800cb5e0 & 0x1d;
  }
  if (((in_stack_00000010 == 5) && (0 < DAT_800cb5dc)) && (printf("DiskError: "), 0 < DAT_800cb5dc))
  {
    printf("com=%s,code=(%02x:%02x)\n",(&PTR_s_CdlSync_800cb5f8)[DAT_800cb5f1],DAT_800cb5e0,
           DAT_800cb5e4);
  }
  switch(in_stack_00000010) {
  case 1:
    if ((unaff_s1 != 0) && (iVar6 == 1)) {
      unaff_s1 = 0;
    }
    DAT_800cb8b1 = 1;
    if (unaff_s1 != 0) {
      DAT_800cb8b1 = 5;
    }
    puVar3 = &DAT_800d0ff0;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    *PTR_CDROM_REG0_800cb898 = 0;
    *PTR_CDROM_REG3_800cb8a4 = 0;
    uVar2 = BIOS_OBJ_548();
    return uVar2;
  case 2:
    DAT_800cb8b0 = 2;
    if (unaff_s1 != 0) {
      DAT_800cb8b0 = 5;
    }
    puVar3 = &DAT_800d0fe8;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_OBJ_548();
    return uVar2;
  case 3:
    break;
  case 4:
    puVar3 = &DAT_800d0ff8;
    DAT_800cb8b2 = 4;
    puVar4 = (undefined4 *)&stack0x00000018;
    DAT_800cb8b1 = 4;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    puVar3 = &DAT_800d0ff0;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_OBJ_548();
    return uVar2;
  case 5:
    puVar3 = &DAT_800d0fe8;
    DAT_800cb8b1 = 5;
    puVar4 = (undefined4 *)&stack0x00000018;
    DAT_800cb8b0 = 5;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    puVar3 = &DAT_800d0ff0;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_OBJ_548();
    return uVar2;
  default:
    puts("CDROM: unknown intr");
    printf("(%d)\n",(uint)in_stack_00000010);
    return 0;
  }
  if (unaff_s1 != 0) {
    DAT_800cb8b0 = 5;
    puVar3 = &DAT_800d0fe8;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_OBJ_548();
    return uVar2;
  }
  if (*(int *)(&DAT_800cb698 + (uint)DAT_800cb5f1 * 4) == 0) {
    DAT_800cb8b0 = 2;
    puVar3 = &DAT_800d0fe8;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_OBJ_548();
    return uVar2;
  }
  DAT_800cb8b0 = 3;
  puVar3 = &DAT_800d0fe8;
  puVar4 = (undefined4 *)&stack0x00000018;
  iVar5 = 7;
  do {
    uVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    iVar5 = iVar5 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar5 != -1);
  uVar2 = BIOS_OBJ_548();
  return uVar2;
}


