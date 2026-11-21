/* Function: SpuSetTransferMode */
/* Address: 8009a11c */

long SpuSetTransferMode(long mode)

{
  long lVar1;
  
  if ((mode != 0) && (mode == 1)) {
    lVar1 = S_STM_OBJ_1C();
    return lVar1;
  }
  DAT_800c3ce0 = mode;
  DAT_800c3d6c = 0;
  return 0;
}


