/* Function: MenuSubState_DrawBackground */
/* Address: 80027e5c */

void MenuSubState_DrawBackground(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  uchar auStack_10 [8];
  
  puVar1 = auStack_18 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bcc0 >> (3 - uVar2) * 8;
  auStack_18 = (undefined1  [4])DAT_8001bcc0;
  puVar1 = auStack_14 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bcc4 >> (3 - uVar2) * 8;
  auStack_14 = (undefined1  [4])DAT_8001bcc4;
  memset(auStack_10,'\0',4);
  DrawMenuBackground(auStack_10,auStack_18,g_MenuAnimPtr + 4);
  g_SubState2 = 3;
  return;
}


