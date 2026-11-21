/* Function: PADCMD_OBJ_41C */
/* Address: 800aac48 */

void PADCMD_OBJ_41C(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    PADCMD_OBJ_BA8(param_1,*(undefined1 *)(param_1 + 0x47));
    PADCMD_OBJ_4B4();
    return;
  }
  if (bVar1 < 4) {
    if (bVar1 != 2) {
      PADCMD_OBJ_4B4();
      return;
    }
    PADCMD_OBJ_B88(param_1,*(undefined1 *)(param_1 + 0x47));
    PADCMD_OBJ_4B4();
    return;
  }
  if (bVar1 != 4) {
    PADCMD_OBJ_4B4();
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    PADCMD_OBJ_BC8(param_1,*(undefined1 *)(param_1 + 0x47));
    PADCMD_OBJ_4B4();
    return;
  }
  PADCMD_OBJ_BE8();
  return;
}


