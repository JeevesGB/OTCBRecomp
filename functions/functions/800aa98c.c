/* Function: PADCMD_OBJ_160 */
/* Address: 800aa98c */

undefined4 PADCMD_OBJ_160(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 0xe3) = *(undefined1 *)(*(int *)(unaff_s0 + 0x3c) + 3);
  uVar1 = *(undefined1 *)(*(int *)(unaff_s0 + 0x3c) + 4);
  *(undefined2 *)(unaff_s0 + 0xe6) = 0;
  *(undefined1 *)(unaff_s0 + 0xe4) = uVar1;
  *(undefined1 *)(unaff_s0 + 0xe9) = *(undefined1 *)(*(int *)(unaff_s0 + 0x3c) + 5);
  uVar1 = *(undefined1 *)(*(int *)(unaff_s0 + 0x3c) + 6);
  *(undefined2 *)(unaff_s0 + 0xec) = 0;
  *(undefined1 *)(unaff_s0 + 0xea) = uVar1;
  if (*(short *)(unaff_s0 + 0xee) == 0) {
    *(undefined1 *)(unaff_s0 + 0xeb) = 0;
    uVar2 = PADCMD_OBJ_2FC();
    return uVar2;
  }
  return 0;
}


