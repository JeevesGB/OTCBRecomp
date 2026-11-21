/* Function: FUN_800557b0 */
/* Address: 800557b0 */

void FUN_800557b0(short *param_1)

{
  short *psVar1;
  u_short local_20;
  short local_1e;
  RECT local_18;
  
  psVar1 = *(short **)(g_DisplayConfig + 0x2c);
  local_20 = psVar1[4] + *param_1;
  local_1e = psVar1[5] + param_1[1];
  SetDrawOffset((DR_OFFSET *)(param_1 + 10),&local_20);
  local_18.x = param_1[5] +
               *psVar1 + (short)(((int)((uint)(ushort)psVar1[2] << 0x10) >> 0x10) -
                                 ((int)((uint)(ushort)psVar1[2] << 0x10) >> 0x1f) >> 1);
  local_18.y = param_1[6] +
               psVar1[1] +
               (short)(((int)((uint)(ushort)psVar1[3] << 0x10) >> 0x10) -
                       ((int)((uint)(ushort)psVar1[3] << 0x10) >> 0x1f) >> 1);
  local_18.w = param_1[7];
  local_18.h = param_1[8];
  SetDrawArea((DR_AREA *)(param_1 + 0x16),&local_18);
  psVar1 = *(short **)(g_DisplayConfig + 0x30);
  local_20 = psVar1[4] + *param_1;
  local_1e = psVar1[5] + param_1[1];
  SetDrawOffset((DR_OFFSET *)(param_1 + 0x10),&local_20);
  local_18.x = param_1[5] +
               *psVar1 + (short)(((int)((uint)(ushort)psVar1[2] << 0x10) >> 0x10) -
                                 ((int)((uint)(ushort)psVar1[2] << 0x10) >> 0x1f) >> 1);
  local_18.y = param_1[6] +
               psVar1[1] +
               (short)(((int)((uint)(ushort)psVar1[3] << 0x10) >> 0x10) -
                       ((int)((uint)(ushort)psVar1[3] << 0x10) >> 0x1f) >> 1);
  local_18.w = param_1[7];
  local_18.h = param_1[8];
  SetDrawArea((DR_AREA *)(param_1 + 0x1c),&local_18);
  return;
}


