/* Function: UpdateTireSmoke */
/* Address: 8004f9d8 */

void UpdateTireSmoke(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [16];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  
  puVar5 = auStack_38;
  if ((g_ParticleFlag2 < 0x15) && ((g_RaceMode != 4 || (g_RaceComplete != 0)))) {
    puVar3 = malloc3(0x3c);
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = 2;
      if (*(short *)(param_1 + param_2 * 2 + 0x374) == 0) {
        uVar2 = 1;
      }
      *(undefined2 *)((int)puVar3 + 0x1e) = uVar2;
      puVar1 = g_ParticleFlag1;
      g_ParticleFlag1 = puVar3;
      *(undefined2 *)(puVar3 + 5) = 0x8000;
      puVar3[2] = param_1 + param_2 * 0xc + 0x80;
      puVar3[1] = param_1;
      *puVar3 = puVar1;
      iVar4 = *(int *)(param_1 + 0x14);
      puVar3[4] = param_1 + 0x198;
      *(undefined2 *)((int)puVar3 + 0x16) = 0;
      *(undefined2 *)(puVar3 + 7) = 0;
      puVar3[8] = 0;
      puVar3[3] = iVar4 + 0x58;
      local_26 = 0xff88;
      local_24 = 0xfc18;
      local_28 = 0;
      g_ParticleFlag2 = g_ParticleFlag2 + 1;
      gte_SetRotMatrix((MATRIX *)(*(int *)(param_1 + 0x14) + 0x10));
      gte_ldv0((SVECTOR *)(puVar5 + 0x10));
      gte_rtv0();
      gte_stlvnl((VECTOR *)(puVar5 + 0x18));
      puVar3[9] = *(int *)(puVar5 + 0x18) * 0x1000 + *(int *)puVar3[2];
      puVar3[10] = *(int *)(puVar5 + 0x1c) * 0x1000 + *(int *)(puVar3[2] + 4);
      puVar3[0xb] = *(int *)(puVar5 + 0x20) * 0x1000 + *(int *)(puVar3[2] + 8);
    }
  }
  return;
}


