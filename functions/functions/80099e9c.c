/* Function: SpuSetKey */
/* Address: 80099e9c */

void SpuSetKey(long on_off,ulong voice_bit)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
  uVar3 = voice_bit & 0xffffff;
  uVar2 = (ushort)uVar3;
  uVar4 = (ushort)(uVar3 >> 0x10);
  if (on_off == 0) {
    if ((DAT_800c3d3c & 1) == 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x18c) = uVar2;
      *(ushort *)(puVar1 + 0x18e) = uVar4;
      DAT_800c3cdc = DAT_800c3cdc & ~uVar3;
    }
    else {
      DAT_800c3d08 = DAT_800c3d08 | 1;
      DAT_800c3d04 = DAT_800c3d04 & ~uVar3;
      if ((DAT_800cf180 & uVar3) != 0) {
        DAT_800cf180 = DAT_800cf180 & (ushort)~uVar3;
      }
      DAT_800cf184 = uVar2;
      DAT_800cf186 = uVar4;
      if (((uint)DAT_800cf182 & uVar3 >> 0x10) != 0) {
        DAT_800cf182 = DAT_800cf182 & ~uVar4;
        S_SK_OBJ_1B4();
        return;
      }
    }
  }
  else if (on_off == 1) {
    if ((DAT_800c3d3c & 1) == 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x188) = uVar2;
      *(ushort *)(puVar1 + 0x18a) = uVar4;
      S_SK_OBJ_1AC();
      return;
    }
    DAT_800c3d08 = DAT_800c3d08 | 1;
    DAT_800c3d04 = DAT_800c3d04 | uVar3;
    if ((DAT_800cf184 & uVar3) != 0) {
      DAT_800cf184 = DAT_800cf184 & ~uVar2;
    }
    DAT_800cf180 = uVar2;
    DAT_800cf182 = uVar4;
    if (((uint)DAT_800cf186 & uVar3 >> 0x10) != 0) {
      DAT_800cf186 = DAT_800cf186 & ~uVar4;
      S_SK_OBJ_1B4();
      return;
    }
  }
  return;
}


