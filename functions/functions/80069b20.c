/* Function: IsReplaySlotFull */
/* Address: 80069b20 */

undefined1 IsReplaySlotFull(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_80069fe8();
  uVar1 = 0xff;
  if (iVar2 == 0) {
    uVar1 = (&DAT_800ba768)[param_1 & 0xff];
  }
  return uVar1;
}


