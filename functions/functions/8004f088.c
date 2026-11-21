/* Function: UpdateCarReplay */
/* Address: 8004f088 */

void UpdateCarReplay(int param_1)

{
  int *piVar1;
  
  GTE_IR1 = *(undefined2 *)(g_CarPhysicsParams + 0x3e);
  for (piVar1 = (int *)g_ReplayRecordFlag; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if (((*(short *)(piVar1 + 3) < 0) && (piVar1[1] != param_1)) &&
       (*(short *)((int)piVar1 + 0x26) != 0)) {
      FUN_8004ebf8(piVar1);
    }
  }
  return;
}


