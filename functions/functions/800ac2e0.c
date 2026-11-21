/* Function: PADSEQD_OBJ_224 */
/* Address: 800ac2e0 */

void PADSEQD_OBJ_224(undefined4 param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  int unaff_s0;
  
  if (((*(char *)(*(int *)(unaff_s0 + 0x3c) + 1) == '\0') &&
      (((*(char *)(unaff_s0 + 0x46) != '\x01' || (*(int *)(unaff_s0 + 0x14) != 0)) &&
       (*(char *)(unaff_s0 + 0x50) == '\0')))) || (*(byte *)(unaff_s0 + 0xe8) != param_2)) {
    (*DAT_800cba08)();
  }
  cVar1 = *(char *)(unaff_s0 + 0x46);
  *(undefined1 *)(unaff_s0 + 0x4a) = 0;
  if ((cVar1 == -1) || ((cVar1 != '\0' && (*(char *)(unaff_s0 + 0x37) == '\0')))) {
    return;
  }
  if (((byte)(cVar1 - 2U) < 0xfc) && (**(char **)(unaff_s0 + 0x3c) != -0xd)) {
    (*DAT_800cba08)();
    PADSEQD_OBJ_398();
    return;
  }
  bVar2 = *(byte *)(unaff_s0 + 0x46);
  if (bVar2 == 1) {
    *(undefined1 *)(unaff_s0 + 0x47) = 0;
    *(char *)(unaff_s0 + 0x46) = *(char *)(unaff_s0 + 0x46) + '\x01';
    PADSEQD_OBJ_398();
    return;
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      PADSEQD_OBJ_360();
      return;
    }
    *(undefined1 *)(unaff_s0 + 0x49) = 1;
    PADSEQD_OBJ_34C();
    return;
  }
  if (bVar2 != 0xfe) {
    PADSEQD_OBJ_360();
    return;
  }
  *(undefined1 *)(unaff_s0 + 0x46) = 0xff;
  PADSEQD_OBJ_398();
  return;
}


