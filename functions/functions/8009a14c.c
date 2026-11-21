/* Function: SpuIsTransferCompleted */
/* Address: 8009a14c */

long SpuIsTransferCompleted(long flag)

{
  long lVar1;
  
  if ((DAT_800c3ce0 != 1) && (DAT_800c3d84 != 1)) {
    lVar1 = TestEvent(DAT_800c3cd8);
    if (flag == 1) {
      if (lVar1 == 0) {
        do {
          lVar1 = TestEvent(DAT_800c3cd8);
        } while (lVar1 == 0);
        lVar1 = S_ITC_OBJ_88();
        return lVar1;
      }
    }
    else if (lVar1 != 1) {
      return lVar1;
    }
    DAT_800c3d84 = 1;
    return 1;
  }
  lVar1 = S_ITC_OBJ_90();
  return lVar1;
}


