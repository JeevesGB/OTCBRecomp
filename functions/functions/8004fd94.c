/* Function: RenderParticles */
/* Address: 8004fd94 */

void RenderParticles(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &g_ParticleFlag1;
  for (puVar3 = g_ParticleFlag1; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    if (*(short *)(puVar3 + 5) < 0) {
      sVar1 = *(short *)((int)puVar3 + 0x16);
      if (sVar1 < 0x1f) {
        *(short *)((int)puVar3 + 0x16) = *(short *)((int)puVar3 + 0x16) + 1;
        *(short *)(puVar3 + 6) = sVar1 * 0x96 + 1000;
        puVar3[8] = puVar3[8] + 0x10;
        *(short *)((int)puVar3 + 0x1a) = 100 - (short)((sVar1 * 100) / 0x1e);
        RenderParticleElement(puVar3);
      }
      else {
        *(undefined2 *)(puVar3 + 5) = 0;
        g_ParticleFlag2 = g_ParticleFlag2 + -1;
      }
    }
    else {
      *puVar2 = *puVar3;
      free3(puVar3);
      puVar3 = puVar2;
    }
    puVar2 = puVar3;
  }
  return;
}


