/* Function: FUN_800670bc */
/* Address: 800670bc */

void FUN_800670bc(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x5a) + 0x20;
  *(short *)(param_1 + 0x5a) = sVar1;
  if (sVar1 == 0x1000) {
    *(undefined2 *)(param_1 + 0x5a) = 0;
  }
  return;
}


