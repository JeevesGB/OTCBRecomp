/* Function: FUN_800464d8 */
/* Address: 800464d8 */

void FUN_800464d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0x1c;
  iVar2 = param_1;
  DAT_1f800050 = param_1;
  do {
    *(int *)(iVar2 + 0x10) = param_1 + iVar4;
    iVar1 = DAT_1f800050;
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xc;
  } while (iVar3 < 5);
  iVar4 = 0;
  iVar5 = 0x78;
  *(undefined4 *)(DAT_1f800050 + iVar3 * 0xc + 0x10) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0xc) = iVar1 + 0x10;
  iVar2 = iVar1;
  do {
    *(int *)(iVar2 + 0x60) = iVar1 + iVar5;
    iVar3 = DAT_1f800050;
    iVar5 = iVar5 + 0x18;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x18;
  } while (iVar4 < 0x12);
  *(undefined4 *)(DAT_1f800050 + iVar4 * 0x18 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(int *)(iVar3 + 0x5c) = iVar3 + 0x60;
  return;
}


