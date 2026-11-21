/* Function: SEQINIT_OBJ_1D8 */
/* Address: 800918e4 */

undefined4 SEQINIT_OBJ_1D8(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  short in_t1;
  undefined4 *unaff_s0;
  
  puVar4 = (undefined1 *)*unaff_s0;
  unaff_s0[0x25] = unaff_s0[0x23];
  uVar1 = *puVar4;
  *unaff_s0 = puVar4 + 1;
  *(undefined1 *)(unaff_s0 + 9) = uVar1;
  uVar1 = puVar4[1];
  *unaff_s0 = puVar4 + 2;
  *(undefined1 *)((int)unaff_s0 + 0x25) = uVar1;
  uVar5 = _SsReadDeltaValue((int)in_t1,0);
  uVar2 = (int)*(short *)(unaff_s0 + 0x14) * unaff_s0[0x23];
  unaff_s0[2] = *unaff_s0;
  iVar3 = DAT_800cdee4;
  unaff_s0[0x21] = uVar5;
  unaff_s0[0x24] = uVar5;
  unaff_s0[4] = 0;
  unaff_s0[3] = *unaff_s0;
  unaff_s0[1] = *unaff_s0;
  uVar7 = iVar3 * 0x3c;
  if (uVar2 * 10 < uVar7) {
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    *(short *)((int)unaff_s0 + 0x52) = (short)((uint)(iVar3 * 600) / uVar2);
    uVar5 = SEQINIT_OBJ_324();
    return uVar5;
  }
  if (uVar7 == 0) {
    trap(0x1c00);
  }
  if (uVar7 == 0) {
    trap(0x1c00);
  }
  *(undefined2 *)((int)unaff_s0 + 0x52) = 0xffff;
  sVar6 = (short)((uint)((int)*(short *)(unaff_s0 + 0x14) * unaff_s0[0x23] * 10) / uVar7);
  *(short *)(unaff_s0 + 0x15) = sVar6;
  if ((uint)(iVar3 * 0x1e) < (uint)((int)*(short *)(unaff_s0 + 0x14) * unaff_s0[0x23] * 10) % uVar7)
  {
    *(short *)(unaff_s0 + 0x15) = sVar6 + 1;
  }
  *(undefined2 *)((int)unaff_s0 + 0x56) = *(undefined2 *)(unaff_s0 + 0x15);
  return 0;
}


