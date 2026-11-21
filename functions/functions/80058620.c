/* Function: DrawText */
/* Address: 80058620 */

void DrawText(byte *param_1,short param_2,undefined2 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  short sVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  short sVar13;
  
  uVar2 = *g_ActiveSpritePtr;
  uVar3 = g_ActiveSpritePtr[1];
  uVar4 = g_ActiveSpritePtr[2];
  uVar5 = g_ActiveSpritePtr[3];
  puVar12 = g_SpriteTableDirty;
  if (g_SpriteTableDirty == (uint *)0x0) {
    puVar12 = (uint *)(g_OTBasePtr + 8);
  }
  sVar6 = g_ActiveSpritePtr[6];
  sVar13 = g_ActiveSpritePtr[5] + g_ActiveSpriteOffset;
  bVar1 = *param_1;
  puVar9 = g_VRAMRectPtr;
  while (uVar8 = (uint)bVar1, uVar8 != 0) {
    param_1 = param_1 + 1;
    if (uVar8 < 0x60) {
      iVar11 = uVar8 - 0x20;
    }
    else {
      iVar11 = uVar8 - 0x40;
    }
    g_VRAMRectPtr = puVar9 + 5;
                    /* Probable PsyQ macro: setSprt() + setShadeTex(sprt, 1) */
    *(undefined1 *)((int)puVar9 + 7) = 0x65;
    *(undefined1 *)((int)puVar9 + 3) = 4;
    *(short *)(puVar9 + 2) = param_2;
    *(undefined2 *)((int)puVar9 + 10) = param_3;
    iVar10 = iVar11;
    if (iVar11 < 0) {
      iVar10 = iVar11 + 0xf;
    }
    cVar7 = (char)(iVar10 >> 4);
    *(char *)(puVar9 + 3) = (char)uVar4 + ((char)iVar11 + cVar7 * -0x10) * (char)uVar2;
    param_2 = param_2 + sVar6;
    *(short *)((int)puVar9 + 0xe) = sVar13;
    *(undefined2 *)(puVar9 + 4) = uVar2;
    *(undefined2 *)((int)puVar9 + 0x12) = uVar3;
    *(undefined1 *)((int)puVar9 + 6) = 0x80;
    *(undefined1 *)((int)puVar9 + 5) = 0x80;
    *(undefined1 *)(puVar9 + 1) = 0x80;
    *(char *)((int)puVar9 + 0xd) = (char)uVar5 + cVar7 * (char)uVar3;
                    /* Probable PsyQ macro: addPrim(). */
    *puVar9 = *puVar9 & 0xff000000 | *puVar12 & 0xffffff;
    *puVar12 = *puVar12 & 0xff000000 | (uint)puVar9 & 0xffffff;
    puVar9 = g_VRAMRectPtr;
    bVar1 = *param_1;
  }
  g_VRAMRectPtr = puVar9;
  AddTPagePrim(puVar12,1,0,(int)(short)g_ActiveSpritePtr[4]);
  return;
}


