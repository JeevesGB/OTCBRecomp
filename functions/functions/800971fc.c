/* Function: _SsVmVSetUp */
/* Address: 800971fc */

undefined4 _SsVmVSetUp(ushort param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x10) {
    iVar2 = (int)(short)param_1;
    uVar1 = 0xffffffff;
    if ((&DAT_800cefd0)[iVar2] == '\x01') {
      if ((int)DAT_800cef92 <= (int)param_2) goto VM_VSU_OBJ_50;
      DAT_800cef9c = (&DAT_800cef08)[iVar2];
      DAT_800cef94 = *(int *)(&DAT_800ceec8 + iVar2 * 4);
      DAT_800cefa0 = *(undefined4 *)(&DAT_800cef50 + iVar2 * 4);
      DAT_800cefb1 = (undefined1)param_1;
      DAT_800cefb6 = (undefined1)param_2;
      DAT_800cefb7 = *(undefined1 *)(param_2 * 0x10 + DAT_800cef94 + 8);
      uVar1 = 0;
    }
    return uVar1;
  }
VM_VSU_OBJ_50:
  uVar1 = VM_VSU_OBJ_B8();
  return uVar1;
}


