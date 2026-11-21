/* Function: UpdateMemoryCardOp */
/* Address: 8005e454 */

void UpdateMemoryCardOp(void)

{
  DAT_800cd9c0 = MemCardSync(1,&DAT_800cd760,&DAT_800cd75c);
  if (DAT_800cd9c0 != 0) {
    if (DAT_800cd9c0 < 1) {
      if (DAT_800cd9c0 == -1) {
        FUN_8005df90();
      }
    }
    else if (DAT_800cd9c0 == 1) {
      FUN_8005e260();
    }
  }
  return;
}


