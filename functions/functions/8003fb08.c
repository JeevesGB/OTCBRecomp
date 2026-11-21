/* Function: FUN_8003fb08 */
/* Address: 8003fb08 */

void FUN_8003fb08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short local_10;
  short sStack_e;
  short local_c;
  short sStack_a;
  short local_8;
  short sStack_6;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(short *)(iVar2 + 8) = (short)(*(int *)(param_1 + 0x188) >> 0xc);
  *(short *)(iVar2 + 10) = (short)(*(int *)(param_1 + 0x18c) >> 0xc);
  *(short *)(iVar2 + 0xc) = (short)(*(int *)(param_1 + 400) >> 0xc);
  uVar1 = (&g_SinCosTable)[*(ushort *)(iVar2 + 8) & 0xfff];
  local_c = (short)(&g_SinCosTable)[*(ushort *)(iVar2 + 10) & 0xfff];
  local_10 = (short)uVar1;
  iVar3 = (int)local_10;
  sStack_a = (short)((uint)(&g_SinCosTable)[*(ushort *)(iVar2 + 10) & 0xfff] >> 0x10);
  sStack_6 = (short)((uint)(&g_SinCosTable)[*(ushort *)(iVar2 + 0xc) & 0xfff] >> 0x10);
  local_8 = (short)(&g_SinCosTable)[*(ushort *)(iVar2 + 0xc) & 0xfff];
  *(short *)(iVar2 + 0x10) =
       (short)((int)sStack_a * (int)sStack_6 >> 0xc) +
       (short)((iVar3 * local_c >> 6) * (int)local_8 >> 0x12);
  *(short *)(iVar2 + 0x12) =
       (short)((iVar3 * local_c >> 6) * (int)sStack_6 >> 0x12) -
       (short)((int)sStack_a * (int)local_8 >> 0xc);
  sStack_e = (short)((uint)uVar1 >> 0x10);
  *(short *)(iVar2 + 0x14) = (short)((int)sStack_e * (int)local_c >> 0xc);
  *(short *)(iVar2 + 0x16) = (short)((int)sStack_e * (int)local_8 >> 0xc);
  *(short *)(iVar2 + 0x1a) = -local_10;
  *(short *)(iVar2 + 0x18) = (short)((int)sStack_e * (int)sStack_6 >> 0xc);
  *(short *)(iVar2 + 0x1c) =
       (short)((iVar3 * sStack_a >> 6) * (int)local_8 >> 0x12) -
       (short)((int)local_c * (int)sStack_6 >> 0xc);
  *(short *)(iVar2 + 0x1e) =
       (short)((int)local_c * (int)local_8 >> 0xc) +
       (short)((iVar3 * sStack_a >> 6) * (int)sStack_6 >> 0x12);
  *(short *)(iVar2 + 0x20) = (short)((int)sStack_e * (int)sStack_a >> 0xc);
  *(int *)(iVar2 + 0x24) = *(int *)(param_1 + 0x68) >> 0xc;
  *(int *)(iVar2 + 0x28) = *(int *)(param_1 + 0x6c) >> 0xc;
  *(int *)(iVar2 + 0x2c) = *(int *)(param_1 + 0x70) >> 0xc;
  return;
}


