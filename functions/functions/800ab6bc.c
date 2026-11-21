/* Function: PADIF_OBJ_290 */
/* Address: 800ab6bc */

int PADIF_OBJ_290(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (DAT_800cba88 != 0) {
    (*DAT_800cba10)();
  }
  iVar5 = DAT_800cba88;
  iVar6 = -1;
  if (DAT_800cba88 != 0) {
    iVar7 = -0xf0;
    do {
      DAT_800cba7c = DAT_800cba7c + -1;
      if (DAT_800cba7c < 1) break;
      if (-1 < iVar6) {
        (*DAT_800cba10)(*(int *)(param_1 + 0xc) + iVar7);
      }
      uVar3 = (*DAT_800cba0c)(param_1,1);
      iVar4 = _padSioRW2(param_1,uVar3);
      if (iVar4 < 0) {
        return iVar4;
      }
      setRC2wait(0x3c);
      iVar4 = _padClrIntSio0();
      iVar6 = iVar6 + 1;
      if (iVar4 == 0) goto PADIF_OBJ_4F0;
      iVar7 = iVar7 + 0xf0;
    } while (iVar6 < 4);
  }
  iVar6 = 0;
  bVar2 = DAT_800cba44 == 0;
  if (1 < DAT_800cba7c) {
    piVar8 = (int *)(&DAT_800cba5c + (uint)bVar2 * 4);
    do {
      iVar7 = *piVar8;
      if (iVar7 < 0) break;
      if (0 < iVar7) {
        iVar6 = *(int *)((uint)bVar2 * 0xf0 + DAT_800cba38 + 0xc) + iVar7 * 0xf0 + -0xf0;
        (*DAT_800cba24)(iVar6);
      }
      iVar7 = *piVar8;
      if (iVar7 == 3) {
        (*DAT_800cba24)(iVar6 + -0xf0);
        iVar5 = PADIF_OBJ_4A8();
        return iVar5;
      }
      if (iVar7 < 4) {
        if ((iVar7 < 2) && (-1 < iVar7)) {
          iVar5 = PADIF_OBJ_46C();
          return iVar5;
        }
      }
      else if (iVar7 == 4) {
        *piVar8 = 3;
        iVar5 = PADIF_OBJ_4B0(param_1);
        return iVar5;
      }
      uVar3 = (*DAT_800cba0c)(param_1,iVar5);
      iVar7 = _padSioRW(param_1,uVar3);
      if (iVar7 < 0) {
        return iVar7;
      }
      setRC2wait(0x3c);
      iVar7 = _padClrIntSio0();
      if (iVar7 == 0) {
PADIF_OBJ_4F0:
        iVar5 = PADIF_OBJ_600();
        return iVar5;
      }
      DAT_800cba7c = DAT_800cba7c + -1;
    } while (1 < DAT_800cba7c);
  }
  while( true ) {
    DAT_800cba7c = DAT_800cba7c + -1;
    if (DAT_800cba7c < 1) {
      _padWaitRXready();
      bVar1 = *(byte *)(param_1 + 0x44);
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      *(undefined *)((uint)bVar1 + *(int *)(param_1 + 0x3c)) = *PTR_JOY_MCD_DATA_800cba80;
      (*DAT_800cba04)(0);
      return 0;
    }
    uVar3 = (*DAT_800cba0c)(param_1,iVar5);
    iVar6 = _padSioRW(param_1,uVar3);
    if (iVar6 < 0) break;
    if (*(short *)(PTR_JOY_MCD_DATA_800cba80 + 0xe) != 0x22) {
      setRC2wait(0x3c);
      iVar6 = _padClrIntSio0();
      if (iVar6 == 0) {
        return -3;
      }
    }
  }
  return iVar6;
}


