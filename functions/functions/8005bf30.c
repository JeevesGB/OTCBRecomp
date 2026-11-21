/* Function: FUN_8005bf30 */
/* Address: 8005bf30 */

void FUN_8005bf30(int param_1,short param_2,short param_3)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  u_long *local_18;
  RECT local_10;
  
  if ((*(uint *)(param_1 + 4) & 8) == 0) {
    local_18 = (u_long *)0x0;
  }
  else {
    local_20 = *(short *)(param_1 + 0xc);
    local_1e = *(short *)(param_1 + 0xe);
    local_1c = *(short *)(param_1 + 0x10);
    local_1a = *(short *)(param_1 + 0x12);
    local_18 = (u_long *)(param_1 + 0x14);
  }
  if ((*(uint *)(param_1 + 4) & 8) != 0) {
    local_10.x = local_20 + param_2;
    local_10.w = local_1c;
    local_10.h = local_1a;
    local_10.y = local_1e + param_3;
    LoadImage(&local_10,local_18);
    DrawSync(0);
  }
  return;
}


