/* Function: RenderHUD */
/* Address: 80050a04 */

void RenderHUD(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = &g_HUDFlag1;
  for (puVar4 = g_HUDFlag1; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
    if (*(short *)(puVar4 + 5) < 0) {
      sVar2 = *(short *)((int)puVar4 + 0x16);
      iVar3 = (int)sVar2;
      if (iVar3 < 0x21) {
        *(short *)((int)puVar4 + 0x16) = *(short *)((int)puVar4 + 0x16) + 1;
        *(short *)(puVar4 + 6) = sVar2 * 0x7d + 1000;
        if (*(short *)(puVar4 + 7) == 2) {
          iVar3 = iVar3 * 0x78;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0x1f;
          }
          sVar2 = 0x78;
        }
        else {
          iVar3 = iVar3 * 0x50;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0x1f;
          }
          sVar2 = 0x50;
        }
        *(short *)((int)puVar4 + 0x1a) = sVar2 - (short)(iVar3 >> 5);
        puVar4[9] = puVar4[9] + 10;
        RenderHUDElement(puVar4);
      }
      else {
        *(undefined2 *)(puVar4 + 5) = 0;
        g_HUDFlag2 = g_HUDFlag2 + -1;
      }
    }
    else {
      *puVar1 = *puVar4;
      free3(puVar4);
      puVar4 = puVar1;
    }
    puVar1 = puVar4;
  }
  return;
}


