/* Function: _patch_card2 */
/* Address: 800a4948 */

void _patch_card2(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 unaff_retaddr;
  
  DAT_800d0cd0 = unaff_retaddr;
  InitGPU_Pre();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  pcVar2 = (code *)&PATCH_OBJ_84;
  do {
    *(undefined4 *)(iVar1 + 0x9c8) = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (pcVar2 != _patch_card);
  FlushCache();
  return;
}


