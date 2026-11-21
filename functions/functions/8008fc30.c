/* Function: CC_6_OBJ_274 */
/* Address: 8008fc30 */

void CC_6_OBJ_274(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_v1;
  int unaff_s0;
  uint unaff_s4;
  short unaff_s7;
  short unaff_s8;
  uint uStack00000010;
  uint uStack00000014;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack00000030;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  
  uVar5 = in_stack_00000058;
  uVar4 = in_stack_00000054;
  uVar3 = in_stack_00000050;
  uStack00000010 = in_stack_0000004c;
  uStack00000030 = unaff_s4 & 0xff;
  uVar1 = (uint)((int)register0x00000074 + 0x13) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x13) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | in_stack_0000004c >> (3 - uVar1) * 8;
  uVar1 = (uint)((int)register0x00000074 + 0x17) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x17) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  uStack00000014 = uVar3;
  uVar1 = (uint)((int)register0x00000074 + 0x1b) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x1b) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uStack00000018 = uVar4;
  uVar1 = (uint)((int)register0x00000074 + 0x1f) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x1f) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar5 >> (3 - uVar1) * 8;
  uVar4 = in_stack_00000064;
  uVar3 = in_stack_00000060;
  uStack00000020 = in_stack_0000005c;
  uStack0000001c = uVar5;
  uVar1 = (uint)((int)register0x00000074 + 0x23) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x23) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | in_stack_0000005c >> (3 - uVar1) * 8;
  uVar1 = (uint)((int)register0x00000074 + 0x27) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x27) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  uStack00000024 = uVar3;
  uVar1 = (uint)((int)register0x00000074 + 0x2b) & 3;
  puVar2 = (uint *)((undefined1 *)((int)register0x00000074 + 0x2b) + -uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uStack00000028 = uVar4;
  (*(code *)(&DAT_800cde8c)[in_v1])();
  uVar6 = _SsReadDeltaValue((int)unaff_s7,(int)unaff_s8);
  *(undefined4 *)(unaff_s0 + 0x90) = uVar6;
  *(undefined1 *)(unaff_s0 + 0x1f) = 0;
  CC_6_OBJ_34C();
  return;
}


