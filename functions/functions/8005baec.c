/* Function: InitGhostCarDisplay */
/* Address: 8005baec */

void InitGhostCarDisplay(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  RECT local_30;
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  short local_20;
  short local_1e;
  u_long *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  u_long *local_10;
  
  param_1 = param_1 + *(int *)(param_2 * 4 + param_1 + 4);
  local_28 = *(uint *)(param_1 + 4);
  iVar1 = param_1 + *(int *)(param_1 + 8) + 8;
  if ((local_28 & 8) == 0) {
    local_10 = (u_long *)0x0;
  }
  else {
    local_18 = *(undefined2 *)(param_1 + 0xc);
    local_16 = *(undefined2 *)(param_1 + 0xe);
    local_14 = *(undefined2 *)(param_1 + 0x10);
    local_12 = *(undefined2 *)(param_1 + 0x12);
    local_10 = (u_long *)(param_1 + 0x14);
  }
  local_24 = *(undefined2 *)(iVar1 + 4);
  local_22 = *(undefined2 *)(iVar1 + 6);
  local_20 = *(short *)(iVar1 + 8);
  local_1e = *(short *)(iVar1 + 10);
  if (local_20 == 0) {
    local_20 = 0x100;
  }
  if (local_1e == 0) {
    local_1e = 0x100;
  }
  local_1c = (u_long *)(iVar1 + 0xc);
  if ((local_28 & 3) == 0) {
    local_30.x = *param_3 >> 2;
    local_30.w = param_3[2] >> 2;
  }
  else {
    local_30.x = *param_3 >> 1;
    local_30.w = param_3[2] >> 1;
  }
  local_30.x = local_30.x + (param_3[5] & 0xf) * 0x40;
  local_30.y = param_3[1];
  if ((param_3[5] & 0x10) != 0) {
    local_30.y = param_3[1] + 0x100;
  }
  local_30.h = param_3[3];
  LoadImage(&local_30,local_1c);
  DrawSync(0);
  if ((local_28 & 8) != 0) {
    local_30.x = param_3[8];
    local_30.y = param_3[9];
    local_30.w = param_3[6];
    local_30.h = param_3[7];
    LoadImage(&local_30,local_10);
    DrawSync(0);
  }
  return;
}


