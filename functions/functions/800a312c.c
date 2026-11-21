/* Function: LIBMCRD_OBJ_1630 */
/* Address: 800a312c */

undefined4 LIBMCRD_OBJ_1630(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  int *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined4 unaff_s3;
  uint unaff_s4;
  int in_stack_00000030;
  
  while( true ) {
    iVar3 = DAT_800d0b74;
    if ((*unaff_s0 != 0) || (unaff_s0[2] != 0)) {
      iVar2 = unaff_s0[2];
      do {
        bVar1 = iVar2 == 0;
        iVar2 = DAT_800d0b88;
      } while (bVar1);
      unaff_s0[2] = 0;
      in_stack_00000030 = iVar3;
    }
    MemCardCallback(DAT_800d0bd8);
    if (in_stack_00000030 == 0) {
      uVar5 = LIBMCRD_OBJ_16F8();
      return uVar5;
    }
    if ((in_stack_00000030 != 3) &&
       ((in_stack_00000030 != unaff_s1 || (unaff_s2 = unaff_s2 + 1, 3 < unaff_s2)))) {
      if (in_stack_00000030 == 0) {
        in_stack_00000030 = 5;
      }
      uVar5 = LIBMCRD_OBJ_16F8();
      return uVar5;
    }
    lVar4 = open(&stack0x00000010,unaff_s4 | 0x200);
    if (-1 < lVar4) {
      close(lVar4);
      return 0;
    }
    DAT_800d0bd8 = MemCardCallback((MemCB)0x0);
    if (0 < *unaff_s0) break;
    *unaff_s0 = unaff_s1;
    unaff_s0[1] = 0;
    unaff_s0[2] = 0;
    DAT_800d0b90 = unaff_s3;
    UserFuncOpen(LIBMCRD_OBJ_480);
  }
  printf("Access Denied. : event multiple open\n");
  uVar5 = LIBMCRD_OBJ_1630();
  return uVar5;
}


