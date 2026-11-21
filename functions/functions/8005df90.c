/* Function: FUN_8005df90 */
/* Address: 8005df90 */

void FUN_8005df90(void)

{
  int iVar1;
  long lVar2;
  
  switch(DAT_800cd9c4) {
  case 0:
    iVar1 = MemCardExist(0);
    goto LAB_8005e23c;
  case 1:
    iVar1 = MemCardAccept(DAT_800cd740);
LAB_8005e23c:
    if (iVar1 != 0) {
      DAT_800cd9c4 = 0;
    }
    break;
  case 2:
    lVar2 = MemCardGetDirentry(0,"*",(DIRENTRY *)&DAT_800cd768,(long *)&DAT_800cd764,0,0xf);
    if (lVar2 != -1) {
      DAT_800cd9c4 = 0;
    }
    if (lVar2 != 1) {
      if (lVar2 < 2) {
        if (lVar2 != 0) {
          return;
        }
        DAT_800cd758 = 0xc;
        return;
      }
      if (lVar2 != 2) {
        if (lVar2 != 4) {
          return;
        }
        DAT_800cd758 = 2;
        return;
      }
switchD_8005e144_caseD_2:
      DAT_800cd758 = 3;
      return;
    }
    goto LAB_8005e0d8;
  case 3:
    lVar2 = MemCardFormat(DAT_800cd740);
    if (lVar2 != -1) {
      DAT_800cd9c4 = 0;
    }
    if (lVar2 != 1) {
      if (1 < lVar2) {
        if (lVar2 != 2) {
          return;
        }
        DAT_800cd758 = 6;
        return;
      }
      if (lVar2 != 0) {
        return;
      }
      DAT_800cd758 = 0xf;
      return;
    }
LAB_8005e0d8:
    DAT_800cd758 = 1;
    break;
  case 4:
    lVar2 = MemCardCreateFile(DAT_800cd740,DAT_800cd744,DAT_800cd754);
    if (lVar2 != -1) {
      DAT_800cd9c4 = 0;
    }
    switch(lVar2) {
    case 0:
      DAT_800cd758 = 0x10;
      break;
    case 1:
      DAT_800cd758 = 1;
      break;
    case 2:
      goto switchD_8005e144_caseD_2;
    case 4:
      DAT_800cd758 = 2;
      break;
    case 6:
      DAT_800cd758 = 7;
      break;
    case 7:
      DAT_800cd758 = 9;
    }
    break;
  case 5:
    lVar2 = MemCardReadFile(DAT_800cd740,DAT_800cd744,DAT_800cd748,DAT_800cd74c,DAT_800cd750);
    if (lVar2 == 1) {
      DAT_800cd9c4 = 0;
    }
    break;
  case 6:
    lVar2 = MemCardWriteFile(DAT_800cd740,DAT_800cd744,DAT_800cd748,DAT_800cd74c,DAT_800cd750);
    if (lVar2 == 1) {
      DAT_800cd9c4 = 0;
    }
    break;
  default:
    DAT_800cd9c4 = 0;
  }
  return;
}


