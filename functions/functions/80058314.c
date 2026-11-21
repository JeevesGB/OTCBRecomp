/* Function: FUN_80058314 */
/* Address: 80058314 */

void FUN_80058314(char *param_1,SVECTOR *param_2,short param_3,int param_4,undefined2 *param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *r0;
  long *r0_00;
  undefined1 *puVar6;
  undefined1 auStack_30 [40];
  
  puVar6 = auStack_30;
  gte_ldv3c(param_2);
  r0 = g_VRAMRectPtr;
  gte_rtpt();
  *(undefined2 *)((int)g_VRAMRectPtr + 0x16) = *(undefined2 *)(param_1 + 10);
                    /* Probable PsyQ macro: setPolyFT4() + setShadeTex(polyFT4, 1) */
  *(undefined1 *)((int)r0 + 7) = 0x2d;
  *(char *)(r0 + 3) = *param_1;
  *(char *)((int)r0 + 0xd) = param_1[2];
  *(char *)(r0 + 5) = param_1[4] + *param_1 + -1;
  *(char *)((int)r0 + 0x15) = param_1[2];
  r0_00 = (long *)(puVar6 + 0x20);
  *(char *)(r0 + 7) = *param_1;
  *(char *)((int)r0 + 0x1d) = param_1[6] + param_1[2] + -1;
  *(char *)(r0 + 9) = param_1[4] + *param_1 + -1;
  *(char *)((int)r0 + 0x25) = param_1[6] + param_1[2] + -1;
  gte_stflg(r0_00);
  if (-1 < *(int *)(puVar6 + 0x20)) {
    gte_stsxy3_g3(r0);
    gte_ldv0(param_2 + 3);
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
    *(ushort *)((int)r0 + 0xe) =
         (*(short *)(param_1 + 0x12) + param_3) * 0x40 | *(ushort *)(param_1 + 0x10) >> 4 & 0x3f;
    gte_rtps_b();
    if (-1 < param_4) {
      *(byte *)((int)r0 + 7) = *(byte *)((int)r0 + 7) | 2;
      *(ushort *)((int)r0 + 0x16) = *(ushort *)((int)r0 + 0x16) | (ushort)(param_4 << 5);
    }
    if (param_5 != (undefined2 *)0x0) {
      *(byte *)((int)r0 + 7) = *(byte *)((int)r0 + 7) & 0xfe;
      *(undefined2 *)(r0 + 1) = *param_5;
      *(undefined1 *)((int)r0 + 6) = *(undefined1 *)(param_5 + 1);
    }
    gte_stflg(r0_00);
    if (-1 < *(int *)(puVar6 + 0x20)) {
      gte_stsxy((long *)(r0 + 8));
      gte_stsz4c((long *)(puVar6 + 0x10));
      iVar3 = *(int *)(puVar6 + 0x14);
      if (iVar3 < *(int *)(puVar6 + 0x10)) {
        iVar3 = *(int *)(puVar6 + 0x10);
      }
      iVar2 = *(int *)(puVar6 + 0x18);
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      if (iVar2 < *(int *)(puVar6 + 0x1c)) {
        iVar2 = *(int *)(puVar6 + 0x1c);
      }
      uVar5 = iVar2 + GTE_IR1;
      if ((GTE_CTRL & 2) == 0) {
        iVar3 = (int)uVar5 >> 0xc;
        if (0xffff < (int)uVar5) {
          uVar5 = 0xffff;
          iVar3 = 0xf;
        }
        psVar1 = (short *)(iVar3 * 4 + DAT_1f800028);
        puVar4 = (uint *)(GTE_OFX +
                         (((int)(uVar5 & 0xfff) >> ((int)psVar1[1] & 0x1fU)) + (int)*psVar1) * 4);
        *r0 = *puVar4 & 0xffffff | 0x9000000;
        *puVar4 = (uint)r0 & 0xffffff;
      }
      else {
        *r0 = uVar5 | 0x9000000;
        FUN_80059330(GTE_OFX,r0);
      }
      g_VRAMRectPtr = g_VRAMRectPtr + 10;
    }
  }
  return;
}


