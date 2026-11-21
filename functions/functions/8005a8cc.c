/* Function: FUN_8005a8cc */
/* Address: 8005a8cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8005a8cc(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  CdFlush();
  uVar1 = AddRenderQueueItem(0xc,&LAB_8005ab34);
  DAT_800cd57e = 0;
  DAT_800cd580 = 0;
  DAT_800cd57c = 0;
  DAT_800cd578 = uVar1;
  DAT_800cd582 = param_1;
  DAT_800cd588 = param_2;
  DAT_800cd584 = FUN_800544ec();
  DAT_800cd59c = 0;
  _DAT_800cd598 = _DAT_800cd598 + 1;
  return uVar1;
}


