/* Function: RenderSparks */
/* Address: 8004f118 */

void RenderSparks(void)

{
  short sVar1;
  MATRIX *r0;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined *puVar4;
  
  ppuVar3 = &g_ReplayRecordFlag;
  if (g_ReplayRecordFlag != (undefined4 *)0x0) {
    puVar4 = &g_SparkAnimTable;
    ppuVar2 = (undefined4 **)g_ReplayRecordFlag;
    do {
      if (*(short *)(ppuVar2 + 3) < 0) {
        sVar1 = *(short *)(ppuVar2 + 9);
        ppuVar3 = ppuVar2;
        if (sVar1 < 0xd) {
          *(short *)(ppuVar2 + 9) = *(short *)(ppuVar2 + 9) + 1;
          sVar1 = *(short *)(puVar4 + sVar1 * 2);
          *(short *)((int)ppuVar2 + 0xe) = sVar1;
          if (sVar1 == 0) {
            *(undefined2 *)((int)ppuVar2 + 0x26) = 0;
          }
          else {
            r0 = (MATRIX *)ppuVar2[2];
            *(undefined2 *)((int)ppuVar2 + 0x26) = 0xffff;
            gte_SetRotMatrix(r0);
            gte_ldv0((SVECTOR *)(ppuVar2 + 4));
            gte_rtv0();
            gte_stlvnl((VECTOR *)(ppuVar2 + 6));
            ppuVar2[6] = (undefined4 *)((int)ppuVar2[6] + r0->t[0]);
            ppuVar2[7] = (undefined4 *)((int)ppuVar2[7] + r0->t[1]);
            ppuVar2[8] = (undefined4 *)((int)ppuVar2[8] + r0->t[2]);
            ppuVar3 = ppuVar2;
          }
        }
        else {
          *(undefined2 *)(ppuVar2 + 3) = 0;
        }
      }
      else {
        *ppuVar3 = *ppuVar2;
        free3(ppuVar2);
      }
      ppuVar2 = (undefined4 **)*ppuVar3;
    } while (ppuVar2 != (undefined4 **)0x0);
  }
  return;
}


