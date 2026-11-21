/* Function: HasOverallRecord */
/* Address: 800699c8 */

undefined4 HasOverallRecord(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = GetReplayCarIndex(iVar3);
    if ((&DAT_800ba8fe)[(uVar1 & 0xff) * 0x58] == 0x1f) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x18);
  uVar2 = 0xffffffff;
  if (iVar4 != 0x18) {
    uVar2 = 0;
  }
  return uVar2;
}


