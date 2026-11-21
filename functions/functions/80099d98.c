/* Function: S_CRWA_OBJ_9C */
/* Address: 80099d98 */

undefined4 S_CRWA_OBJ_9C(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s5;
  int in_stack_00000010;
  
  iVar2 = DAT_800c3d6c;
  if (DAT_800c3d6c == 1) {
    DAT_800c3d6c = 0;
    unaff_s5 = 1;
  }
  bVar1 = true;
  if (DAT_800c3d88 != 0) {
    in_stack_00000010 = DAT_800c3d88;
    DAT_800c3d88 = 0;
  }
  do {
    uVar3 = 0x400;
    if (unaff_s1 < 0x401) {
      bVar1 = false;
      uVar3 = unaff_s1;
    }
    _spu_t(2,unaff_s2);
    _spu_t(1);
    _spu_t(3,&DAT_800c3dc0,uVar3);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    WaitEvent(DAT_800c3cd8);
  } while (bVar1);
  if (unaff_s5 != 0) {
    DAT_800c3d6c = iVar2;
  }
  if (in_stack_00000010 != 0) {
    DAT_800c3d88 = in_stack_00000010;
  }
  return 0;
}


