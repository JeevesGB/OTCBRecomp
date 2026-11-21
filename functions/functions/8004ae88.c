/* Function: FUN_8004ae88 */
/* Address: 8004ae88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004ae88(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = param_1;
  do {
    if ((*(short *)(iVar2 + 0x374) != 0) && (*(short *)(iVar2 + 0x364) != 0)) {
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar4 < 4);
  iVar2 = *(short *)(param_1 + 0x5c) + -0x14;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x3c < iVar2) {
    iVar2 = 0x3c;
  }
  iVar2 = iVar2 * iVar5 * 0xd;
  uVar1 = ratan2(*(long *)(param_1 + 0x50),*(long *)(param_1 + 0x58));
  uVar1 = (&g_SinCosTable)[uVar1 & 0xfff];
  if ((int)uVar1 < 0) {
    uVar3 = (int)uVar1 >> 0x10 | 0xffff8000;
  }
  else {
    uVar3 = (int)uVar1 >> 0x10 & 0x7fff;
  }
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 & 0x7fff;
  }
  else {
    uVar1 = uVar1 | 0xffff8000;
  }
  _DAT_1f800054 = _DAT_1f800054 - ((int)(iVar2 * uVar1 + 0x800) >> 0xc);
  _DAT_1f80005c = _DAT_1f80005c - ((int)(iVar2 * uVar3 + 0x800) >> 0xc);
  return;
}


