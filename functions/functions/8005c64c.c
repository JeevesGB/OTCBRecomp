/* Function: FUN_8005c64c */
/* Address: 8005c64c */

void FUN_8005c64c(int *param_1,short param_2,short param_3,short param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_40;
  short local_3e;
  RECT local_28;
  
  iVar4 = 0;
  iVar5 = *param_1;
  if (0 < iVar5) {
    iVar3 = 0;
    do {
      iVar3 = *(int *)((int)param_1 + iVar3 + 4);
      iVar3 = *(int *)((int)param_1 + iVar3 + 8) + 8 + iVar3;
      uVar1 = *(ushort *)((int)param_1 + iVar3 + 4);
      uVar2 = *(ushort *)((int)param_1 + iVar3 + 6);
      local_40 = *(short *)((int)param_1 + iVar3 + 8);
      local_3e = *(short *)((int)param_1 + iVar3 + 10);
      if (local_40 == 0) {
        local_40 = 0x100;
      }
      if (local_3e == 0) {
        local_3e = 0x100;
      }
      local_28.x = uVar1 + param_3;
      if ((int)param_2 == ((int)((uint)uVar1 << 0x10) >> 0x16) + (uVar2 >> 4 & 0x10)) {
        local_28.y = uVar2 + param_4;
        local_28.w = local_40;
        local_28.h = local_3e;
        LoadImage(&local_28,(u_long *)((int)param_1 + iVar3 + 0xc));
        DrawSync(0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 4;
    } while (iVar4 < iVar5);
  }
  return;
}


