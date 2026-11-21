/* Function: FUN_800538bc */
/* Address: 800538bc */

int FUN_800538bc(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar4 = *(ushort **)(&g_CarCollisionBounce + (uint)*(byte *)(param_1 + 4) * 0x20);
  uVar3 = 0;
  uVar5 = 0;
  if (((*puVar4 & 0x8000) == 0) && ((*(ushort *)(param_1 + 8) & 0x8000) != 0)) {
    *puVar4 = *puVar4 | 0x8000;
    puVar4[0x28] = puVar4[0x28] + *(short *)(param_1 + 0x20);
    puVar4[0x29] = puVar4[0x29] + *(short *)(param_1 + 0x22);
    puVar4[10] = (ushort)*(byte *)(param_1 + 10);
    puVar4[0xb] = (ushort)*(byte *)(param_1 + 0xb);
    puVar4[0xc] = (ushort)*(byte *)(param_1 + 0xc);
    puVar4[0xd] = (ushort)*(byte *)(param_1 + 0xd);
    puVar4[0xe] = (ushort)*(byte *)(param_1 + 0xe);
    puVar4[0xf] = (ushort)*(byte *)(param_1 + 0xf);
    puVar4[0x2e] = (ushort)*(byte *)(param_1 + 0x12);
    puVar4[0x2f] = (ushort)*(byte *)(param_1 + 0x13);
    puVar4[0x30] = (ushort)*(byte *)(param_1 + 0x14);
    puVar4[0x31] = (ushort)*(byte *)(param_1 + 0x15);
    puVar4[0x35] = (ushort)*(byte *)(param_1 + 0x1a);
    puVar4[0x36] = (ushort)*(byte *)(param_1 + 0x1b);
    puVar4[0x37] = (ushort)*(byte *)(param_1 + 0x1c);
    puVar4[0x27] = puVar4[0x27] + (ushort)*(byte *)(param_1 + 0x26) * 10;
    bVar1 = *(byte *)(param_1 + 0x1f);
    uVar3 = (ushort)bVar1;
    if ((bVar1 & 0x80) != 0) {
      uVar3 = bVar1 | 0xff80;
    }
    puVar4[0x33] = uVar3;
    puVar4[0x1e] = *(ushort *)(param_1 + 0x24);
    if (*(char *)(param_1 + 0x10) != '\0') {
      puVar4[0x2c] = (ushort)*(byte *)(param_1 + 0x10);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      puVar4[0x2d] = (ushort)*(byte *)(param_1 + 0x11);
    }
    if ((*(ushort *)(param_1 + 8) & 8) == 0) {
      uVar3 = FUN_80053668(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17),
                           *(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
      puVar4[0x34] = uVar3;
    }
    uVar3 = *(ushort *)(param_1 + 8);
    uVar5 = (uint)*(byte *)(param_1 + 0x1e);
  }
  iVar2 = FUN_80052d6c((int)*(short *)(&DAT_800b34a0 + (short)puVar4[0x37] * 2));
  *(int *)(&g_BarrierFriction + (uint)*(byte *)(param_1 + 4) * 0x20) = iVar2;
  if ((uVar3 & 2) != 0) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
  }
  if (uVar5 != 0) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10 << (uVar5 - 1 & 0x1f);
  }
  DAT_800cd16c = DAT_800cd16c + 1;
  return param_1 + 0x2c;
}


