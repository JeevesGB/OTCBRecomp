/* Function: FUN_80053d48 */
/* Address: 80053d48 */

int FUN_80053d48(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)(&g_CarCollisionBounce + (uint)*(byte *)(param_1 + 4) * 0x20);
  if (((*puVar5 & 0x8000) == 0) && ((*(ushort *)(param_1 + 8) & 0x8000) != 0)) {
    *puVar5 = *puVar5 | 0x8000;
    puVar5[0x28] = puVar5[0x28] + *(short *)(param_1 + 0x20);
    puVar5[0x29] = puVar5[0x29] + *(short *)(param_1 + 0x22);
    puVar5[10] = (ushort)*(byte *)(param_1 + 10);
    puVar5[0xb] = (ushort)*(byte *)(param_1 + 0xb);
    puVar5[0xc] = (ushort)*(byte *)(param_1 + 0xc);
    puVar5[0xd] = (ushort)*(byte *)(param_1 + 0xd);
    puVar5[0xe] = (ushort)*(byte *)(param_1 + 0xe);
    puVar5[0xf] = (ushort)*(byte *)(param_1 + 0xf);
    puVar5[0x2e] = (ushort)*(byte *)(param_1 + 0x12);
    puVar5[0x2f] = (ushort)*(byte *)(param_1 + 0x13);
    puVar5[0x30] = (ushort)*(byte *)(param_1 + 0x14);
    puVar5[0x31] = (ushort)*(byte *)(param_1 + 0x15);
    puVar5[0x35] = (ushort)*(byte *)(param_1 + 0x1a);
    puVar5[0x36] = (ushort)*(byte *)(param_1 + 0x1b);
    puVar5[0x37] = (ushort)*(byte *)(param_1 + 0x1c);
    puVar5[0x27] = puVar5[0x27] + (ushort)*(byte *)(param_1 + 0x26) * 10;
    bVar1 = *(byte *)(param_1 + 0x1f);
    uVar4 = (ushort)bVar1;
    if ((bVar1 & 0x80) != 0) {
      uVar4 = bVar1 | 0xff80;
    }
    puVar5[0x33] = uVar4;
    puVar5[0x1e] = *(ushort *)(param_1 + 0x24);
    if (*(char *)(param_1 + 0x10) != '\0') {
      puVar5[0x2c] = (ushort)*(byte *)(param_1 + 0x10);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      puVar5[0x2d] = (ushort)*(byte *)(param_1 + 0x11);
    }
    if ((*(ushort *)(param_1 + 8) & 8) == 0) {
      uVar4 = FUN_80053668(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17),
                           *(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
      puVar5[0x34] = uVar4;
    }
  }
  sVar2 = DAT_800b34f8;
  if (DAT_800cd16c < 2) {
    sVar2 = *(short *)(&DAT_800b34a0 + (short)puVar5[0x37] * 2);
    DAT_800cd16c = DAT_800cd16c + 1;
  }
  uVar3 = FUN_80052d6c((int)sVar2);
  *(undefined4 *)(&g_BarrierFriction + (uint)*(byte *)(param_1 + 4) * 0x20) = uVar3;
  return param_1 + 0x28;
}


