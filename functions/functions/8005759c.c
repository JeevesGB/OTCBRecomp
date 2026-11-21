/* Function: FUN_8005759c */
/* Address: 8005759c */

void FUN_8005759c(int param_1,undefined1 *param_2,short *param_3)

{
  *(undefined1 *)(param_1 + 7) = 0x2b;
  *(undefined1 *)(param_1 + 3) = 5;
  *(undefined1 *)(param_1 + 4) = *param_2;
  *(undefined1 *)(param_1 + 5) = param_2[1];
  *(undefined1 *)(param_1 + 6) = param_2[2];
  *(short *)(param_1 + 8) = *param_3;
  *(short *)(param_1 + 10) = param_3[1];
  *(short *)(param_1 + 0xc) = *param_3 + param_3[2];
  *(short *)(param_1 + 0xe) = param_3[1];
  *(short *)(param_1 + 0x10) = *param_3;
  *(short *)(param_1 + 0x12) = param_3[1] + param_3[3];
  *(short *)(param_1 + 0x14) = *param_3 + param_3[2];
  *(short *)(param_1 + 0x16) = param_3[1] + param_3[3];
  return;
}


