/* Function: PADCMD_OBJ_7A8 */
/* Address: 800aafd4 */

undefined4 PADCMD_OBJ_7A8(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (param_4 != -1) {
    do {
      if (*(char *)(param_2 + 0x48) == '\0') goto PADCMD_OBJ_844;
      if ((char *)(param_2 + 0xe3) <= DAT_800d1078) {
        *(undefined1 *)(param_2 + 0x47) = 0;
        *(undefined1 *)(param_2 + 0x48) = 0;
        uVar3 = PADCMD_OBJ_8B4();
        return uVar3;
      }
      if (*DAT_800d1078 != *param_1) {
        *(undefined2 *)(param_2 + 0xee) = 0xffff;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *DAT_800d1078 = cVar1;
      DAT_800d1078 = DAT_800d1078 + 1;
      param_4 = param_4 + -1;
      *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + -1;
    } while (param_4 != -1);
  }
  if (*(char *)(param_2 + 0x48) != '\0') {
    return 0;
  }
PADCMD_OBJ_844:
  if (*(short *)(param_2 + 0xee) != 0) {
    *(undefined2 *)(param_2 + 0xee) = 0;
    *(undefined1 *)(param_2 + 0x48) = 0;
    uVar3 = PADCMD_OBJ_8B4();
    return uVar3;
  }
  bVar2 = *(char *)(param_2 + 0x47) + 1;
  *(byte *)(param_2 + 0x47) = bVar2;
  if (*(byte *)(param_2 + 0xea) <= bVar2) {
    *(undefined1 *)(param_2 + 0x49) = 6;
    *(undefined1 *)(param_2 + 0x46) = 0xfe;
    *(undefined1 *)(param_2 + 0xeb) = 0;
    uVar3 = PADCMD_OBJ_8B4();
    return uVar3;
  }
  *(undefined1 *)(param_2 + 0x48) = 0;
  *(undefined1 *)(param_2 + 0xeb) = 0;
  uVar3 = PADCMD_OBJ_8B4();
  return uVar3;
}


