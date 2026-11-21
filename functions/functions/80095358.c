/* Function: note2pitch2 */
/* Address: 80095358 */

ushort note2pitch2(short param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = (((int)DAT_800cefbc + DAT_800cefb7 * 0x10) * 0x10000 >> 0xb) + DAT_800cefa0;
  uVar1 = SsPitchFromNote(param_1,param_2,*(uchar *)(iVar2 + 4),*(uchar *)(iVar2 + 5));
  return uVar1;
}


