/* Function: VM_PB_OBJ_16C */
/* Address: 80096198 */

undefined4 VM_PB_OBJ_16C(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  short in_t1;
  int iVar2;
  
  iVar2 = (int)in_t1;
  DAT_800cefbc = *(undefined1 *)(&DAT_800ce796 + iVar2 * 0x1c);
  DAT_800cefc8 = in_t1;
  uVar1 = note2pitch2(param_3,param_2);
  (&DAT_800cece4)[iVar2 * 8] = uVar1;
  (&DAT_800cecc0)[iVar2] = (&DAT_800cecc0)[iVar2] | 4;
  return 1;
}


