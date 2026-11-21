/* Function: LoadTrackObjects */
/* Address: 80053f98 */

/* WARNING: Removing unreachable block (ram,0x8005405c) */

void LoadTrackObjects(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  FUN_80052d60();
  DAT_800cd168 = 0;
  DAT_800cd16c = 0;
  bVar1 = *param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (99 < uVar2) {
      return;
    }
    if (uVar2 < 5) break;
    param_1 = (byte *)FUN_80053b44(param_1);
    bVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x80053ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_8001bff8)[uVar2])();
  return;
}


