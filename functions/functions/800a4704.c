/* Function: _patch_pad */
/* Address: 800a4704 */

void _patch_pad(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  DAT_800d0cb0 = unaff_retaddr;
  InitGPU_Pre();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  iVar2 = 0xb;
  DAT_800d0cb8 = iVar1 + 0x884;
  DAT_800d0cbc = iVar1 + 0x894;
  do {
    *(undefined4 *)(iVar1 + 0x594) = 0;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FlushCache();
  return;
}


