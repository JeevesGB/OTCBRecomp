/* Function: BIOS_OBJ_D70 */
/* Address: 800a71ac */

undefined4 BIOS_OBJ_D70(void)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int in_v0;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  byte *unaff_s2;
  int unaff_s3;
  undefined1 *unaff_s4;
  int unaff_s5;
  undefined1 *unaff_s6;
  
  while( true ) {
    if (in_v0 != 0) {
      return 0xffffffff;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_800cb898;
      while( true ) {
        uVar5 = BIOS_OBJ_0();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_800cb5d8 != (code *)0x0)) {
          (*DAT_800cb5d8)(*unaff_s4,&DAT_800d0ff0);
        }
        if (((uVar5 & 2) != 0) && (DAT_800cb5d4 != (code *)0x0)) {
          (*DAT_800cb5d4)(*unaff_s2,&DAT_800d0fe8);
        }
      }
      *PTR_CDROM_REG0_800cb898 = bVar1 & 3;
    }
    if (*unaff_s2 != 0) break;
    iVar4 = VSync(-1);
    if ((DAT_800d1000 < iVar4) ||
       (iVar4 = DAT_800d1004 + 1, bVar3 = 0x3c0000 < DAT_800d1004, DAT_800d1004 = iVar4, bVar3)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800d1008,
             *(undefined4 *)((uint)DAT_800cb5f1 * 4 + unaff_s5),
             *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
      CD_flush();
      uVar6 = BIOS_OBJ_D70();
      return uVar6;
    }
    in_v0 = 0;
  }
  puVar7 = &DAT_800d0fe8;
  iVar4 = 7;
  if (unaff_s6 != (undefined1 *)0x0) {
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
      *unaff_s6 = uVar2;
      unaff_s6 = unaff_s6 + 1;
    } while (iVar4 != -1);
  }
  uVar6 = 0;
  if (DAT_800cb8b0 == '\x05') {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


