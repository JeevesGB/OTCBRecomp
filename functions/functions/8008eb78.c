/* Function: _SsSeqGetEof */
/* Address: 8008eb78 */

void _SsSeqGetEof(ushort param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = (int *)((int)&DAT_800cdee8 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar2 = (short)param_2 * 0xb0;
  puVar4 = (undefined4 *)(*piVar3 + iVar2);
  cVar1 = *(char *)((int)puVar4 + 0x21) + '\x01';
  *(char *)((int)puVar4 + 0x21) = cVar1;
  if (*(char *)(puVar4 + 8) != '\0') {
    if (cVar1 < *(char *)(puVar4 + 8)) {
      puVar4[0x22] = 0;
      *(undefined1 *)(puVar4 + 7) = 0;
      puVar4[0x24] = 0;
      if ((*(uint *)(iVar2 + *piVar3 + 0x98) & 0x400) != 0) {
        *puVar4 = puVar4[3];
        MIDIREAD_OBJ_204();
        return;
      }
      *puVar4 = puVar4[1];
      puVar4[2] = puVar4[1];
    }
    else {
      *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffffe;
      *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffff7;
      *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffffd;
      *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 0x200;
      *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 4;
      *(undefined1 *)(puVar4 + 5) = 0;
      if ((*(uint *)(iVar2 + *piVar3 + 0x98) & 0x400) != 0) {
        puVar4[2] = puVar4[3];
        MIDIREAD_OBJ_2D4();
        return;
      }
      puVar4[2] = puVar4[1];
      if (*(char *)((int)puVar4 + 0x22) != -1) {
        *(undefined1 *)(puVar4 + 5) = 0;
        _SsSndNextSep((int)*(char *)((int)puVar4 + 0x22),(int)*(char *)((int)puVar4 + 0x23));
        _SsVmSeqKeyOff((int)(short)(param_1 | (ushort)(param_2 << 8)));
      }
      _SsVmSeqKeyOff((int)(short)(param_1 | (ushort)(param_2 << 8)));
      puVar4[0x24] = (int)*(short *)(puVar4 + 0x15);
    }
    return;
  }
  puVar4[0x22] = 0;
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[0x24] = 0;
  if ((*(uint *)(iVar2 + *piVar3 + 0x98) & 0x400) != 0) {
    *puVar4 = puVar4[3];
    MIDIREAD_OBJ_328();
    return;
  }
  *puVar4 = puVar4[1];
  MIDIREAD_OBJ_328();
  return;
}


