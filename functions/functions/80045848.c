/* Function: FUN_80045848 */
/* Address: 80045848 */

void FUN_80045848(int param_1)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x10) + 2 + *(short *)(iVar1 + *(int *)(iVar1 + 0x10)) * 4;
    puVar2 = (uchar *)MemAlloc(iVar1);
    memcpy(puVar2,*(uchar **)(param_1 + 0x14),iVar1);
    *(uchar **)(param_1 + 0x14) = puVar2;
    puVar2 = (uchar *)MemAlloc(0xc);
    memcpy(puVar2,*(uchar **)(param_1 + 0x18),iVar1);
    iVar1 = g_TrackGeomFlag1;
    *(uchar **)(param_1 + 0x18) = puVar2;
    iVar4 = iVar1 * 2;
    iVar3 = *(short *)(param_1 + 2) * 2;
    FUN_8003ec94(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 8),
                 (int)*(short *)(&DAT_800ae9d4 + iVar4) - (int)*(short *)(&DAT_800ae9d4 + iVar3),
                 (int)*(short *)(&DAT_800ae9e0 + iVar4) - (int)*(short *)(&DAT_800ae9e0 + iVar3),
                 (int)(short)(&DAT_800af06c)[iVar1] -
                 (int)(short)(&DAT_800af06c)[*(short *)(param_1 + 2)],0);
  }
  return;
}


