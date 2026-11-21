/* Function: _SsVmAlloc */
/* Address: 80093f1c */

uint _SsVmAlloc(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
  uVar1 = DAT_800c3b60;
  cVar7 = '\0';
  uVar5 = 0;
  uVar6 = 99;
  uVar4 = 0;
  if (0 < (char)DAT_800cefa4) {
    uVar2 = 0;
    do {
      if ((DAT_800c3b60 & 1 << (uVar2 & 0x1f)) == 0) {
        if (((&DAT_800ce79d)[uVar2 * 0x38] == '\0') && ((&DAT_800ce786)[uVar2 * 0x1c] == 0)) {
          uVar1 = VM_ALOC1_OBJ_178();
          return uVar1;
        }
        uVar2 = uVar4 & 0xff;
        if ((int)(short)(&DAT_800ce79a)[uVar2 * 0x1c] < (int)((int)DAT_800cefbf & 0xffffU)) {
          uVar1 = VM_ALOC1_OBJ_164((&DAT_800ce79a)[uVar2 * 0x1c]);
          return uVar1;
        }
        if ((int)(short)(&DAT_800ce79a)[uVar2 * 0x1c] == ((int)DAT_800cefbf & 0xffffU)) {
          cVar7 = cVar7 + '\x01';
          if ((&DAT_800ce786)[uVar2 * 0x1c] != -1) {
            uVar1 = VM_ALOC1_OBJ_160();
            return uVar1;
          }
          if ((int)uVar5 < (int)(short)(&DAT_800ce782)[uVar2 * 0x1c]) {
            uVar5 = (uint)(ushort)(&DAT_800ce782)[uVar2 * 0x1c];
            uVar6 = uVar4;
          }
        }
      }
      uVar4 = uVar4 + 1;
      uVar2 = uVar4 & 0xff;
    } while ((int)(uVar4 & 0xff) < (int)(char)DAT_800cefa4);
  }
  if (cVar7 == '\0') {
    uVar6 = (uint)DAT_800cefa4;
  }
  iVar3 = (int)(char)DAT_800cefa4;
  if ((int)(uVar6 & 0xff) < iVar3) {
    uVar5 = 0;
    if (0 < iVar3) {
      uVar4 = 0;
      do {
        if ((uVar1 & 1 << (uVar4 & 0x1f)) == 0) {
          (&DAT_800ce782)[uVar4 * 0x1c] = (&DAT_800ce782)[uVar4 * 0x1c] + 1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xff;
      } while ((int)(uVar5 & 0xff) < iVar3);
    }
    uVar1 = uVar6 & 0xff;
    (&DAT_800ce782)[uVar1 * 0x1c] = 0;
    cVar7 = DAT_800cefbf;
    (&DAT_800ce7aa)[uVar1 * 0x1c] = 0;
    (&DAT_800ce79e)[uVar1 * 0x1c] = 0;
    (&DAT_800ce79a)[uVar1 * 0x1c] = (short)cVar7;
  }
  return uVar6 & 0xff;
}


