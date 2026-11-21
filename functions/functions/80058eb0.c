/* Function: InitOrderingTable */
/* Address: 80058eb0 */

void InitOrderingTable(undefined4 *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  sVar2 = *param_2;
  iVar4 = 0;
  if (0 < sVar2) {
    do {
      psVar1 = param_2 + 2;
      param_2 = param_2 + 2;
      iVar4 = iVar4 + 1;
      uVar3 = MemAllocAligned((int)*psVar1 << 2);
      *param_1 = uVar3;
      param_1 = param_1 + 1;
    } while (iVar4 < sVar2);
  }
  return;
}


