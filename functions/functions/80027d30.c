/* Function: MenuSubState_ClearScreen */
/* Address: 80027d30 */

void MenuSubState_ClearScreen(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  RECT RStack_10;
  
  puVar1 = (undefined1 *)((int)&RStack_10.y + 1);
  uVar2 = (uint)puVar1 & 3;
  puVar3 = (uint *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | DAT_8001bc2c >> (3 - uVar2) * 8;
  RStack_10._0_4_ = DAT_8001bc2c;
  puVar1 = (undefined1 *)((int)&RStack_10.h + 1);
  uVar2 = (uint)puVar1 & 3;
  puVar3 = (uint *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | DAT_8001bc30 >> (3 - uVar2) * 8;
  RStack_10._4_4_ = DAT_8001bc30;
  ClearImage2(&RStack_10,'\0','\0','\0');
  g_SubState2 = g_SubState2 + 1;
  return;
}


