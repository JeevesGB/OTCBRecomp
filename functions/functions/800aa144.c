/* Function: PADMAIN_OBJ_6E8 */
/* Address: 800aa144 */

undefined4 PADMAIN_OBJ_6E8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    if ((*(uint *)PTR_I_STAT_800cba64 & 0x80) != 0) {
      *PTR_JOY_MCD_DATA_800cba68 = 1;
      setRC2wait();
      iVar1 = _padClrIntSio0();
      if (iVar1 == 0) {
        return 0;
      }
      _padWaitRXready();
      uVar2 = PADMAIN_OBJ_780();
      return uVar2;
    }
    iVar1 = chkRC2wait(0x3c);
  } while (iVar1 == 0);
  return 0;
}


