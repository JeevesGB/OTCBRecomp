/* Function: FUN_80053b44 */
/* Address: 80053b44 */

int FUN_80053b44(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(&g_CarCollisionBounce + (uint)*(byte *)(param_1 + 4) * 0x20);
  if (((*puVar3 & 0x8000) == 0) && ((*(ushort *)(param_1 + 8) & 0x8000) != 0)) {
    *puVar3 = *puVar3 | 0x8000;
    puVar3[0x28] = puVar3[0x28] + *(short *)(param_1 + 0x20);
    puVar3[0x29] = puVar3[0x29] + *(short *)(param_1 + 0x22);
    puVar3[10] = (ushort)*(byte *)(param_1 + 10);
    puVar3[0xb] = (ushort)*(byte *)(param_1 + 0xb);
    puVar3[0xc] = (ushort)*(byte *)(param_1 + 0xc);
    puVar3[0xd] = (ushort)*(byte *)(param_1 + 0xd);
    puVar3[0xe] = (ushort)*(byte *)(param_1 + 0xe);
    puVar3[0xf] = (ushort)*(byte *)(param_1 + 0xf);
    puVar3[0x2e] = (ushort)*(byte *)(param_1 + 0x12);
    puVar3[0x2f] = (ushort)*(byte *)(param_1 + 0x13);
    puVar3[0x30] = (ushort)*(byte *)(param_1 + 0x14);
    puVar3[0x31] = (ushort)*(byte *)(param_1 + 0x15);
    puVar3[0x35] = (ushort)*(byte *)(param_1 + 0x1a);
    puVar3[0x36] = (ushort)*(byte *)(param_1 + 0x1b);
    puVar3[0x37] = (ushort)*(byte *)(param_1 + 0x1c);
    puVar3[0x27] = puVar3[0x27] + (ushort)*(byte *)(param_1 + 0x26) * 10;
    bVar1 = *(byte *)(param_1 + 0x1f);
    uVar2 = (ushort)bVar1;
    if ((bVar1 & 0x80) != 0) {
      uVar2 = bVar1 | 0xff80;
    }
    puVar3[0x33] = uVar2;
    puVar3[0x1e] = *(ushort *)(param_1 + 0x24);
    if (*(char *)(param_1 + 0x10) != '\0') {
      puVar3[0x2c] = (ushort)*(byte *)(param_1 + 0x10);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      puVar3[0x2d] = (ushort)*(byte *)(param_1 + 0x11);
    }
    if ((*(ushort *)(param_1 + 8) & 8) == 0) {
      uVar2 = FUN_80053668(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17),
                           *(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
      puVar3[0x34] = uVar2;
    }
  }
  *(undefined4 *)(&g_BarrierFriction + (uint)*(byte *)(param_1 + 4) * 0x20) = 0;
  return param_1 + 0x2c;
}


