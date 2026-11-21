/* Function: _SsGetMetaEvent */
/* Address: 800913ec */

/* WARNING: Removing unreachable block (ram,0x80091488) */

void _SsGetMetaEvent(short param_1,short param_2,uchar param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  short sVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar8 = (undefined4 *)
           (*(int *)((int)&DAT_800cdee8 + ((int)((uint)(ushort)param_1 << 0x10) >> 0xe)) +
           param_2 * 0xb0);
  pbVar6 = (byte *)*puVar8;
  bVar1 = *pbVar6;
  *puVar8 = pbVar6 + 1;
  bVar2 = pbVar6[1];
  *puVar8 = pbVar6 + 2;
  iVar3 = DAT_800cdee4;
  uVar4 = (uint)pbVar6[2] | (uint)bVar1 << 0x10 | (uint)bVar2 << 8;
  uVar9 = 60000000 / uVar4;
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  uVar4 = (int)*(short *)(puVar8 + 0x14) * uVar9;
  *puVar8 = pbVar6 + 3;
  puVar8[0x25] = uVar9;
  uVar9 = iVar3 * 0x3c;
  if (uVar9 <= uVar4 * 10) {
    if (uVar9 == 0) {
      trap(0x1c00);
    }
    if (uVar9 == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)((int)puVar8 + 0x52) = 0xffff;
    sVar7 = (short)((uint)((int)*(short *)(puVar8 + 0x14) * puVar8[0x25] * 10) / uVar9);
    *(short *)(puVar8 + 0x15) = sVar7;
    if ((uint)(iVar3 * 0x1e) < (uint)((int)*(short *)(puVar8 + 0x14) * puVar8[0x25] * 10) % uVar9) {
      *(short *)(puVar8 + 0x15) = sVar7 + 1;
    }
    uVar5 = _SsReadDeltaValue((int)param_1,(int)param_2);
    puVar8[0x24] = uVar5;
    return;
  }
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  *(short *)((int)puVar8 + 0x52) = (short)((uint)(iVar3 * 600) / uVar4);
  MIDIMETA_OBJ_19C();
  return;
}


