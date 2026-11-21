/* Function: FUN_8003fdac */
/* Address: 8003fdac */

void FUN_8003fdac(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short local_28;
  short sStack_26;
  short local_24;
  short sStack_22;
  short local_20;
  short sStack_1e;
  
  iVar4 = ((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x9c)) + *(int *)(param_1 + 0x90)) -
          *(int *)(param_1 + 0xa8) >> 8;
  iVar6 = *(int *)(param_1 + 0x14);
  lVar1 = SquareRoot0(*(int *)(param_1 + 0x1d0) - iVar4 * iVar4);
  lVar1 = ratan2(iVar4,lVar1);
  uVar5 = -(int)*(short *)(iVar6 + 0x30) - lVar1;
  if ((uVar5 & 0x800) == 0) {
    uVar5 = uVar5 & 0x7ff;
  }
  else {
    uVar5 = uVar5 | 0xfffff800;
  }
  iVar4 = ((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x90)) + *(int *)(param_1 + 0x9c)) -
          *(int *)(param_1 + 0xa8) >> 8;
  lVar1 = SquareRoot0(*(int *)(param_1 + 0x1cc) - iVar4 * iVar4);
  lVar1 = ratan2(iVar4,lVar1);
  uVar3 = lVar1 - *(short *)(iVar6 + 0x34);
  if ((uVar3 & 0x800) == 0) {
    uVar3 = uVar3 & 0x7ff;
  }
  else {
    uVar3 = uVar3 | 0xfffff800;
  }
  *(short *)(iVar6 + 0x30) =
       *(short *)(iVar6 + 0x30) +
       ((short)((ulonglong)((longlong)(int)uVar5 * 0x55555556) >> 0x20) -
       (short)((int)uVar5 >> 0x1f));
  *(short *)(iVar6 + 0x32) = (short)(*(int *)(param_1 + 0x18c) >> 0xc);
  *(short *)(iVar6 + 0x34) =
       *(short *)(iVar6 + 0x34) +
       ((short)((ulonglong)((longlong)(int)uVar3 * 0x55555556) >> 0x20) -
       (short)((int)uVar3 >> 0x1f));
  uVar2 = (&g_SinCosTable)[*(ushort *)(iVar6 + 0x30) & 0xfff];
  local_24 = (short)(&g_SinCosTable)[*(ushort *)(iVar6 + 0x32) & 0xfff];
  local_28 = (short)uVar2;
  iVar4 = (int)local_28;
  sStack_1e = (short)((uint)(&g_SinCosTable)[*(ushort *)(iVar6 + 0x34) & 0xfff] >> 0x10);
  sStack_22 = (short)((uint)(&g_SinCosTable)[*(ushort *)(iVar6 + 0x32) & 0xfff] >> 0x10);
  local_20 = (short)(&g_SinCosTable)[*(ushort *)(iVar6 + 0x34) & 0xfff];
  *(short *)(iVar6 + 0x38) =
       (short)((int)sStack_22 * (int)sStack_1e >> 0xc) +
       (short)((iVar4 * local_24 >> 6) * (int)local_20 >> 0x12);
  *(short *)(iVar6 + 0x3a) =
       (short)((iVar4 * local_24 >> 6) * (int)sStack_1e >> 0x12) -
       (short)((int)sStack_22 * (int)local_20 >> 0xc);
  sStack_26 = (short)((uint)uVar2 >> 0x10);
  *(short *)(iVar6 + 0x3c) = (short)((int)sStack_26 * (int)local_24 >> 0xc);
  *(short *)(iVar6 + 0x3e) = (short)((int)sStack_26 * (int)local_20 >> 0xc);
  *(short *)(iVar6 + 0x40) = (short)((int)sStack_26 * (int)sStack_1e >> 0xc);
  *(short *)(iVar6 + 0x42) = -local_28;
  *(short *)(iVar6 + 0x44) =
       (short)((iVar4 * sStack_22 >> 6) * (int)local_20 >> 0x12) -
       (short)((int)local_24 * (int)sStack_1e >> 0xc);
  *(short *)(iVar6 + 0x46) =
       (short)((int)local_24 * (int)local_20 >> 0xc) +
       (short)((iVar4 * sStack_22 >> 6) * (int)sStack_1e >> 0x12);
  *(short *)(iVar6 + 0x48) = (short)((int)sStack_26 * (int)sStack_22 >> 0xc);
  *(int *)(iVar6 + 0x4c) = *(int *)(param_1 + 0x68) >> 0xc;
  *(int *)(iVar6 + 0x50) =
       (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x9c) +
        *(int *)(param_1 + 0xa8) >> 0xe) + -1;
  *(int *)(iVar6 + 0x54) = *(int *)(param_1 + 0x70) >> 0xc;
  return;
}


