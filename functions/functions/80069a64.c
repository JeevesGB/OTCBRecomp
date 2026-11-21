/* Function: GetCarUpgradeSlot */
/* Address: 80069a64 */

undefined4 GetCarUpgradeSlot(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = GetReplayCarIndex();
  uVar2 = GetCarTuningData(param_1);
  iVar3 = FUN_8006867c(uVar2,(uVar1 & 0xff) * 0xb0 + -0x7ff45794);
  iVar4 = FUN_8006a2bc(uVar2);
  uVar2 = 0xffffffff;
  if (iVar3 != iVar4) {
    uVar2 = 0;
  }
  return uVar2;
}


