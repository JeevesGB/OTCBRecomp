/* Function: FUN_8005c188 */
/* Address: 8005c188 */

void FUN_8005c188(int param_1,short param_2,short param_3,short param_4)

{
  ushort local_20;
  ushort local_1e;
  short local_1c;
  short local_1a;
  u_long *local_18;
  RECT local_10;
  
  if ((*(uint *)(param_1 + 4) & 8) == 0) {
    local_18 = (u_long *)0x0;
  }
  else {
    local_20 = *(ushort *)(param_1 + 0xc);
    local_1e = *(ushort *)(param_1 + 0xe);
    local_1c = *(short *)(param_1 + 0x10);
    local_1a = *(short *)(param_1 + 0x12);
    local_18 = (u_long *)(param_1 + 0x14);
  }
  if (((*(uint *)(param_1 + 4) & 8) != 0) &&
     (local_10.x = local_20 + param_3,
     (int)param_2 == ((int)((uint)local_20 << 0x10) >> 0x16) + (local_1e >> 4 & 0x10))) {
    local_10.y = local_1e + param_4;
    local_10.w = local_1c;
    local_10.h = local_1a;
    LoadImage(&local_10,local_18);
    DrawSync(0);
  }
  return;
}


