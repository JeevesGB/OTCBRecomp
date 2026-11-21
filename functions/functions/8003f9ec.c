/* Function: FUN_8003f9ec */
/* Address: 8003f9ec */

void FUN_8003f9ec(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_s0;
  byte *unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  bVar1 = FUN_8003f310(unaff_s4[-3],unaff_s4[-2]);
  *unaff_s4 = bVar1;
  FUN_800411f0(*(undefined4 *)((uint)bVar1 * 0x20 + unaff_s5 + 8));
  do {
    uVar2 = (uint)*(byte *)(unaff_s0 + 0x2c);
    if (99 < uVar2) {
      return;
    }
  } while (4 < uVar2);
                    /* WARNING: Could not recover jumptable at 0x8003f9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar2 * 4 + unaff_s6))();
  return;
}


