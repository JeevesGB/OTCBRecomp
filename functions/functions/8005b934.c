/* Function: FUN_8005b934 */
/* Address: 8005b934 */

void FUN_8005b934(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort local_38;
  ushort local_36;
  short local_34;
  short local_32;
  u_long *local_30;
  RECT local_28;
  
  iVar3 = 0;
  iVar4 = *param_1;
  if (0 < iVar4) {
    iVar1 = 0;
    do {
      iVar1 = *(int *)((int)param_1 + iVar1 + 4);
      uVar2 = *(uint *)((int)param_1 + iVar1 + 4);
      if ((uVar2 & 8) == 0) {
        local_30 = (u_long *)0x0;
      }
      else {
        local_38 = *(ushort *)((int)param_1 + iVar1 + 0xc);
        local_36 = *(ushort *)((int)param_1 + iVar1 + 0xe);
        local_34 = *(short *)((int)param_1 + iVar1 + 0x10);
        local_32 = *(short *)((int)param_1 + iVar1 + 0x12);
        local_30 = (u_long *)((int)param_1 + iVar1 + 0x14);
      }
      if (((uVar2 & 8) != 0) &&
         (local_28.x = local_38 + param_3,
         (int)param_2 == ((int)((uint)local_38 << 0x10) >> 0x16) + (local_36 >> 4 & 0x10))) {
        local_28.y = local_36 + param_4;
        local_28.w = local_34;
        local_28.h = local_32;
        LoadImage(&local_28,local_30);
        DrawSync(0);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 4;
    } while (iVar3 < iVar4);
  }
  return;
}


