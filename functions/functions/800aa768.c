/* Function: _padClrIntSio0 */
/* Address: 800aa768 */

undefined4 _padClrIntSio0(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_JOY_MCD_DATA_800cba68;
  *(undefined4 *)PTR_I_STAT_800cba64 = 0xffffff7f;
  uVar1 = *(ushort *)(puVar2 + 4);
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 10) =
           *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 10) | 0x10;
      return 1;
    }
    iVar3 = chkRC2wait();
    if (iVar3 != 0) break;
    uVar1 = *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4);
  }
  return 0;
}


