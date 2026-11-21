/* Function: C_011_OBJ_8B0 */
/* Address: 800a935c */

void C_011_OBJ_8B0(void)

{
  *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1325;
  *DAT_800d1048 = 3;
  DAT_800d0fc4 = DAT_800d0fc4 + 1;
  if ((DAT_800d0fd0 != 0) && (DAT_800d0fbc != 0)) {
    data_ready_callback();
  }
  return;
}


