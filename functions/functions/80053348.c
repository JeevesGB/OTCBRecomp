/* Function: FUN_80053348 */
/* Address: 80053348 */

void FUN_80053348(void)

{
  if (g_RaceComplete != 0) {
    return;
  }
  switch(g_RaceMode) {
  case 0:
  case 3:
    g_DebugFlag = 0xffff;
    DAT_800cc772 = *(undefined2 *)(*(int *)(g_CarObjectList + 0x24) + 0x10);
    return;
  case 1:
    DAT_800cc772 = *(short *)(*(int *)(g_CarObjectList + 0x24) + 0x10);
    if (DAT_800cc772 != 0) {
      g_DebugFlag = 0;
      return;
    }
    break;
  case 2:
    DAT_800cc772 = *(short *)(*(int *)(g_CarObjectList + 0x24) + 0x10);
    if (DAT_800cc772 < *(short *)(*(int *)(DAT_800ccca0 + 0x24) + 0x10)) {
      g_DebugFlag = 1;
      return;
    }
    g_DebugFlag = 0;
    return;
  case 4:
    DAT_800cc772 = 0;
    if (*(short *)(*(int *)(DAT_800cccc4 + 0x24) + 0x10) <=
        *(short *)(*(int *)(g_CarObjectList + 0x24) + 0x10)) {
      g_DebugFlag = 0;
      DAT_800cc772 = 0;
      return;
    }
    break;
  default:
    return;
  }
  g_DebugFlag = 1;
  return;
}


