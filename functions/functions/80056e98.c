/* Function: FUN_80056e98 */
/* Address: 80056e98 */

void FUN_80056e98(int param_1,short param_2,short param_3,short param_4,short param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = param_1 + param_2 * 0x1c + 0xc;
  iVar9 = *(int *)(iVar4 + 0x14);
  param_1 = param_1 + *(int *)(iVar4 + 0x10) + 0xc;
  iVar4 = 0;
  if (0 < iVar9) {
    do {
      if (((*(ushort *)(param_1 + 2) & 0x400) != 0) &&
         (uVar1 = *(ushort *)(param_1 + 10), (uVar1 & 0x1f) == (int)param_3)) {
        iVar8 = ((int)param_4 + ((int)(short)uVar1 & 0xfU) * 0x40) * 4;
        iVar7 = (int)param_5 + ((int)(short)uVar1 & 0x10U) * 0x10;
        iVar5 = (uint)*(byte *)(param_1 + 4) + iVar8;
        uVar6 = (uint)*(byte *)(param_1 + 5) + iVar7;
        *(ushort *)(param_1 + 10) =
             (short)((uint)iVar5 >> 8) + (short)((int)(uVar6 & 0x100) >> 4) + (uVar1 & 0xffe0);
        *(char *)(param_1 + 4) = (char)iVar5;
        *(char *)(param_1 + 5) = (char)uVar6;
        cVar2 = (char)iVar8;
        *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + cVar2;
        cVar3 = (char)iVar7;
        *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + cVar3;
        *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + cVar2;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + cVar3;
        if ((*(ushort *)(param_1 + 2) & 0x800) != 0) {
          *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + cVar2;
          *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + cVar3;
        }
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + (*(byte *)(param_1 + 1) + 1) * 4;
    } while (iVar4 < iVar9);
  }
  return;
}


