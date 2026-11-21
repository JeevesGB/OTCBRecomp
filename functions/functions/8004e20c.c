/* Function: FUN_8004e20c */
/* Address: 8004e20c */

void FUN_8004e20c(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  
  psVar2 = DAT_800ccb70;
  sVar1 = *(short *)(param_1 + 0x12);
  *(short *)(param_1 + 0x12) = sVar1 + 1;
  if (*psVar2 < (short)(sVar1 + 1)) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  psVar2 = DAT_800ccb70;
  *(short *)(param_1 + 0x14) = DAT_800ccb70[*(short *)(param_1 + 0x12) + 5];
  if (sVar1 == 0) {
    iVar3 = param_1 + ((int)((uint)*(ushort *)(param_1 + 10) << 0x10) >> 0xe);
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) + 1;
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) - param_2;
    DAT_800ccf44 = 0xffffffff;
    if ((int)*(short *)(param_1 + 10) < (int)*(short *)(param_1 + 0xc)) {
      param_1 = param_1 + *(short *)(param_1 + 10) * 4;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    }
    else {
      *(undefined2 *)(param_1 + 6) = 0xffff;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_2;
    }
  }
  else {
    DAT_800ccf44 = 0;
    if (*(short *)(param_1 + 2) != 0) {
      param_2 = *(int *)(param_1 + 0x18) - param_2;
      piVar4 = (int *)(&DAT_800ccf50 +
                      ((int)sVar1 + (int)*(short *)(param_1 + 10) * (int)*psVar2) * 4);
      sVar1 = *(short *)(param_1 + 8);
      if (*piVar4 == 0) {
        *piVar4 = param_2;
      }
      else {
        if (g_RaceComplete == 0) {
          FUN_8002b634(0x17,8);
        }
        AddRenderQueueItem(0xc,&LAB_8004dfe4);
        DAT_800ccfe4 = 100;
        DAT_800ccfe8 = param_2 - *piVar4;
        DAT_800ccfe0 = (int)sVar1;
      }
    }
  }
  return;
}


