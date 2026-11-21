/* Function: _SsSetControlChange */
/* Address: 800911bc */

void _SsSetControlChange(short param_1,short param_2,uchar param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (int)param_1;
  iVar2 = (int)param_2;
  puVar4 = (undefined4 *)((&DAT_800cdee8)[iVar3] + iVar2 * 0xb0);
  uVar1 = *(undefined1 *)*puVar4;
  *puVar4 = (undefined1 *)*puVar4 + 1;
  if (param_3 == '@') {
    MIDICC_OBJ_1D8(iVar3,iVar2);
    return;
  }
  if (0x40 < param_3) {
    if (param_3 == 'c') {
      MIDICC_OBJ_1D8(iVar3,iVar2);
      return;
    }
    if (99 < param_3) {
      if (param_3 == 'e') {
        (*DAT_800cde80)(iVar3,iVar2,uVar1);
        MIDICC_OBJ_21C();
        return;
      }
      if (100 < param_3) {
        if (param_3 != 'y') {
          MIDICC_OBJ_208((int)param_1);
          return;
        }
        (*DAT_800cde88)(iVar3,iVar2);
        MIDICC_OBJ_21C();
        return;
      }
      MIDICC_OBJ_1D8(iVar3,iVar2);
      return;
    }
    if (param_3 == '[') {
      MIDICC_OBJ_1D8(iVar3,iVar2);
      return;
    }
    if (param_3 != 'b') {
      MIDICC_OBJ_208((int)param_1);
      return;
    }
    MIDICC_OBJ_1D8(iVar3,iVar2);
    return;
  }
  if (param_3 == '\a') {
    MIDICC_OBJ_1D8(iVar3,iVar2);
    return;
  }
  if (7 < param_3) {
    if (param_3 == '\n') {
      MIDICC_OBJ_1D8(iVar3,iVar2);
      return;
    }
    if (param_3 != '\v') {
      MIDICC_OBJ_208((int)param_1);
      return;
    }
    MIDICC_OBJ_1D8(iVar3,iVar2);
    return;
  }
  if (param_3 == '\0') {
    *(undefined1 *)((int)puVar4 + 0x26) = uVar1;
    MIDICC_OBJ_210(iVar3,iVar2);
    return;
  }
  if (param_3 != '\x06') {
    MIDICC_OBJ_208((int)param_1);
    return;
  }
  MIDICC_OBJ_1D8(iVar3,iVar2);
  return;
}


