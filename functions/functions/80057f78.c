/* Function: ApplyWheelForce */
/* Address: 80057f78 */

void ApplyWheelForce(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  
  piVar1 = (int *)(param_2 + param_3 * 0x1c + 0xc);
  local_28 = param_2 + piVar1[4] + 0xc;
  local_20 = param_2 + piVar1[2] + 0xc;
  local_24 = param_2 + *piVar1 + 0xc;
  uVar3 = (uint)((param_1 & 0x20000) != 0) << 5;
  local_18 = piVar1[5];
  if ((param_1 & 0x40000) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  local_30 = g_VRAMRectPtr;
  if ((param_1 & 0x80000) == 0) {
    DAT_1f800030._0_2_ = 0;
  }
  else {
    DAT_1f800030._0_2_ = 2;
  }
  while (0 < local_18) {
    iVar2 = (uint)*(ushort *)(local_28 + 2) << 0x10;
    (**(code **)((iVar2 >> 0x12 & 1U | iVar2 >> 0x17 & 2U | iVar2 >> 0x18 & 0x1cU | uVar3) * 4 +
                g_WheelDataPtr))(auStack_38);
  }
  if ((GTE_CTRL & 2) == 0) {
    FUN_800590cc(GTE_OFX,DAT_1f800028,g_VRAMRectPtr,local_30);
  }
  else {
    FUN_8005937c(GTE_OFX,g_VRAMRectPtr,local_30);
  }
  g_VRAMRectPtr = local_30;
  return;
}


