/* Function: _SpuSetAnyVoice */
/* Address: 80098dac */

uint _SpuSetAnyVoice(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  
  uVar4 = (ushort)param_2;
  uVar1 = (ushort)(param_2 >> 0x10);
  if (param_1 == 1) {
    if ((DAT_800c3d3c & 1) != 0) {
      *(ushort *)(&DAT_800ceff8 + param_3 * 2) = *(ushort *)(&DAT_800ceff8 + param_3 * 2) | uVar4;
      *(ushort *)(&DAT_800ceff8 + param_4 * 2) =
           *(ushort *)(&DAT_800ceff8 + param_4 * 2) | uVar1 & 0xff;
      DAT_800c3d08 = DAT_800c3d08 | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      uVar2 = S_SAV_OBJ_130();
      return uVar2;
    }
    puVar3 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_4 * 2);
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_3 * 2) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_3 * 2) | uVar4;
    *puVar3 = *puVar3 | uVar1 & 0xff;
    uVar2 = S_SAV_OBJ_2AC();
    return uVar2;
  }
  if (1 < param_1) {
    if (param_1 != 8) {
      uVar2 = S_SAV_OBJ_2B4();
      return uVar2;
    }
    if ((DAT_800c3d3c & 1) != 0) {
      *(ushort *)(&DAT_800ceff8 + param_3 * 2) = uVar4;
      *(ushort *)(&DAT_800ceff8 + param_4 * 2) = uVar1 & 0xff;
      DAT_800c3d08 = DAT_800c3d08 | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      uVar2 = S_SAV_OBJ_2A4();
      return uVar2;
    }
    puVar3 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_4 * 2);
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_3 * 2) = uVar4;
    *puVar3 = uVar1 & 0xff;
    return param_2 & 0xffffff;
  }
  if (param_1 != 0) {
    uVar2 = S_SAV_OBJ_2B4();
    return uVar2;
  }
  if ((DAT_800c3d3c & 1) != 0) {
    *(ushort *)(&DAT_800ceff8 + param_3 * 2) = *(ushort *)(&DAT_800ceff8 + param_3 * 2) & ~uVar4;
    *(ushort *)(&DAT_800ceff8 + param_4 * 2) =
         *(ushort *)(&DAT_800ceff8 + param_4 * 2) & ~(uVar1 & 0xff);
    DAT_800c3d08 = DAT_800c3d08 | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    uVar2 = S_SAV_OBJ_200();
    return uVar2;
  }
  puVar3 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_4 * 2);
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_3 * 2) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_3 * 2) & ~uVar4;
  *puVar3 = *puVar3 & ~(uVar1 & 0xff);
  uVar2 = S_SAV_OBJ_2AC();
  return uVar2;
}


