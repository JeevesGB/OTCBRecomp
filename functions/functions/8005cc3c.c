/* Function: FUN_8005cc3c */
/* Address: 8005cc3c */

void FUN_8005cc3c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort uVar4;
  
  uVar2 = g_PadButtons3;
  uVar1 = g_PadButtons2;
  uVar3 = g_PadButtons;
  if (param_1 < 2) {
    uVar4 = (ushort)*(byte *)((&g_PadRawState)[param_1 * 3] + 2) * 0x100 +
            (ushort)*(byte *)((&g_PadRawState)[param_1 * 3] + 3);
    if (param_1 == 0) {
      g_PadButtons2 = ~uVar4;
      g_PadButtons = g_PadButtons2 & (uVar1 ^ g_PadButtons2);
      g_PadAnalog1 = g_PadButtons;
      if (g_PadButtons != 0) {
        DAT_800cd6a0 = DAT_800b54ec;
        return;
      }
      DAT_800cd6a0 = DAT_800cd6a0 - 1;
      g_PadAnalog1 = 0;
      uVar3 = 0;
      if ((int)((uint)DAT_800cd6a0 << 0x10) < 0) {
        g_PadAnalog1 = g_PadButtons2;
        DAT_800cd6a0 = DAT_800b54ee;
        return;
      }
    }
    else {
      g_PadButtons3 = ~uVar4;
      g_PadButtons2_Alt = g_PadButtons3 & (uVar2 ^ g_PadButtons3);
      g_PadAnalog2 = g_PadButtons2_Alt;
      if (g_PadButtons2_Alt != 0) {
        DAT_800cd6a2 = DAT_800b54ec;
        return;
      }
      DAT_800cd6a2 = DAT_800cd6a2 - 1;
      g_PadAnalog2 = 0;
      g_PadButtons2_Alt = 0;
      if ((int)((uint)DAT_800cd6a2 << 0x10) < 0) {
        DAT_800cd6a2 = DAT_800b54ee;
        g_PadAnalog2 = g_PadButtons3;
      }
    }
  }
  g_PadButtons = uVar3;
  return;
}


