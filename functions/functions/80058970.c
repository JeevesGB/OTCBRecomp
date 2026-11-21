/* Function: SetSpriteTextureEx */
/* Address: 80058970 */

void SetSpriteTextureEx(short param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                       undefined2 *param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xe;
  *(undefined2 *)(&g_SpriteTable + iVar3) = param_2;
  *(undefined2 *)(&g_SpriteTable_V + iVar3) = param_3;
  *(undefined2 *)(&g_SpriteTable_W + iVar3) = *param_5;
  *(undefined2 *)(&g_SpriteTable_H + iVar3) = param_5[1];
  *(undefined2 *)(&g_SpriteTable_TPage + iVar3) = param_5[5];
  sVar1 = param_5[9];
  uVar2 = param_5[8];
  g_SpriteTableDirty = 0;
  *(undefined2 *)(&g_SpriteTable_U2 + iVar3) = param_4;
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
  *(ushort *)(&g_SpriteTable_CLUT + iVar3) = sVar1 << 6 | uVar2 >> 4 & 0x3f;
  return;
}


