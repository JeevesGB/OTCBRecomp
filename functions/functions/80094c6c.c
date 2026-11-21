/* Function: VM_KEY_OBJ_110 */
/* Address: 80094c6c */

undefined4 VM_KEY_OBJ_110(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  undefined4 unaff_s2;
  short unaff_s3;
  int unaff_s4;
  int unaff_s5;
  short unaff_s6;
  undefined2 unaff_s7;
  undefined1 unaff_s8;
  short in_stack_00000110;
  int in_stack_00000118;
  
  puVar3 = (undefined1 *)(in_stack_00000110 * 0x10 + DAT_800cef94);
  DAT_800cefba = puVar3[1];
  DAT_800cefbb = puVar3[4];
  DAT_800cefb0 = *puVar3;
  uVar4 = 0xffffffff;
  DAT_800cefb5 = unaff_s8;
  if ((int)DAT_800cefb7 < (int)(uint)*(ushort *)(DAT_800cef9c + 0x12)) {
    if (unaff_s4 == 0) {
      _SsVmKeyOff((int)unaff_s6,(int)unaff_s3,(int)in_stack_00000110,unaff_s7);
      uVar4 = VM_KEY_OBJ_4E8();
      return uVar4;
    }
    bVar1 = _SsVmSelectToneAndVag(&stack0x00000090,&stack0x00000010);
    bVar7 = 0;
    uVar4 = unaff_s2;
    if (bVar1 != 0) {
      in_stack_00000118 = (int)unaff_s6;
      uVar6 = 0;
      do {
        DAT_800cefc6 = (ushort)(byte)(&stack0x00000010)[uVar6];
        DAT_800cefbc = (&stack0x00000090)[uVar6];
        pcVar5 = (char *)(((int)DAT_800cefbc + DAT_800cefb7 * 0x10 & 0xffffU) * 0x20 + DAT_800cefa0)
        ;
        DAT_800cefbf = *pcVar5;
        DAT_800cefbd = pcVar5[2];
        DAT_800cefbe = pcVar5[3];
        DAT_800cefc0 = pcVar5[4];
        DAT_800cefc1 = pcVar5[5];
        DAT_800cefc2 = pcVar5[1];
        uVar6 = _SsVmAlloc(0);
        uVar6 = uVar6 & 0xff;
        DAT_800cefc8 = (short)uVar6;
        if ((int)uVar6 < (int)DAT_800cefa4) {
          (&DAT_800ce79d)[uVar6 * 0x38] = 1;
          (&DAT_800ce782)[DAT_800cefc8 * 0x1c] = 0;
          (&DAT_800ce790)[DAT_800cefc8 * 0x1c] = unaff_s6;
          (&DAT_800ce798)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefb1;
          (&DAT_800ce792)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefb7;
          (&DAT_800ce794)[DAT_800cefc8 * 0x1c] = in_stack_00000110;
          if (in_stack_00000118 != 0x21) {
            (&DAT_800ce788)[DAT_800cefc8 * 0x1c] = (short)unaff_s4;
            (&DAT_800ce78c)[DAT_800cefc8 * 0x1c] = (ushort)*(byte *)(unaff_s5 + 0x17);
          }
          (&DAT_800ce78a)[DAT_800cefc8 * 0x38] = unaff_s8;
          (&DAT_800ce7b6)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefb4;
          (&DAT_800ce796)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefbc;
          (&DAT_800ce78e)[DAT_800cefc8 * 0x1c] = unaff_s7;
          (&DAT_800ce79a)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefbf;
          (&DAT_800ce780)[DAT_800cefc8 * 0x1c] = DAT_800cefc6;
          _SsVmDoAllocate();
          if (DAT_800cefc6 != 0xff) {
            uVar2 = note2pitch();
            _SsVmKeyOnNow(bVar1,uVar2);
            uVar4 = VM_KEY_OBJ_4D0();
            return uVar4;
          }
          vmNoiseOn((undefined1)DAT_800cefc8);
          uVar4 = VM_KEY_OBJ_4B4();
          return uVar4;
        }
        uVar4 = 0xffffffff;
        bVar7 = bVar7 + 1;
        uVar6 = (uint)bVar7;
      } while (bVar7 < bVar1);
    }
  }
  return uVar4;
}


