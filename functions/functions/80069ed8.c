/* Function: FUN_80069ed8 */
/* Address: 80069ed8 */

undefined4 FUN_80069ed8(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = GetReplayCarIndex();
  uVar2 = 0xffffffff;
  if ((&DAT_800ba8fe)[(uVar1 & 0xff) * 0x58] == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


