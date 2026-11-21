/* Function: LIBMCRD_OBJ_17F8 */
/* Address: 800a32f4 */

undefined4 LIBMCRD_OBJ_17F8(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  int unaff_s3;
  long in_stack_00000030;
  
  while( true ) {
    lVar3 = DAT_800d0b74;
    if ((*unaff_s0 != 0) || (unaff_s0[2] != 0)) {
      iVar2 = unaff_s0[2];
      do {
        bVar1 = iVar2 == 0;
        iVar2 = DAT_800d0b88;
      } while (bVar1);
      unaff_s0[2] = 0;
      in_stack_00000030 = lVar3;
    }
    MemCardCallback(DAT_800d0bd8);
    if ((in_stack_00000030 != 3) &&
       ((in_stack_00000030 != unaff_s3 || (unaff_s1 = unaff_s1 + 1, 3 < unaff_s1)))) {
      if (in_stack_00000030 == 0) {
        in_stack_00000030 = 5;
      }
      uVar4 = LIBMCRD_OBJ_18B0();
      return uVar4;
    }
    in_stack_00000030 = erase(&stack0x00000010);
    if (in_stack_00000030 != 0) {
      return 0;
    }
    DAT_800d0bd8 = MemCardCallback((MemCB)0x0);
    if (0 < *unaff_s0) break;
    *unaff_s0 = unaff_s3;
    unaff_s0[1] = 0;
    unaff_s0[2] = 0;
    DAT_800d0b90 = unaff_s2;
    UserFuncOpen(LIBMCRD_OBJ_480);
  }
  printf("Access Denied. : event multiple open\n");
  uVar4 = LIBMCRD_OBJ_17F8();
  return uVar4;
}


