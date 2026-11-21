/* Function: Snd_SetPlayMode */
/* Address: 80091adc */

void Snd_SetPlayMode(ushort param_1,short param_2,char param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)&DAT_800cdee8 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar2 = param_2 * 0xb0;
  puVar1 = (undefined4 *)(*piVar3 + iVar2);
  *puVar1 = puVar1[1];
  puVar1[2] = puVar1[1];
  puVar1[3] = puVar1[1];
  *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffdff;
  *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffffb;
  *(undefined1 *)(puVar1 + 8) = param_4;
  if (param_3 == '\x01') {
    *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 1;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
    _SsVmSetSeqVol((int)(short)(param_1 | param_2 << 8),*(undefined2 *)(puVar1 + 0x16),
                   *(undefined2 *)((int)puVar1 + 0x5a),1);
    PLAYMODE_OBJ_108();
    return;
  }
  if (param_3 == '\0') {
    *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 2;
  }
  return;
}


