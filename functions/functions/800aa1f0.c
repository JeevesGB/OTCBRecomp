/* Function: PADMAIN_OBJ_794 */
/* Address: 800aa1f0 */

void PADMAIN_OBJ_794(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  ppuVar1 = &PTR_PADIF_OBJ_0_800cba8c + DAT_800cba48;
  DAT_800cba48 = DAT_800cba48 + 1;
  iVar2 = (*(code *)*ppuVar1)();
  if (iVar2 < 0) {
    (*DAT_800cba04)();
  }
  else {
    if ((DAT_800cba48 != 0) && ((DAT_800cba48 != 3 || (**(char **)(param_1 + 0x3c) != -0x80)))) {
      setRC2wait(0x3c);
      iVar2 = _padClrIntSio0();
      if (iVar2 == 0) {
        (*DAT_800cba04)(0xfffffffd);
      }
    }
    if (4 < DAT_800cba48) {
      DAT_800cba48 = DAT_800cba48 + -1;
      PADMAIN_OBJ_874();
      return;
    }
  }
  return;
}


