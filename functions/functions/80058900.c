/* Function: SetSpriteTexture */
/* Address: 80058900 */

void SetSpriteTexture(int param_1,undefined2 param_2,undefined2 param_3,undefined2 *param_4)

{
  short sVar1;
  ushort uVar2;
  
  param_1 = param_1 * 0xe;
  *(undefined2 *)(&g_SpriteTable + param_1) = param_2;
  *(undefined2 *)(&g_SpriteTable_V + param_1) = param_3;
  *(undefined2 *)(&g_SpriteTable_W + param_1) = *param_4;
  *(undefined2 *)(&g_SpriteTable_H + param_1) = param_4[1];
  *(undefined2 *)(&g_SpriteTable_TPage + param_1) = param_4[5];
  sVar1 = param_4[9];
  uVar2 = param_4[8];
  g_SpriteTableDirty = 0;
  *(undefined2 *)(&g_SpriteTable_U2 + param_1) = *(undefined2 *)(&g_SpriteTable + param_1);
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
  *(ushort *)(&g_SpriteTable_CLUT + param_1) = sVar1 << 6 | uVar2 >> 4 & 0x3f;
  return;
}


