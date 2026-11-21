/* Function: _padInitSioMode */
/* Address: 800a9ebc */

undefined4 _padInitSioMode(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_JOY_MCD_DATA_800cba68;
  *(undefined2 *)(PTR_JOY_MCD_DATA_800cba68 + 10) = 0x40;
  *(undefined2 *)(puVar2 + 10) = 0;
  *(undefined2 *)(puVar2 + 8) = 0xd;
  *(undefined2 *)(puVar2 + 0xe) = 0x88;
  uVar5 = 0x91;
  if (*(char *)(param_1 + 0xe8) == '\b') {
    uVar5 = 0x50;
  }
  setRC2wait(uVar5);
  uVar4 = 0x1003;
  if (DAT_800cba44 != 0) {
    uVar4 = 0x3003;
  }
  iVar3 = DAT_800cba44 * 4;
  *(undefined2 *)(PTR_JOY_MCD_DATA_800cba68 + 10) = uVar4;
  iVar3 = *(int *)(&DAT_800cba5c + iVar3);
  pcVar1 = DAT_800cba24;
  if (-1 < iVar3) {
    while (DAT_800cba24 = pcVar1, 0 < iVar3) {
      iVar3 = *(int *)(&DAT_800cba5c + DAT_800cba44 * 4) + -1;
      *(int *)(&DAT_800cba5c + DAT_800cba44 * 4) = iVar3;
      (*DAT_800cba24)(*(int *)(param_1 + 0xc) + iVar3 * 0xf0);
      pcVar1 = DAT_800cba24;
      iVar3 = *(int *)(&DAT_800cba5c + DAT_800cba44 * 4);
    }
    if (*(int *)(&DAT_800cba5c + DAT_800cba44 * 4) == 0) {
      *(int *)(&DAT_800cba5c + DAT_800cba44 * 4) = -1;
      (*pcVar1)(param_1);
      (*DAT_800cba28)(param_1);
    }
  }
  puVar2 = PTR_JOY_MCD_DATA_800cba68;
  if ((*(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4) & 0x200) != 0) {
    *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 10) = *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 10) | 0x10
    ;
    if ((*(ushort *)(puVar2 + 4) & 0x200) != 0) {
      do {
        iVar3 = chkRC2wait();
      } while (iVar3 == 0);
      *PTR_JOY_MCD_DATA_800cba68 = 1;
      setRC2wait(2000);
      iVar3 = _padClrIntSio0();
      if (iVar3 == 0) {
        return 0;
      }
      _padWaitRXready();
      setRC2wait(0x1ae);
      uVar5 = PADMAIN_OBJ_66C();
      return uVar5;
    }
    *(undefined4 *)PTR_I_STAT_800cba64 = 0xffffff7f;
  }
  uVar5 = 1;
  if ((*(char *)(param_1 + 0x50) != '\0') && (uVar5 = 0, *(char *)(param_1 + 0x37) == '\0')) {
    uVar5 = 1;
  }
  return uVar5;
}


