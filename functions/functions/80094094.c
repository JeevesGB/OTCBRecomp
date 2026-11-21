/* Function: VM_ALOC1_OBJ_178 */
/* Address: 80094094 */

byte VM_ALOC1_OBJ_178(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte in_t1;
  char in_t2;
  byte in_t3;
  
  uVar2 = DAT_800c3b60;
  if ((in_t3 == 99) && (in_t3 = in_t1, in_t2 == '\0')) {
    in_t3 = DAT_800cefa4;
  }
  iVar3 = (int)(char)DAT_800cefa4;
  if ((int)(uint)in_t3 < iVar3) {
    uVar5 = 0;
    if (0 < iVar3) {
      uVar4 = 0;
      do {
        if ((uVar2 & 1 << (uVar4 & 0x1f)) == 0) {
          (&DAT_800ce782)[uVar4 * 0x1c] = (&DAT_800ce782)[uVar4 * 0x1c] + 1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xff;
      } while ((int)(uVar5 & 0xff) < iVar3);
    }
    uVar2 = (uint)in_t3;
    (&DAT_800ce782)[uVar2 * 0x1c] = 0;
    cVar1 = DAT_800cefbf;
    (&DAT_800ce7aa)[uVar2 * 0x1c] = 0;
    (&DAT_800ce79e)[uVar2 * 0x1c] = 0;
    (&DAT_800ce79a)[uVar2 * 0x1c] = (short)cVar1;
  }
  return in_t3;
}


