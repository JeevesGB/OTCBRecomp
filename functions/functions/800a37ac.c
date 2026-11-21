/* Function: firstfile */
/* Address: 800a37ac */

/* WARNING: Removing unreachable block (ram,0x800a38b0) */
/* WARNING: Removing unreachable block (ram,0x800a38e8) */
/* WARNING: Removing unreachable block (ram,0x800a38ec) */
/* WARNING: Removing unreachable block (ram,0x800a38fc) */
/* WARNING: Removing unreachable block (ram,0x800a38a0) */
/* WARNING: Removing unreachable block (ram,0x800a3910) */
/* WARNING: Removing unreachable block (ram,0x800a3920) */
/* WARNING: Removing unreachable block (ram,0x800a3924) */

DIRENTRY * firstfile(char *param_1,DIRENTRY *param_2)

{
  char cVar1;
  int in_zero;
  int iVar2;
  DIRENTRY *pDVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = &DAT_800d0be8;
  cVar1 = *param_1;
  while (':' < cVar1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *param_1;
  }
  *pcVar5 = '\0';
  puVar6 = *(undefined4 **)(in_zero + 0x150);
  puVar4 = puVar6 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar4 <= puVar6) {
      pDVar3 = (DIRENTRY *)FIRST_OBJ_180();
      return pDVar3;
    }
    if (((char *)*puVar6 != (char *)0x0) &&
       (iVar2 = strcmp((char *)*puVar6,&DAT_800d0be8), iVar2 == 0)) break;
    puVar6 = puVar6 + 0x14;
  }
  DAT_800d0be0 = puVar6[0xd];
  pDVar3 = (DIRENTRY *)FIRST_OBJ_D0();
  return pDVar3;
}


