/* Function: LoadSEQ */
/* Address: 8002bc9c */

int LoadSEQ(undefined4 param_1,int param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = param_3;
  if (param_3 == (int *)0x0) {
    piVar3 = (int *)GsGetWorkBase();
  }
  LoadCDFile(param_1,piVar3);
  iVar4 = *piVar3;
  iVar6 = piVar3[2];
  iVar5 = piVar3[1];
  if (param_3 == (int *)0x0) {
    MemAlloc(((int)piVar3 + iVar6) - (int)piVar3);
  }
  do {
    sVar1 = SsVabOpenHead((uchar *)((int)piVar3 + iVar5),(short)param_2);
    param_2 = (int)sVar1;
  } while (param_2 == -1);
  do {
    sVar2 = SsVabTransBody((uchar *)((int)piVar3 + iVar6),sVar1);
  } while (sVar2 == -1);
  SsVabTransCompleted(1);
  sVar1 = SsSeqOpen((ulong *)((int)piVar3 + iVar4),sVar1);
  (&g_SeqSlots)[g_SeqCount] = (int)sVar1;
  g_SeqCount = g_SeqCount + 1;
  return param_2;
}


