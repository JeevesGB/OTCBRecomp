/* Function: SaveRaceResult2 */
/* Address: 80028114 */

void SaveRaceResult2(int param_1,int param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = 0;
  iVar1 = param_2 * 0x18;
  while ((*(int *)(&DAT_800ac7f8 + iVar1) <= param_1 && (((&DAT_800ac7f4)[iVar1] & 0x80) != 0))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 8;
    if (2 < iVar2) {
      return;
    }
  }
  uVar3 = *(undefined4 *)(&DAT_800ac7f4 + iVar1);
  uVar5 = *(undefined4 *)(&DAT_800ac7f8 + iVar1);
  (&DAT_800ac7f4)[iVar1] = param_3 | 0x80;
  *(int *)(&DAT_800ac7f8 + iVar1) = param_1;
  (&DAT_800ac7f5)[iVar1] = param_4;
  while (iVar2 < 2) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 8 + param_2 * 0x18;
    uVar4 = *(undefined4 *)(&DAT_800ac7f4 + iVar1);
    uVar6 = *(undefined4 *)(&DAT_800ac7f8 + iVar1);
    *(undefined4 *)(&DAT_800ac7f4 + iVar1) = uVar3;
    *(undefined4 *)(&DAT_800ac7f8 + iVar1) = uVar5;
    uVar3 = uVar4;
    uVar5 = uVar6;
  }
  return;
}


