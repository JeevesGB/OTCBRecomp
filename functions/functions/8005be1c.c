/* Function: FUN_8005be1c */
/* Address: 8005be1c */

void FUN_8005be1c(int param_1,short param_2,short param_3)

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
  local_10.x = *(short *)(param_1 + 4) + param_2;
  local_10.w = local_28;
  local_10.h = local_26;
  local_10.y = *(short *)(param_1 + 6) + param_3;
  LoadImage(&local_10,(u_long *)(param_1 + 0xc));
  DrawSync(0);
  return;
}


