/* Function: PADPORTD_OBJ_63C */
/* Address: 800ac098 */

undefined * PADPORTD_OBJ_63C(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_800d1118;
  if ((param_1 & 0xf0) != 0) {
    puVar1 = &DAT_800d1208;
  }
  return puVar1;
}


