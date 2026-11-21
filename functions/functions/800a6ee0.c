/* Function: CD_cw */
/* Address: 800a6ee0 */

undefined4 CD_cw(byte param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (1 < DAT_800cb5dc) {
    printf("%s...\n",(&PTR_s_CdlSync_800cb5f8)[param_1]);
  }
  if ((*(int *)(&DAT_800cb818 + (uint)param_1 * 4) == 0) || (param_2 != (undefined1 *)0x0)) {
    CD_sync(0,0);
    if (param_1 == 2) {
      iVar7 = 0;
      puVar5 = param_2;
      do {
        (&DAT_800cb5ec)[iVar7] = *puVar5;
        iVar7 = iVar7 + 1;
        puVar5 = param_2 + iVar7;
      } while (iVar7 < 4);
    }
    if (param_1 == 0xe) {
      DAT_800cb5f0 = *param_2;
    }
    iVar7 = (uint)param_1 * 4;
    DAT_800cb8b0 = 0;
    if (*(int *)(&DAT_800cb718 + iVar7) != 0) {
      DAT_800cb8b1 = 0;
    }
    *PTR_CDROM_REG0_800cb898 = 0;
    iVar8 = 0;
    puVar5 = param_2;
    if (0 < *(int *)(&DAT_800cb818 + iVar7)) {
      do {
        *PTR_CDROM_REG2_800cb8a0 = *puVar5;
        iVar8 = iVar8 + 1;
        puVar5 = param_2 + iVar8;
      } while (iVar8 < *(int *)(&DAT_800cb818 + iVar7));
    }
    DAT_800cb5f1 = param_1;
    *PTR_CDROM_REG1_800cb89c = param_1;
    uVar4 = 0;
    if (param_4 == 0) {
      iVar7 = VSync(-1);
      DAT_800d1000 = iVar7 + 0x3c0;
      DAT_800d1004 = 0;
      DAT_800d1008 = "CD_cw";
      while (DAT_800cb8b0 == 0) {
        iVar7 = VSync(-1);
        if ((DAT_800d1000 < iVar7) ||
           (iVar7 = DAT_800d1004 + 1, bVar3 = 0x3c0000 < DAT_800d1004, DAT_800d1004 = iVar7, bVar3))
        {
          puts("CD timeout: ");
          printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800d1008,(&PTR_s_CdlSync_800cb5f8)[DAT_800cb5f1],
                 (&PTR_s_NoIntr_800cb678)[DAT_800cb8b0],(&PTR_s_NoIntr_800cb678)[DAT_800cb8b1]);
          CD_flush();
          uVar4 = BIOS_OBJ_D70();
          return uVar4;
        }
        iVar7 = CheckCallback();
        if (iVar7 != 0) {
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
      }
      puVar5 = &DAT_800d0fe8;
      iVar7 = 7;
      if (param_3 != (undefined1 *)0x0) {
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
          *param_3 = uVar2;
          param_3 = param_3 + 1;
        } while (iVar7 != -1);
      }
      uVar4 = 0;
      if (DAT_800cb8b0 == 5) {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
    if (0 < DAT_800cb5dc) {
      printf("%s: no param\n",(&PTR_s_CdlSync_800cb5f8)[param_1]);
      uVar4 = BIOS_OBJ_E88();
      return uVar4;
    }
  }
  return uVar4;
}


