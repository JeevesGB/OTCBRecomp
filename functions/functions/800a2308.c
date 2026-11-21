/* Function: LIBMCRD_OBJ_80C */
/* Address: 800a2308 */

undefined4 LIBMCRD_OBJ_80C(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  char *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined4 unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  int in_stack_00000010;
  
  while( true ) {
    MemCardSync(param_1,(long *)0x0,&stack0x00000010);
    MemCardCallback(DAT_800d0bd8);
    if ((in_stack_00000010 != 3) &&
       ((in_stack_00000010 != unaff_s1 || (unaff_s2 = unaff_s2 + 1, 4 < unaff_s2)))) {
      if (in_stack_00000010 == 0) {
        in_stack_00000010 = 5;
      }
      uVar2 = LIBMCRD_OBJ_88C();
      return uVar2;
    }
    lVar1 = open(unaff_s0,1);
    if (-1 < lVar1) {
      close(lVar1);
      _clr_card_event();
      lVar1 = open(unaff_s0,unaff_s5 | 0x8000);
      *(long *)(unaff_s0 + -0x10) = lVar1;
      return 0;
    }
    DAT_800d0bd8 = MemCardCallback((MemCB)0x0);
    if (0 < *(int *)(unaff_s0 + -0x24)) break;
    *(int *)(unaff_s0 + -0x24) = unaff_s1;
    *(undefined4 *)(unaff_s4 + 4) = 0;
    *(undefined4 *)(unaff_s4 + 8) = 0;
    DAT_800d0b90 = unaff_s3;
    UserFuncOpen(LIBMCRD_OBJ_480);
    param_1 = 0;
  }
  printf("Access Denied. : event multiple open\n");
  uVar2 = LIBMCRD_OBJ_80C(0);
  return uVar2;
}


