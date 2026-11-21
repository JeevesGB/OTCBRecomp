/* Function: FUN_8005741c */
/* Address: 8005741c */

void FUN_8005741c(int param_1,char *param_2)

{
                    /* Probable PsyQ macro: setPolyFT4() + setShadeTex(polyFT4, 1) */
  *(undefined1 *)(param_1 + 7) = 0x2d;
  *(undefined1 *)(param_1 + 3) = 9;
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 10);
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
  *(ushort *)(param_1 + 0xe) =
       *(short *)(param_2 + 0x12) << 6 | *(ushort *)(param_2 + 0x10) >> 4 & 0x3f;
  *(char *)(param_1 + 0xc) = *param_2;
  *(char *)(param_1 + 0xd) = param_2[2];
  *(char *)(param_1 + 0x14) = param_2[4] + *param_2 + -1;
  *(char *)(param_1 + 0x15) = param_2[2];
  *(char *)(param_1 + 0x1c) = *param_2;
  *(char *)(param_1 + 0x1d) = param_2[6] + param_2[2] + -1;
  *(char *)(param_1 + 0x24) = param_2[4] + *param_2 + -1;
  *(char *)(param_1 + 0x25) = param_2[6] + param_2[2] + -1;
  return;
}


