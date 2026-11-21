/* Function: DrawVSConfirmButton */
/* Address: 8002715c */

void DrawVSConfirmButton(void)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  uchar auStack_20 [8];
  
  puVar1 = local_40 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd28 >> (3 - uVar3) * 8;
  local_40 = (undefined1  [4])DAT_8001bd28;
  puVar1 = local_3c + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd2c >> (3 - uVar3) * 8;
  local_3c = (undefined1  [4])DAT_8001bd2c;
  puVar1 = local_38 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd30 >> (3 - uVar3) * 8;
  local_38 = (undefined1  [4])DAT_8001bd30;
  puVar1 = local_34 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd34 >> (3 - uVar3) * 8;
  local_34 = (undefined1  [4])DAT_8001bd34;
  puVar1 = auStack_28 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd38 >> (3 - uVar3) * 8;
  auStack_28._0_4_ = DAT_8001bd38;
  memset(auStack_20,'\0',4);
  if ((g_VSDetailMode == 1) && (g_VSDetailIndex == 2)) {
    bVar2 = *(byte *)((&g_PadRawState)[g_RaceInitFlag * 3] + 4);
  }
  else {
    bVar2 = (&g_PlayerCarColor1)[g_RaceInitFlag];
  }
  local_34._0_2_ = 2;
  local_38._0_2_ = (byte)(&g_PlayerCarColor1)[g_RaceInitFlag] - 0x60;
  local_38._2_2_ = 0xfff8;
  DrawSpriteScaled(auStack_28,local_38,g_MenuAnimPtr + 4);
  puVar1 = auStack_30 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800acb68 >> (3 - uVar3) * 8;
  auStack_30._0_4_ = DAT_800acb68;
  local_40._0_2_ = -0x60;
  local_3c._0_2_ = (ushort)bVar2;
  DrawSpriteScaled(auStack_30,local_40,g_MenuAnimPtr + 4);
  puVar1 = auStack_30 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | g_MenuSpriteData3 >> (3 - uVar3) * 8;
  auStack_30._0_4_ = g_MenuSpriteData3;
  local_3c._0_2_ = 0xff - (ushort)bVar2;
  local_40._0_2_ = local_40._0_2_ + (ushort)bVar2;
  DrawSpriteScaled(auStack_30,local_40,g_MenuAnimPtr + 4);
  local_38._0_2_ = 0xff9c;
  local_34._0_2_ = 300;
  DrawSpriteScaled(auStack_20,local_38,g_MenuAnimPtr + 4);
  return;
}


