/* Function: SpuStart */
/* Address: 80097a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SpuStart(void)

{
  if (DAT_800c3d40 == 0) {
    DAT_800c3d40 = 1;
    InitGPU_Pre();
    FUN_8009863c(_spu_FiDMA);
    DAT_800c3cd8 = OpenEvent(0xf0000009,0x20,0x2000,(func *)0x0);
    EnableEvent(DAT_800c3cd8);
    InitGPU_Post();
  }
  return;
}


