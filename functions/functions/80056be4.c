/* Function: FUN_80056be4 */
/* Address: 80056be4 */

void FUN_80056be4(int param_1,short param_2,short param_3,short param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = param_1 + param_2 * 0x1c + 0xc;
  iVar8 = 0;
  iVar9 = *(int *)(iVar4 + 0x14);
  param_1 = param_1 + *(int *)(iVar4 + 0x10) + 0xc;
  if (0 < iVar9) {
    do {
      if ((*(ushort *)(param_1 + 2) & 0x400) != 0) {
        uVar1 = *(ushort *)(param_1 + 10);
        iVar7 = ((int)param_3 + ((int)(short)uVar1 & 0xfU) * 0x40) * 4;
        iVar6 = (int)param_4 + ((int)(short)uVar1 & 0x10U) * 0x10;
        iVar4 = (uint)*(byte *)(param_1 + 4) + iVar7;
        uVar5 = (uint)*(byte *)(param_1 + 5) + iVar6;
        *(ushort *)(param_1 + 10) =
             (short)((uint)iVar4 >> 8) + (short)((int)(uVar5 & 0x100) >> 4) + (uVar1 & 0xffe0);
        *(char *)(param_1 + 4) = (char)iVar4;
        *(char *)(param_1 + 5) = (char)uVar5;
        cVar2 = (char)iVar7;
        *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + cVar2;
        cVar3 = (char)iVar6;
        *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + cVar3;
        *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + cVar2;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + cVar3;
        if ((*(ushort *)(param_1 + 2) & 0x800) != 0) {
          *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + cVar2;
          *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + cVar3;
        }
      }
      iVar8 = iVar8 + 1;
      param_1 = param_1 + (*(byte *)(param_1 + 1) + 1) * 4;
    } while (iVar8 < iVar9);
  }
  return;
}


