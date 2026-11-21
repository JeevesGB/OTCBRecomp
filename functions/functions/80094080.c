/* Function: VM_ALOC1_OBJ_164 */
/* Address: 80094080 */

uint VM_ALOC1_OBJ_164(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_a3;
  uint uVar5;
  uint in_t0;
  uint in_t1;
  char in_t2;
  uint in_t3;
  ushort in_t4;
  uint in_t5;
  int in_t6;
  uint in_t7;
  int in_t8;
  
  uVar2 = DAT_800c3b60;
  while( true ) {
    do {
      in_a3 = in_a3 + 1;
      if (in_t6 <= (int)(in_a3 & 0xff)) {
        if (((in_t3 & 0xff) == 99) && (in_t3 = in_t1, in_t2 == '\0')) {
          in_t3 = (uint)DAT_800cefa4;
        }
        iVar3 = (int)(char)DAT_800cefa4;
        if ((int)(in_t3 & 0xff) < iVar3) {
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
          uVar2 = in_t3 & 0xff;
          (&DAT_800ce782)[uVar2 * 0x1c] = 0;
          cVar1 = DAT_800cefbf;
          (&DAT_800ce7aa)[uVar2 * 0x1c] = 0;
          (&DAT_800ce79e)[uVar2 * 0x1c] = 0;
          (&DAT_800ce79a)[uVar2 * 0x1c] = (short)cVar1;
        }
        return in_t3 & 0xff;
      }
    } while ((in_t7 & in_t8 << (in_a3 & 0x1f)) != 0);
    if (((&DAT_800ce79d)[(in_a3 & 0xff) * 0x38] == '\0') &&
       ((&DAT_800ce786)[(in_a3 & 0xff) * 0x1c] == 0)) break;
    uVar5 = in_a3 & 0xff;
    if ((int)(short)(&DAT_800ce79a)[uVar5 * 0x1c] < (int)(in_t5 & 0xffff)) {
      uVar2 = VM_ALOC1_OBJ_164((&DAT_800ce79a)[uVar5 * 0x1c]);
      return uVar2;
    }
    if ((int)(short)(&DAT_800ce79a)[uVar5 * 0x1c] == (in_t5 & 0xffff)) {
      in_t2 = in_t2 + '\x01';
      if ((ushort)(&DAT_800ce786)[uVar5 * 0x1c] < in_t4) {
        uVar2 = VM_ALOC1_OBJ_160();
        return uVar2;
      }
      if (((&DAT_800ce786)[uVar5 * 0x1c] == in_t4) &&
         ((int)in_t0 < (int)(short)(&DAT_800ce782)[uVar5 * 0x1c])) {
        in_t0 = (uint)(ushort)(&DAT_800ce782)[uVar5 * 0x1c];
        in_t1 = in_a3;
      }
    }
  }
  uVar2 = VM_ALOC1_OBJ_178();
  return uVar2;
}


