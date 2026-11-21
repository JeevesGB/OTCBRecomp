/* Function: FUN_800a49ec */
/* Address: 800a49ec */

/* Possible END.OBJ/_ExitCard */

void FUN_800a49ec(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  DAT_800d0ce0 = unaff_retaddr;
  InitGPU_Pre();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x18);
  puVar2 = &DAT_800a4a5c;
  do {
    *(undefined4 *)(iVar1 + 0x70) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (puVar2 != (undefined4 *)&UNK_800a4a68);
  FlushCache();
  InitGPU_Post();
  return;
}


