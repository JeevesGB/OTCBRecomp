/* Function: FUN_80066bd4 */
/* Address: 80066bd4 */

uint * FUN_80066bd4(int param_1,uint *param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint in_t0;
  uint uVar5;
  uint in_t1;
  uint uVar6;
  uint in_t2;
  uint uVar7;
  uint *puVar8;
  
  LoadCDFile((int)*(short *)(&DAT_800af198 + param_1 * 2),param_3);
  puVar8 = (uint *)((int)param_3 + *param_3);
  puVar3 = param_2;
  if ((((uint)puVar8 | (uint)param_2) & 3) == 0) {
    puVar2 = puVar8 + 0x20;
    do {
      param_4 = *puVar8;
      in_t0 = puVar8[1];
      in_t1 = puVar8[2];
      uVar7 = puVar8[3];
      *puVar3 = param_4;
      puVar3[1] = in_t0;
      puVar3[2] = in_t1;
      puVar3[3] = uVar7;
      puVar8 = puVar8 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar8 != puVar2);
  }
  else {
    puVar2 = puVar8 + 0x20;
    do {
      uVar7 = (int)puVar8 + 3U & 3;
      uVar6 = (uint)puVar8 & 3;
      param_4 = (*(int *)(((int)puVar8 + 3U) - uVar7) << (3 - uVar7) * 8 |
                param_4 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
                *(uint *)((int)puVar8 - uVar6) >> uVar6 * 8;
      uVar7 = (int)puVar8 + 7U & 3;
      uVar6 = (uint)(puVar8 + 1) & 3;
      in_t0 = (*(int *)(((int)puVar8 + 7U) - uVar7) << (3 - uVar7) * 8 |
              in_t0 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)(puVar8 + 1) - uVar6) >> uVar6 * 8;
      uVar7 = (int)puVar8 + 0xbU & 3;
      uVar6 = (uint)(puVar8 + 2) & 3;
      in_t1 = (*(int *)(((int)puVar8 + 0xbU) - uVar7) << (3 - uVar7) * 8 |
              in_t1 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)(puVar8 + 2) - uVar6) >> uVar6 * 8;
      uVar7 = (int)puVar8 + 0xfU & 3;
      uVar6 = (uint)(puVar8 + 3) & 3;
      in_t2 = (*(int *)(((int)puVar8 + 0xfU) - uVar7) << (3 - uVar7) * 8 |
              in_t2 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
              *(uint *)((int)(puVar8 + 3) - uVar6) >> uVar6 * 8;
      uVar7 = (int)puVar3 + 3U & 3;
      puVar1 = (uint *)(((int)puVar3 + 3U) - uVar7);
      *puVar1 = *puVar1 & -1 << (uVar7 + 1) * 8 | param_4 >> (3 - uVar7) * 8;
      uVar7 = (uint)puVar3 & 3;
      *(uint *)((int)puVar3 - uVar7) =
           *(uint *)((int)puVar3 - uVar7) & 0xffffffffU >> (4 - uVar7) * 8 | param_4 << uVar7 * 8;
      uVar7 = (int)puVar3 + 7U & 3;
      puVar1 = (uint *)(((int)puVar3 + 7U) - uVar7);
      *puVar1 = *puVar1 & -1 << (uVar7 + 1) * 8 | in_t0 >> (3 - uVar7) * 8;
      uVar7 = (uint)(puVar3 + 1) & 3;
      puVar1 = (uint *)((int)(puVar3 + 1) - uVar7);
      *puVar1 = *puVar1 & 0xffffffffU >> (4 - uVar7) * 8 | in_t0 << uVar7 * 8;
      uVar7 = (int)puVar3 + 0xbU & 3;
      puVar1 = (uint *)(((int)puVar3 + 0xbU) - uVar7);
      *puVar1 = *puVar1 & -1 << (uVar7 + 1) * 8 | in_t1 >> (3 - uVar7) * 8;
      uVar7 = (uint)(puVar3 + 2) & 3;
      puVar1 = (uint *)((int)(puVar3 + 2) - uVar7);
      *puVar1 = *puVar1 & 0xffffffffU >> (4 - uVar7) * 8 | in_t1 << uVar7 * 8;
      uVar7 = (int)puVar3 + 0xfU & 3;
      puVar1 = (uint *)(((int)puVar3 + 0xfU) - uVar7);
      *puVar1 = *puVar1 & -1 << (uVar7 + 1) * 8 | in_t2 >> (3 - uVar7) * 8;
      uVar7 = (uint)(puVar3 + 3) & 3;
      puVar1 = (uint *)((int)(puVar3 + 3) - uVar7);
      *puVar1 = *puVar1 & 0xffffffffU >> (4 - uVar7) * 8 | in_t2 << uVar7 * 8;
      puVar8 = puVar8 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar8 != puVar2);
  }
  uVar7 = (int)puVar8 + 3U & 3;
  uVar6 = (uint)puVar8 & 3;
  uVar4 = (*(int *)(((int)puVar8 + 3U) - uVar7) << (3 - uVar7) * 8 |
          param_4 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
          *(uint *)((int)puVar8 - uVar6) >> uVar6 * 8;
  uVar7 = (int)puVar8 + 7U & 3;
  uVar6 = (uint)(puVar8 + 1) & 3;
  uVar5 = (*(int *)(((int)puVar8 + 7U) - uVar7) << (3 - uVar7) * 8 |
          in_t0 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
          *(uint *)((int)(puVar8 + 1) - uVar6) >> uVar6 * 8;
  uVar7 = (int)puVar8 + 0xbU & 3;
  uVar6 = (uint)(puVar8 + 2) & 3;
  uVar6 = (*(int *)(((int)puVar8 + 0xbU) - uVar7) << (3 - uVar7) * 8 |
          in_t1 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar6) * 8 |
          *(uint *)((int)(puVar8 + 2) - uVar6) >> uVar6 * 8;
  uVar7 = (int)puVar3 + 3U & 3;
  puVar8 = (uint *)(((int)puVar3 + 3U) - uVar7);
  *puVar8 = *puVar8 & -1 << (uVar7 + 1) * 8 | uVar4 >> (3 - uVar7) * 8;
  uVar7 = (uint)puVar3 & 3;
  *(uint *)((int)puVar3 - uVar7) =
       *(uint *)((int)puVar3 - uVar7) & 0xffffffffU >> (4 - uVar7) * 8 | uVar4 << uVar7 * 8;
  uVar7 = (int)puVar3 + 7U & 3;
  puVar8 = (uint *)(((int)puVar3 + 7U) - uVar7);
  *puVar8 = *puVar8 & -1 << (uVar7 + 1) * 8 | uVar5 >> (3 - uVar7) * 8;
  uVar7 = (uint)(puVar3 + 1) & 3;
  puVar8 = (uint *)((int)(puVar3 + 1) - uVar7);
  *puVar8 = *puVar8 & 0xffffffffU >> (4 - uVar7) * 8 | uVar5 << uVar7 * 8;
  uVar7 = (int)puVar3 + 0xbU & 3;
  puVar8 = (uint *)(((int)puVar3 + 0xbU) - uVar7);
  *puVar8 = *puVar8 & -1 << (uVar7 + 1) * 8 | uVar6 >> (3 - uVar7) * 8;
  uVar7 = (uint)(puVar3 + 2) & 3;
  puVar3 = (uint *)((int)(puVar3 + 2) - uVar7);
  *puVar3 = *puVar3 & 0xffffffffU >> (4 - uVar7) * 8 | uVar6 << uVar7 * 8;
  return param_2;
}


