/* Function: PADCMD_OBJ_AF4 */
/* Address: 800ab320 */

undefined4 PADCMD_OBJ_AF4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    (*DAT_800cba08)();
    return 0;
  }
  if (*(char *)(param_1 + 0x46) == '\x02') {
    uVar1 = PADCMD_OBJ_B44();
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0x46) = 0xfe;
  uVar1 = PADCMD_OBJ_B40();
  return uVar1;
}


