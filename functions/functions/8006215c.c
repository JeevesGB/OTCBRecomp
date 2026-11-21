/* Function: InitReplaySystem */
/* Address: 8006215c */

void InitReplaySystem(void)

{
  int iVar1;
  
  FUN_80061fcc();
  iVar1 = 0;
  while (DAT_800cda06 != 0) {
    UpdateMemoryCardOp();
    if (-1 < *(int *)(&DAT_800b5b38 + g_ReplayInitFlag2 * 0xc)) {
      iVar1 = *(int *)(&DAT_800b5b38 + g_ReplayInitFlag2 * 0xc);
    }
    (*(code *)(&PTR_LAB_800b5b30)[g_ReplayInitFlag2 * 3])();
    ProcessRenderQueue();
    (*(code *)(&PTR_LAB_800b5b24)[iVar1])();
    VsyncWait();
    if (-1 < DAT_800cda14) {
      PlaySFX();
      DAT_800cda14 = -1;
    }
    g_DisplayActive = 0;
  }
  MemCardSync(0,(long *)0x0,(long *)0x0);
  MemCardStop();
  return;
}


