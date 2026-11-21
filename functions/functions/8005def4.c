/* Function: FUN_8005def4 */
/* Address: 8005def4 */

void FUN_8005def4(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6)

{
  int iVar1;
  
  iVar1 = AddRenderQueueItem(0x20,&LAB_8005d620);
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined2 *)(iVar1 + 0x1c) = 0;
  *(undefined2 *)(iVar1 + 0x1a) = 0;
  *(undefined2 *)(iVar1 + 0x16) = param_2;
  *(undefined2 *)(iVar1 + 0x18) = param_3;
  *(undefined2 *)(iVar1 + 0x12) = param_4;
  DAT_800cd734 = iVar1;
  *(undefined2 *)(iVar1 + 0x14) = param_5;
  *(undefined2 *)(iVar1 + 0x10) = param_6;
  g_PaletteIndex = 0;
  return;
}


