/* Function: SPU_OBJ_A88 */
/* Address: 80098584 */

void SPU_OBJ_A88(void)

{
  *(uint *)PTR_SPU_DELAY_800c3d64 = *(uint *)PTR_SPU_DELAY_800c3d64 & 0xf0ffffff | 0x20000000;
  return;
}


