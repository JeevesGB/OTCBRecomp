/* Function: BIOS_OBJ_944 */
/* Address: 800a6d80 */

undefined4 BIOS_OBJ_944(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte unaff_s1;
  byte *unaff_s2;
  undefined1 *unaff_s3;
  char *unaff_s4;
  int unaff_s5;
  undefined1 *unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  do {
    while( true ) {
      uVar3 = BIOS_OBJ_0();
      if (uVar3 == 0) break;
      if (((uVar3 & 4) != 0) && (DAT_800cb5d8 != (code *)0x0)) {
        (*DAT_800cb5d8)(*unaff_s6,&DAT_800d0ff0);
      }
      if (((uVar3 & 2) != 0) && (DAT_800cb5d4 != (code *)0x0)) {
        (*DAT_800cb5d4)(*unaff_s2,&DAT_800d0fe8);
      }
    }
    *PTR_CDROM_REG0_800cb898 = unaff_s1;
    do {
      if (*unaff_s4 != '\0') {
        unaff_s2[2] = 0;
        puVar6 = &DAT_800d0ff8;
        if (unaff_s3 != (undefined1 *)0x0) {
          iVar5 = 7;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
            *unaff_s3 = uVar1;
            unaff_s3 = unaff_s3 + 1;
          } while (iVar5 != -1);
          uVar4 = BIOS_OBJ_A74();
          return uVar4;
        }
        goto BIOS_OBJ_A64;
      }
      if (unaff_s4[-1] != '\0') {
        unaff_s2[1] = 0;
        puVar6 = &DAT_800d0ff0;
        iVar5 = 7;
        if (unaff_s3 != (undefined1 *)0x0) {
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
            *unaff_s3 = uVar1;
            unaff_s3 = unaff_s3 + 1;
          } while (iVar5 != -1);
        }
BIOS_OBJ_A64:
        uVar4 = BIOS_OBJ_A74();
        return uVar4;
      }
      if (unaff_s7 != 0) {
        return 0;
      }
      iVar5 = VSync(-1);
      if ((DAT_800d1000 < iVar5) ||
         (iVar5 = DAT_800d1004 + 1, bVar2 = 0x3c0000 < DAT_800d1004, DAT_800d1004 = iVar5, bVar2)) {
        puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800d1008,
               *(undefined4 *)((uint)DAT_800cb5f1 * 4 + unaff_s8),
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s5));
        CD_flush();
        uVar4 = BIOS_OBJ_914();
        return uVar4;
      }
      iVar5 = CheckCallback();
    } while (iVar5 == 0);
    unaff_s1 = *PTR_CDROM_REG0_800cb898 & 3;
  } while( true );
}


