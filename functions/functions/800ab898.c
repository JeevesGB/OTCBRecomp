/* Function: PADIF_OBJ_46C */
/* Address: 800ab898 */

int PADIF_OBJ_46C(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s1;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  iVar4 = DAT_800cba38 + unaff_s3;
  (*DAT_800cba24)(iVar4);
  (*DAT_800cba28)(iVar4);
  *unaff_s2 = -1;
  while( true ) {
    (*DAT_800cba0c)();
    iVar2 = _padSioRW();
    if (iVar2 < 0) {
      return iVar2;
    }
    setRC2wait(0x3c);
    iVar2 = _padClrIntSio0();
    if (iVar2 == 0) {
      iVar4 = PADIF_OBJ_600();
      return iVar4;
    }
    iVar2 = DAT_800cba7c + -1;
    if ((iVar2 < 2) || (iVar3 = *unaff_s2, iVar3 < 0)) {
      DAT_800cba7c = DAT_800cba7c + -2;
      while( true ) {
        if (DAT_800cba7c < 1) {
          _padWaitRXready();
          bVar1 = *(byte *)(unaff_s1 + 0x44);
          *(byte *)(unaff_s1 + 0x44) = bVar1 + 1;
          *(undefined *)((uint)bVar1 + *(int *)(unaff_s1 + 0x3c)) = *PTR_JOY_MCD_DATA_800cba80;
          (*DAT_800cba04)(0);
          return 0;
        }
        (*DAT_800cba0c)();
        iVar4 = _padSioRW();
        if (iVar4 < 0) break;
        if (*(short *)(PTR_JOY_MCD_DATA_800cba80 + 0xe) != 0x22) {
          setRC2wait(0x3c);
          iVar4 = _padClrIntSio0();
          if (iVar4 == 0) {
            return -3;
          }
        }
        DAT_800cba7c = DAT_800cba7c + -1;
      }
      return iVar4;
    }
    DAT_800cba7c = iVar2;
    if (0 < iVar3) {
      iVar4 = *(int *)(unaff_s3 + DAT_800cba38 + 0xc) + iVar3 * 0xf0 + -0xf0;
      (*DAT_800cba24)(iVar4);
    }
    iVar2 = *unaff_s2;
    if (iVar2 == unaff_s5) break;
    if (iVar2 < 4) {
      if ((iVar2 < 2) && (-1 < iVar2)) {
        iVar4 = PADIF_OBJ_46C();
        return iVar4;
      }
    }
    else if (iVar2 == 4) {
      *unaff_s2 = unaff_s5;
      iVar4 = PADIF_OBJ_4B0();
      return iVar4;
    }
  }
  (*DAT_800cba24)(iVar4 + -0xf0);
  iVar4 = PADIF_OBJ_4A8();
  return iVar4;
}


