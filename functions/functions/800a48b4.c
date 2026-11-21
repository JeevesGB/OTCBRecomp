/* Function: _patch_card */
/* Address: 800a48b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _patch_card(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  DAT_800d0cd0 = unaff_retaddr;
  InitGPU_Pre();
  iVar1 = (*(code *)&SUB_000000b0)();
  _DAT_0000dffc =
       (undefined4 *)
       (*(int *)(*(int *)(iVar1 + 0x18) + 0x70) * 0x10000 +
        (*(uint *)(*(int *)(iVar1 + 0x18) + 0x74) & 0xffff) + 0x28);
  puVar2 = &PATCH_OBJ_70;
  do {
    *_DAT_0000dffc = *puVar2;
    puVar2 = puVar2 + 1;
    _DAT_0000dffc = _DAT_0000dffc + 1;
  } while (puVar2 != &PATCH_OBJ_84);
  FlushCache();
  return;
}


