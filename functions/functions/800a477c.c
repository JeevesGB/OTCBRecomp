/* Function: _remove_ChgclrPAD */
/* Address: 800a477c */

void _remove_ChgclrPAD(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  DAT_800d0cc0 = unaff_retaddr;
  InitGPU_Pre();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar3 = 9;
  puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x16c) + 0x62c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FlushCache();
  InitGPU_Post();
  return;
}


