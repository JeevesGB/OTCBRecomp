/* Function: VM_KEY_OBJ_4D0 */
/* Address: 8009502c */

undefined4 VM_KEY_OBJ_4D0(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *unaff_s0;
  byte unaff_s1;
  undefined4 unaff_s2;
  byte unaff_s3;
  undefined2 unaff_s4;
  int unaff_s5;
  undefined2 unaff_s6;
  undefined2 unaff_s7;
  undefined1 unaff_s8;
  undefined2 in_stack_00000110;
  int in_stack_00000118;
  
  while( true ) {
    unaff_s1 = unaff_s1 + 1;
    if (unaff_s3 <= unaff_s1) {
      return unaff_s2;
    }
    *unaff_s0 = (ushort)(byte)(&stack0x00000010)[unaff_s1];
    cVar1 = (&stack0x00000090)[unaff_s1];
    *(char *)(unaff_s0 + -5) = cVar1;
    puVar3 = (undefined1 *)
             (((int)cVar1 + *(char *)((int)unaff_s0 + -0xf) * 0x10 & 0xffffU) * 0x20 + DAT_800cefa0)
    ;
    *(undefined1 *)((int)unaff_s0 + -7) = *puVar3;
    *(undefined1 *)((int)unaff_s0 + -9) = puVar3[2];
    *(undefined1 *)(unaff_s0 + -4) = puVar3[3];
    *(undefined1 *)(unaff_s0 + -3) = puVar3[4];
    *(undefined1 *)((int)unaff_s0 + -5) = puVar3[5];
    *(undefined1 *)(unaff_s0 + -2) = puVar3[1];
    uVar4 = _SsVmAlloc(0);
    uVar4 = uVar4 & 0xff;
    iVar6 = (int)DAT_800cefa4;
    unaff_s0[1] = (ushort)uVar4;
    if ((int)uVar4 < iVar6) break;
    unaff_s2 = 0xffffffff;
  }
  (&DAT_800ce79d)[uVar4 * 0x38] = 1;
  (&DAT_800ce782)[(short)unaff_s0[1] * 0x1c] = 0;
  (&DAT_800ce790)[(short)unaff_s0[1] * 0x1c] = unaff_s6;
  (&DAT_800ce798)[(short)unaff_s0[1] * 0x1c] = (short)*(char *)((int)unaff_s0 + -0x15);
  (&DAT_800ce792)[(short)unaff_s0[1] * 0x1c] = (short)*(char *)((int)unaff_s0 + -0xf);
  (&DAT_800ce794)[(short)unaff_s0[1] * 0x1c] = in_stack_00000110;
  if (in_stack_00000118 != 0x21) {
    (&DAT_800ce788)[(short)unaff_s0[1] * 0x1c] = unaff_s4;
    (&DAT_800ce78c)[(short)unaff_s0[1] * 0x1c] = (ushort)*(byte *)(unaff_s5 + 0x17);
  }
  (&DAT_800ce78a)[(short)unaff_s0[1] * 0x38] = unaff_s8;
  (&DAT_800ce7b6)[(short)unaff_s0[1] * 0x1c] = (short)(char)unaff_s0[-9];
  (&DAT_800ce796)[(short)unaff_s0[1] * 0x1c] = (short)(char)unaff_s0[-5];
  (&DAT_800ce78e)[(short)unaff_s0[1] * 0x1c] = unaff_s7;
  (&DAT_800ce79a)[(short)unaff_s0[1] * 0x1c] = (short)*(char *)((int)unaff_s0 + -7);
  (&DAT_800ce780)[(short)unaff_s0[1] * 0x1c] = *unaff_s0;
  _SsVmDoAllocate();
  if (*unaff_s0 == 0xff) {
    vmNoiseOn((char)unaff_s0[1]);
    uVar5 = VM_KEY_OBJ_4B4();
    return uVar5;
  }
  uVar2 = note2pitch();
  _SsVmKeyOnNow(unaff_s3,uVar2);
  uVar5 = VM_KEY_OBJ_4D0();
  return uVar5;
}


