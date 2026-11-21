/* Function: MemCardGetDirentry */
/* Address: 800a2c88 */

long MemCardGetDirentry(long chan,char *name,DIRENTRY *dir,long *files,long ofs,long max)

{
  DIRENTRY *pDVar1;
  long lVar2;
  DIRENTRY *pDVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DIRENTRY *pDVar7;
  DIRENTRY *pDVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char acStack_80 [32];
  DIRENTRY local_60 [4];
  undefined4 local_5c [7];
  DIRENTRY aDStack_40 [8];
  long local_38;
  long *local_34;
  DIRENTRY *local_30;
  
  local_34 = files;
  if (DAT_800d0b80 != 0) {
    printf("Access Denied. : system busy\n");
    lVar2 = LIBMCRD_OBJ_13BC();
    return lVar2;
  }
  LIBMCRD_OBJ_1B3C(chan,acStack_80);
  strcat(acStack_80,name);
  iVar10 = 0;
  iVar9 = 0;
  local_38 = 0;
  DAT_800d0b8c = DAT_800d0b8c | 1 << (DAT_800d0b90 & 0x1f);
  lVar2 = 0;
  if (0 < ofs + max) {
    local_30 = (DIRENTRY *)(local_5c + 7);
    iVar11 = 0;
    do {
      if (iVar9 == 0) {
        while( true ) {
          _clr_card_event();
          pDVar3 = firstfile(acStack_80,local_60);
          if (pDVar3 != (DIRENTRY *)0x0) break;
          uVar4 = _get_card_event_x();
          local_38 = LIBMCRD_OBJ_1A3C(uVar4);
          pDVar3 = (DIRENTRY *)0x0;
          if (local_38 == 0) goto LIBMCRD_OBJ_1328;
          iVar10 = iVar10 + 1;
          if (3 < iVar10) {
            DAT_800d0bd8 = MemCardCallback((MemCB)0x0);
            if (0 < DAT_800d0b80) {
              printf("Access Denied. : event multiple open\n");
              lVar2 = LIBMCRD_OBJ_12F4(0);
              return lVar2;
            }
            DAT_800d0b80 = 2;
            DAT_800d0b84 = 0;
            DAT_800d0b88 = 0;
            DAT_800d0b90 = chan;
            UserFuncOpen(LIBMCRD_OBJ_480);
            MemCardSync(0,(long *)0x0,&local_38);
            MemCardCallback(DAT_800d0bd8);
            lVar2 = LIBMCRD_OBJ_13BC();
            return lVar2;
          }
        }
      }
      else {
        pDVar3 = nextfile(local_60);
LIBMCRD_OBJ_1328:
        if (pDVar3 == (DIRENTRY *)0x0) break;
      }
      if ((ofs <= iVar9) && (dir != (DIRENTRY *)0x0)) {
        pDVar3 = local_60;
        pDVar1 = dir + iVar11;
        do {
          pDVar8 = pDVar1;
          pDVar7 = pDVar3;
          uVar4 = *(undefined4 *)(pDVar7 + 4);
          uVar5 = *(undefined4 *)(pDVar7 + 8);
          uVar6 = *(undefined4 *)(pDVar7 + 0xc);
          *(undefined4 *)pDVar8 = *(undefined4 *)pDVar7;
          *(undefined4 *)(pDVar8 + 4) = uVar4;
          *(undefined4 *)(pDVar8 + 8) = uVar5;
          *(undefined4 *)(pDVar8 + 0xc) = uVar6;
          pDVar3 = pDVar7 + 0x10;
          pDVar1 = pDVar8 + 0x10;
        } while (pDVar3 != local_30);
        uVar4 = *(undefined4 *)(pDVar7 + 0x14);
        *(undefined4 *)(pDVar8 + 0x10) = *(undefined4 *)pDVar3;
        *(undefined4 *)(pDVar8 + 0x14) = uVar4;
        iVar11 = iVar11 + 0x28;
        lVar2 = lVar2 + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < ofs + max);
  }
  if (local_34 != (long *)0x0) {
    *local_34 = lVar2;
  }
  return 0;
}


