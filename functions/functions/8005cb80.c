/* Function: FUN_8005cb80 */
/* Address: 8005cb80 */

int FUN_8005cb80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = 0;
  iVar5 = 0;
  sVar6 = 0;
  puVar8 = &g_PadRawState;
  iVar1 = 0;
  do {
    if (((&g_PadBuffer1)[iVar1] == '\0') && (iVar4 = 0, (&DAT_800cd621)[iVar1] == -0x80)) {
      puVar3 = &DAT_800cd622 + iVar1;
      puVar2 = &g_PadRawState + iVar5 * 3;
      do {
        *puVar2 = puVar3;
        puVar3 = puVar3 + 8;
        *(short *)(puVar2 + 1) = sVar6 + (short)iVar4;
        puVar2 = puVar2 + 3;
        puVar8 = puVar8 + 3;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar4 < 4);
    }
    else {
      *(short *)(puVar8 + 1) = sVar6;
      *puVar8 = &g_PadBuffer1 + iVar1;
      puVar8 = puVar8 + 3;
      iVar5 = iVar5 + 1;
    }
    sVar6 = sVar6 + 0x10;
    iVar7 = iVar7 + 1;
    iVar1 = iVar7 * 0x40;
  } while (iVar7 < 2);
  return iVar5;
}


