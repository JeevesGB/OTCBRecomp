/* Function: InitCarRenderData */
/* Address: 80041550 */

void InitCarRenderData(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = MemAllocTemp(0x10);
  param_2 = param_2 * 3;
  *(uint *)(param_1 + 0x2c) = uVar7;
  iVar8 = (uint)(byte)(&g_SavedTransmission)[param_2] * 0x10;
  uVar1 = *(uint *)(&DAT_800ac950 + iVar8);
  uVar2 = *(uint *)(iVar8 + -0x7ff536ac);
  uVar3 = *(uint *)(iVar8 + -0x7ff536a8);
  uVar4 = *(uint *)(iVar8 + -0x7ff536a4);
  uVar5 = uVar7 + 3 & 3;
  puVar6 = (uint *)((uVar7 + 3) - uVar5);
  *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar1 >> (3 - uVar5) * 8;
  uVar5 = uVar7 & 3;
  *(uint *)(uVar7 - uVar5) =
       *(uint *)(uVar7 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar1 << uVar5 * 8;
  uVar1 = uVar7 + 7 & 3;
  puVar6 = (uint *)((uVar7 + 7) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar2 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 4 & 3;
  puVar6 = (uint *)((uVar7 + 4) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar2 << uVar1 * 8;
  uVar1 = uVar7 + 0xb & 3;
  puVar6 = (uint *)((uVar7 + 0xb) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 8 & 3;
  puVar6 = (uint *)((uVar7 + 8) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar3 << uVar1 * 8;
  uVar1 = uVar7 + 0xf & 3;
  puVar6 = (uint *)((uVar7 + 0xf) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 0xc & 3;
  puVar6 = (uint *)((uVar7 + 0xc) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar4 << uVar1 * 8;
  uVar7 = MemAllocTemp(0x10);
  *(uint *)(param_1 + 0x30) = uVar7;
  iVar8 = (uint)(byte)(&DAT_800ac6c3)[param_2] * 0x10;
  uVar1 = *(uint *)(&DAT_800ac9d0 + iVar8);
  uVar2 = *(uint *)(iVar8 + -0x7ff5362c);
  uVar3 = *(uint *)(iVar8 + -0x7ff53628);
  uVar4 = *(uint *)(iVar8 + -0x7ff53624);
  uVar5 = uVar7 + 3 & 3;
  puVar6 = (uint *)((uVar7 + 3) - uVar5);
  *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar1 >> (3 - uVar5) * 8;
  uVar5 = uVar7 & 3;
  *(uint *)(uVar7 - uVar5) =
       *(uint *)(uVar7 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar1 << uVar5 * 8;
  uVar1 = uVar7 + 7 & 3;
  puVar6 = (uint *)((uVar7 + 7) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar2 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 4 & 3;
  puVar6 = (uint *)((uVar7 + 4) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar2 << uVar1 * 8;
  uVar1 = uVar7 + 0xb & 3;
  puVar6 = (uint *)((uVar7 + 0xb) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 8 & 3;
  puVar6 = (uint *)((uVar7 + 8) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar3 << uVar1 * 8;
  uVar1 = uVar7 + 0xf & 3;
  puVar6 = (uint *)((uVar7 + 0xf) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 0xc & 3;
  puVar6 = (uint *)((uVar7 + 0xc) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar4 << uVar1 * 8;
  uVar7 = MemAllocTemp(0x10);
  *(uint *)(param_1 + 0x34) = uVar7;
  iVar8 = (uint)(byte)(&DAT_800ac6c4)[param_2] * 0x10;
  uVar1 = *(uint *)(iVar8 + -0x7ff535b0);
  uVar2 = *(uint *)(iVar8 + -0x7ff535ac);
  uVar3 = *(uint *)(iVar8 + -0x7ff535a8);
  uVar4 = *(uint *)(iVar8 + -0x7ff535a4);
  uVar5 = uVar7 + 3 & 3;
  puVar6 = (uint *)((uVar7 + 3) - uVar5);
  *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar1 >> (3 - uVar5) * 8;
  uVar5 = uVar7 & 3;
  *(uint *)(uVar7 - uVar5) =
       *(uint *)(uVar7 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar1 << uVar5 * 8;
  uVar1 = uVar7 + 7 & 3;
  puVar6 = (uint *)((uVar7 + 7) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar2 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 4 & 3;
  puVar6 = (uint *)((uVar7 + 4) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar2 << uVar1 * 8;
  uVar1 = uVar7 + 0xb & 3;
  puVar6 = (uint *)((uVar7 + 0xb) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar3 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 8 & 3;
  puVar6 = (uint *)((uVar7 + 8) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar3 << uVar1 * 8;
  uVar1 = uVar7 + 0xf & 3;
  puVar6 = (uint *)((uVar7 + 0xf) - uVar1);
  *puVar6 = *puVar6 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uVar1 = uVar7 + 0xc & 3;
  puVar6 = (uint *)((uVar7 + 0xc) - uVar1);
  *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar1) * 8 | uVar4 << uVar1 * 8;
  *(undefined1 *)(uVar7 + 0xb) = (&g_SavedCourseIndex1)[param_2];
  *(undefined1 *)(uVar7 + 10) = (&g_SavedCarIndex1)[param_2];
  *(undefined1 *)(uVar7 + 9) = (&g_SavedCarColor1)[param_2];
  return;
}


