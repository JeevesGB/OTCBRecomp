/* Function: SPU_OBJ_D4 */
/* Address: 80097bd0 */

undefined4 SPU_OBJ_D4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int unaff_s0;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
  puVar3 = &DAT_800cf180;
  DAT_800c3d74 = 2;
  DAT_800c3d78 = 3;
  DAT_800c3d7c = 8;
  DAT_800c3d80 = 7;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1ac) = 4;
  *(undefined2 *)(puVar1 + 0x184) = 0;
  *(undefined2 *)(puVar1 + 0x186) = 0;
  *(undefined2 *)(puVar1 + 0x18c) = 0xffff;
  *(undefined2 *)(puVar1 + 0x18e) = 0xffff;
  *(undefined2 *)(puVar1 + 0x198) = 0;
  *(undefined2 *)(puVar1 + 0x19a) = 0;
  do {
    *puVar3 = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  } while (param_1 < 10);
  if (unaff_s0 == 0) {
    DAT_800c3d68 = 0x200;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 400) = 0;
    *(undefined2 *)(puVar1 + 0x192) = 0;
    *(undefined2 *)(puVar1 + 0x194) = 0;
    *(undefined2 *)(puVar1 + 0x196) = 0;
    *(undefined2 *)(puVar1 + 0x1b0) = 0;
    *(undefined2 *)(puVar1 + 0x1b2) = 0;
    *(undefined2 *)(puVar1 + 0x1b4) = 0;
    *(undefined2 *)(puVar1 + 0x1b6) = 0;
    SPU_OBJ_280(&DAT_800c3d90,0x10);
    iVar2 = 0;
    puVar3 = (undefined2 *)PTR_VOICE_00_LEFT_RIGHT_800c3d50;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0x3fff;
      puVar3[3] = 0x200;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (iVar2 < 0x18);
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x188) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18a) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x18c) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18e) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
  }
  DAT_800c3d84 = 1;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) = 0xc000;
  DAT_800c3d88 = 0;
  DAT_800c3d8c = 0;
  return 0;
}


