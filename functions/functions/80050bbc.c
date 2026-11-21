/* Function: UpdateCarMirror */
/* Address: 80050bbc */

void UpdateCarMirror(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  if (g_RaceClass != 0) {
    if (*(short *)(param_1 + 0x21e) == 0) {
      if (*(short *)(param_1 + 0x1f6) != 3) {
        if (*(short *)(*(int *)(param_1 + 0x10) + 0x88) < *(short *)(param_1 + 0x214)) {
          sVar1 = *(short *)(param_1 + 0x220) + 0x14;
          *(short *)(param_1 + 0x220) = sVar1;
          if (*(short *)(*(int *)(param_1 + 0x10) + 0x8a) < sVar1) {
            *(undefined2 *)(param_1 + 0x21e) = 0xffff;
          }
        }
        else {
          uVar2 = *(short *)(param_1 + 0x220) - 2;
          *(ushort *)(param_1 + 0x220) = uVar2;
          if ((int)((uint)uVar2 << 0x10) < 0) {
            *(undefined2 *)(param_1 + 0x220) = 0;
          }
        }
      }
    }
    else if ((g_PhysicsFlag & 3) == 0) {
      FUN_80050628(param_1,0);
    }
  }
  return;
}


