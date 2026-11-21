/* Function: PADCMD_OBJ_65C */
/* Address: 800aae88 */

undefined4 PADCMD_OBJ_65C(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  *param_1 = *(undefined1 *)(*(int *)(param_2 + 0x3c) + 4);
  param_1[1] = *(byte *)(*(int *)(param_2 + 0x3c) + 5) & 0x7f;
  param_1[2] = *(undefined1 *)(*(int *)(param_2 + 0x3c) + 6);
  param_1[3] = *(undefined1 *)(*(int *)(param_2 + 0x3c) + 7);
  param_1[4] = (char)((int)(uint)*(byte *)(*(int *)(param_2 + 0x3c) + 5) >> 7);
  if (*(short *)(param_2 + 0xee) == 0) {
    *(undefined1 *)(param_2 + 0xeb) = 0;
    bVar1 = *(char *)(param_2 + 0x47) + 1;
    *(byte *)(param_2 + 0x47) = bVar1;
    if (*(byte *)(param_2 + 0xe9) <= bVar1) {
      *(undefined1 *)(param_2 + 0x47) = 0;
      *(undefined1 *)(param_2 + 0x48) = 0;
      uVar2 = PADCMD_OBJ_8B0();
      return uVar2;
    }
  }
  return 0;
}


