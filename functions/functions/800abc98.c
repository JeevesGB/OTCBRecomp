/* Function: PADPORTD_OBJ_23C */
/* Address: 800abc98 */

/* WARNING: Removing unreachable block (ram,0x800abc54) */
/* WARNING: Removing unreachable block (ram,0x800abc74) */
/* WARNING: Removing unreachable block (ram,0x800abc7c) */
/* WARNING: Removing unreachable block (ram,0x800abc88) */

void PADPORTD_OBJ_23C(void)

{
  int unaff_s1;
  
  DAT_800cba48 = 0;
  *(undefined2 *)(PTR_JOY_MCD_DATA_800cbaac + 10) = 0;
  DAT_800cba44 = DAT_800cba44 + 1;
  if (DAT_800cba58 < DAT_800cba44) {
    return;
  }
  _padInitSioMode(DAT_800cba44 * 0xf0 + unaff_s1);
  PADPORTD_OBJ_298();
  return;
}


