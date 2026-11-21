/* Function: _spu_FiDMA */
/* Address: 80097f3c */

void _spu_FiDMA(void)

{
  undefined *puVar1;
  uint uVar2;
  
  if (DAT_800c3da0 == 0) {
    _spu_Fw1ts();
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(puVar1 + 0x1aa) & 0x30) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) break;
      uVar2 = uVar2 + 1;
    } while ((*(ushort *)(puVar1 + 0x1aa) & 0x30) != 0);
  }
  if (DAT_800c3d88 != (code *)0x0) {
    (*DAT_800c3d88)();
    SPU_OBJ_4EC();
    return;
  }
  DeliverEvent(0xf0000009,0x20);
  return;
}


