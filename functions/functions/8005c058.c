/* Function: FUN_8005c058 */
/* Address: 8005c058 */

void FUN_8005c058(int param_1,short param_2,short param_3,short param_4)

{
  short local_28;
  short local_26;
  RECT local_10;
  
  param_1 = param_1 + *(int *)(param_1 + 8) + 8;
  local_28 = *(short *)(param_1 + 8);
  local_26 = *(short *)(param_1 + 10);
  if (local_28 == 0) {
    local_28 = 0x100;
  }
  if (local_26 == 0) {
    local_26 = 0x100;
  }
  local_10.x = *(ushort *)(param_1 + 4) + param_3;
  if ((int)param_2 ==
      ((int)((uint)*(ushort *)(param_1 + 4) << 0x10) >> 0x16) +
      (*(ushort *)(param_1 + 6) >> 4 & 0x10)) {
    local_10.y = *(ushort *)(param_1 + 6) + param_4;
    local_10.w = local_28;
    local_10.h = local_26;
    LoadImage(&local_10,(u_long *)(param_1 + 0xc));
    DrawSync(0);
  }
  return;
}


