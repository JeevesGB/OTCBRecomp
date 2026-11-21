/* Function: FUN_8005a59c */
/* Address: 8005a59c */

void FUN_8005a59c(int param_1)

{
  int iVar1;
  
  DAT_800cd574 = 0;
  DAT_800cbb58 = 0;
  DAT_800cd570 = param_1;
  iVar1 = AddRenderQueueItem(0xc,&LAB_8005a728);
  if (DAT_800cd570 == 0) {
    trap(0x1c00);
  }
  if ((DAT_800cd570 == -1) && (DAT_800cd574 << 8 == -0x80000000)) {
    trap(0x1800);
  }
  FUN_8005a2e8((DAT_800cd574 << 8) / DAT_800cd570);
  if (DAT_800cd570 <= DAT_800cd574) {
    g_DisplayActive = 0xffffffff;
    DAT_800cbb58 = 0xffffffff;
    *(undefined2 *)(iVar1 + 8) = 0;
  }
  DAT_800cd574 = DAT_800cd574 + 1;
  return;
}


