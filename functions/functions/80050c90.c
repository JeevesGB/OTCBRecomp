/* Function: UpdateCarSpeedometer */
/* Address: 80050c90 */

void UpdateCarSpeedometer(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(short *)(param_1 + 0x44) == 1) &&
     (3 < *(int *)(param_1 + 0x164) - *(int *)(param_1 + 0x168))) {
    uVar2 = (*(int *)(param_1 + 0x18c) >> 0xc) -
            (int)*(short *)(((int)((uint)*(ushort *)(param_1 + 0x15c) << 0x10) >> 0x14) * 2 +
                           DAT_800cca18) & 0xfff;
    iVar3 = 0;
    if ((0xdb < uVar2) && (iVar3 = -1, 0x724 < uVar2)) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && ((g_PhysicsFlag & 0xc) != 0)) {
      sVar1 = *(short *)(param_1 + 0x4c);
      SetActiveSpriteSlot(0,3);
      if (g_VSModeFlag == 0) {
        if (sVar1 != g_CameraFlag2) {
          return;
        }
        uVar4 = 0x58;
      }
      else if (sVar1 == g_CameraFlag1) {
        uVar4 = 0xffffffec;
      }
      else {
        uVar4 = 0x5a;
      }
      DrawText("REVERSE",0xffffffe4,uVar4);
    }
  }
  return;
}


