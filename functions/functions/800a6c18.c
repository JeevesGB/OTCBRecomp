/* Function: CD_ready */
/* Address: 800a6c18 */

undefined4 CD_ready(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar4 = VSync(-1);
  DAT_800d1000 = iVar4 + 0x3c0;
  DAT_800d1004 = 0;
  DAT_800d1008 = "CD_ready";
  while( true ) {
    iVar4 = VSync(-1);
    if ((DAT_800d1000 < iVar4) ||
       (iVar4 = DAT_800d1004 + 1, bVar3 = 0x3c0000 < DAT_800d1004, DAT_800d1004 = iVar4, bVar3)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800d1008,(&PTR_s_CdlSync_800cb5f8)[DAT_800cb5f1],
             (&PTR_s_NoIntr_800cb678)[DAT_800cb8b0],(&PTR_s_NoIntr_800cb678)[DAT_800cb8b1]);
      CD_flush();
      uVar5 = BIOS_OBJ_914();
      return uVar5;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_800cb898;
      while( true ) {
        uVar6 = BIOS_OBJ_0();
        if (uVar6 == 0) break;
        if (((uVar6 & 4) != 0) && (DAT_800cb5d8 != (code *)0x0)) {
          (*DAT_800cb5d8)(DAT_800cb8b1,&DAT_800d0ff0);
        }
        if (((uVar6 & 2) != 0) && (DAT_800cb5d4 != (code *)0x0)) {
          (*DAT_800cb5d4)(DAT_800cb8b0,&DAT_800d0fe8);
        }
      }
      *PTR_CDROM_REG0_800cb898 = bVar1 & 3;
    }
    if (DAT_800cb8b2 != '\0') break;
    if (DAT_800cb8b1 != 0) {
      DAT_800cb8b1 = 0;
      puVar7 = &DAT_800d0ff0;
      iVar4 = 7;
      if (param_2 != (undefined1 *)0x0) {
        do {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + -1;
          *param_2 = uVar2;
          param_2 = param_2 + 1;
        } while (iVar4 != -1);
      }
      goto BIOS_OBJ_A64;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_800cb8b2 = '\0';
  puVar7 = &DAT_800d0ff8;
  if (param_2 != (undefined1 *)0x0) {
    iVar4 = 7;
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    } while (iVar4 != -1);
    uVar5 = BIOS_OBJ_A74();
    return uVar5;
  }
BIOS_OBJ_A64:
  uVar5 = BIOS_OBJ_A74();
  return uVar5;
}


