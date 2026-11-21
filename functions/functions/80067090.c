/* Function: FUN_80067090 */
/* Address: 80067090 */

void FUN_80067090(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x5a) + 8;
  *(short *)(param_1 + 0x5a) = sVar1;
  if (sVar1 == 0x1000) {
    *(undefined2 *)(param_1 + 0x5a) = 0;
  }
  return;
}


