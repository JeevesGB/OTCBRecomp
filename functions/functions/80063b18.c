/* Function: FUN_80063b18 */
/* Address: 80063b18 */

void FUN_80063b18(int param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 != 0) {
    puVar5 = *(ushort **)(param_1 + 0x28);
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    iVar3 = (short)*puVar5 + -1;
    if (iVar3 != -1) {
      puVar4 = puVar5 + iVar3;
      do {
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + -1;
        iVar3 = iVar3 + -1;
        FUN_8003f214(uVar7,iVar6,(int)(short)*puVar1);
      } while (iVar3 != -1);
    }
    *puVar5 = 0;
    iVar3 = 0;
    do {
      if ((param_2 & 1) != 0) {
        FUN_8003f214(uVar7,iVar6,iVar3);
        uVar2 = *puVar5;
        *puVar5 = uVar2 + 1;
        *(short *)((int)puVar5 + ((int)((uint)uVar2 << 0x10) >> 0xf) + 2) = (short)iVar3;
      }
      iVar3 = iVar3 + 1;
      param_2 = (int)param_2 >> 1;
    } while (iVar3 < 4);
  }
  return;
}


