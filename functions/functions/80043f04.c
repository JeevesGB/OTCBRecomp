/* Function: FUN_80043f04 */
/* Address: 80043f04 */

void FUN_80043f04(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_240 [88];
  undefined4 local_1e8;
  
  FUN_800464d8(auStack_240);
  FUN_800467f4(param_1,0x3c,0);
  FUN_80046a30(param_1,0x3c,0);
  FUN_80046c6c(param_1,0x3c,0);
  FUN_80046ea8(param_1);
  iVar3 = FUN_8003bc18((int)DAT_800cce6a,(int)*(short *)(*(int *)(param_1 + 0x3c) + 2));
  DAT_800cce62 = FUN_80043c20(param_1,local_1e8);
  sVar1 = DAT_800cce64;
  if (DAT_800cce62 == 1) {
    g_CollisionResponseData = 0xffff;
    sVar1 = DAT_800cce66;
  }
  DAT_800cce6c = sVar1 - DAT_800cce66;
  uVar4 = iVar3 - *(short *)(param_1 + 0x4e);
  uVar2 = (ushort)uVar4;
  DAT_800cce6e = uVar2 | 0xf800;
  if ((uVar4 & 0x800) == 0) {
    DAT_800cce6e = uVar2 & 0x7ff;
  }
  uVar4 = iVar3 - (*(int *)(param_1 + 0x18c) >> 0xc);
  uVar2 = (ushort)uVar4;
  DAT_800cce70 = uVar2 | 0xf800;
  if ((uVar4 & 0x800) == 0) {
    DAT_800cce70 = uVar2 & 0x7ff;
  }
  return;
}


