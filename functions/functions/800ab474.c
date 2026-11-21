/* Function: PADIF_OBJ_48 */
/* Address: 800ab474 */

void PADIF_OBJ_48(int param_1)

{
  if ((DAT_800cba44 == DAT_800cba54) && (DAT_800cba40 != 0)) {
    (*DAT_800cba34)();
    (*DAT_800cba30)();
  }
  if (DAT_800cba84 != 0) {
    (*DAT_800cba1c)(*(undefined4 *)(param_1 + 0xc));
    (*DAT_800cba1c)(*(int *)(param_1 + 0xc) + 0xf0);
  }
  if (*(char *)(param_1 + 0x37) == '\0') {
    PADIF_OBJ_108(param_1,0x42);
    return;
  }
  _padSioRW2(param_1,*(undefined1 *)(param_1 + 0x37));
  return;
}


