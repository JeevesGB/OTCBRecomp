/* Function: PADMAIN_OBJ_1AC */
/* Address: 800a9c08 */

undefined4 PADMAIN_OBJ_1AC(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 10) & 2) != 0) {
    *(undefined2 *)(PTR_JOY_MCD_DATA_800cba68 + 10) = 0;
    uVar1 = PADMAIN_OBJ_32C();
    return uVar1;
  }
  DAT_800cba6c = 1;
  if ((DAT_800cba54 != 0) && (DAT_800d1068 < 0x96)) {
    DAT_800d1068 = DAT_800d1068 + 1;
  }
  if ((DAT_800cba58 == 0) && (DAT_800d106c < 0x96)) {
    DAT_800d106c = DAT_800d106c + 1;
  }
  if ((DAT_800cba3c != 0) && (DAT_800cba54 <= DAT_800cba58)) {
    DAT_800cba48 = 0;
    DAT_800cba44 = DAT_800cba54;
    iVar2 = _padInitSioMode(DAT_800cba38 + DAT_800cba54 * 0xf0);
    if (iVar2 == 0) {
      (*DAT_800cba04)(0xffff);
    }
    DAT_800cba4c = 0;
    if (DAT_800cba44 <= DAT_800cba58) {
      do {
        PADMAIN_OBJ_794(DAT_800cba38 + DAT_800cba44 * 0xf0);
      } while (DAT_800cba44 <= DAT_800cba58);
    }
    *(undefined2 *)(PTR_JOY_MCD_DATA_800cba68 + 0xe) = 0x88;
  }
  return 0;
}


