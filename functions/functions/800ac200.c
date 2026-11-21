/* Function: PADSEQD_OBJ_144 */
/* Address: 800ac200 */

void PADSEQD_OBJ_144(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = **(byte **)(param_1 + 0x3c) >> 4;
  if ((**(byte **)(param_1 + 0x3c) & 0xf0) == 0) {
    **(undefined1 **)(param_1 + 0x30) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 1) = 0;
    *(undefined1 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
    (*DAT_800cba08)();
    PADSEQD_OBJ_398();
    return;
  }
  cVar1 = *(char *)(param_1 + 0xe8);
  *(byte *)(param_1 + 0xe8) = bVar2;
  if (bVar2 == 0xf) {
    *(char *)(param_1 + 0xe8) = cVar1;
    PADSEQD_OBJ_224();
    return;
  }
  **(undefined1 **)(param_1 + 0x30) = 0;
  iVar3 = 2;
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 1) = **(undefined1 **)(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_1 + 0x44);
  if (2 < *(byte *)(param_1 + 0x44)) {
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x30) + iVar3) =
           *(undefined1 *)(*(int *)(param_1 + 0x3c) + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x44));
  }
  if (((*(char *)(*(int *)(param_1 + 0x3c) + 1) == '\0') &&
      (((*(char *)(param_1 + 0x46) != '\x01' || (*(int *)(param_1 + 0x14) != 0)) &&
       (*(char *)(param_1 + 0x50) == '\0')))) || (*(char *)(param_1 + 0xe8) != cVar1)) {
    (*DAT_800cba08)(param_1);
  }
  cVar1 = *(char *)(param_1 + 0x46);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if ((cVar1 == -1) || ((cVar1 != '\0' && (*(char *)(param_1 + 0x37) == '\0')))) {
    return;
  }
  if (((byte)(cVar1 - 2U) < 0xfc) && (**(char **)(param_1 + 0x3c) != -0xd)) {
    (*DAT_800cba08)(param_1);
    PADSEQD_OBJ_398();
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x46);
  if (bVar2 == 1) {
    *(undefined1 *)(param_1 + 0x47) = 0;
    *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + '\x01';
    PADSEQD_OBJ_398();
    return;
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      PADSEQD_OBJ_360();
      return;
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
    PADSEQD_OBJ_34C();
    return;
  }
  if (bVar2 != 0xfe) {
    PADSEQD_OBJ_360();
    return;
  }
  *(undefined1 *)(param_1 + 0x46) = 0xff;
  PADSEQD_OBJ_398();
  return;
}


