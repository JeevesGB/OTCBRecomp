/* Function: FUN_80050628 */
/* Address: 80050628 */

void FUN_80050628(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_38 [32];
  undefined2 local_18;
  short local_16;
  short local_14;
  
  puVar6 = auStack_38;
  if ((g_HUDFlag2 < 0x15) &&
     (puVar3 = malloc3(0x40), puVar1 = g_HUDFlag1, puVar3 != (undefined4 *)0x0)) {
    g_HUDFlag1 = puVar3;
    *(undefined2 *)(puVar3 + 5) = 0x8000;
    *(undefined2 *)((int)puVar3 + 0x16) = 0;
    puVar3[9] = 0;
    *puVar3 = puVar1;
    uVar4 = rand();
    uVar2 = 1;
    if (((uVar4 & 0xf) < 2) || (uVar2 = 2, 7 < (uVar4 & 0xf))) {
      *(undefined2 *)(puVar3 + 7) = uVar2;
      *(undefined2 *)((int)puVar3 + 0x1e) = 0;
    }
    else {
      *(undefined2 *)(puVar3 + 7) = 2;
      *(undefined2 *)((int)puVar3 + 0x1e) = 3;
    }
    puVar3[1] = param_1;
    puVar5 = (undefined2 *)(*(int *)(param_1 + 0x10) + param_2 * 6 + 0x78);
    puVar3[3] = puVar5;
    puVar3[2] = *(int *)(param_1 + 0x14) + 0x10;
    puVar3[4] = *(int *)(param_1 + 0x14) + 0x58;
    local_18 = *puVar5;
    local_16 = *(short *)(puVar3[3] + 2) + -800;
    g_HUDFlag2 = g_HUDFlag2 + 1;
    local_14 = *(short *)(puVar3[3] + 4) + -800;
    gte_SetRotMatrix((MATRIX *)puVar3[2]);
    gte_ldv0((SVECTOR *)(puVar6 + 0x20));
    gte_rtv0();
    gte_stlvnl((VECTOR *)(puVar6 + 0x10));
    puVar3[10] = (*(int *)(puVar6 + 0x10) + *(int *)(puVar3[2] + 0x14)) * 0x1000;
    puVar3[0xb] = (*(int *)(puVar6 + 0x14) + *(int *)(puVar3[2] + 0x18)) * 0x1000;
    puVar3[0xc] = (*(int *)(puVar6 + 0x18) + *(int *)(puVar3[2] + 0x1c)) * 0x1000;
  }
  return;
}


