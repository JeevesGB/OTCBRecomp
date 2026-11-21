/* Function: SPU_OBJ_AB0 */
/* Address: 800985ac */

void SPU_OBJ_AB0(void)

{
  *(uint *)PTR_SPU_DELAY_800c3d64 = *(uint *)PTR_SPU_DELAY_800c3d64 & 0xf0ffffff | 0x22000000;
  return;
}


