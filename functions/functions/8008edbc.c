/* Function: _SsGetSeqData */
/* Address: 8008edbc */

undefined4 _SsGetSeqData(ushort param_1,ushort param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *pbVar8;
  int *piVar9;
  
  iVar4 = (short)param_2 * 0xb0;
  piVar9 = (int *)((&DAT_800cdee8)[(short)param_1] + iVar4);
  bVar7 = *(byte *)*piVar9;
  pbVar8 = (byte *)*piVar9 + 1;
  *piVar9 = (int)pbVar8;
  if (((*(uint *)(iVar4 + (&DAT_800cdee8)[(short)param_1] + 0x98) & 0x401) == 0x401) &&
     (pbVar8 == (byte *)(piVar9[4] + 1))) {
    _SsSeqGetEof((int)(short)param_1,(int)(short)param_2,*(undefined1 *)(piVar9[4] + 1));
    uVar5 = MIDIREAD_OBJ_6C8();
    return uVar5;
  }
  if ((bVar7 & 0x80) == 0) {
    bVar3 = *(byte *)((int)piVar9 + 0x16);
    if (bVar3 == 0xc0) {
      uVar5 = MIDIREAD_OBJ_6BC((int)(short)param_1,(int)(short)param_2,bVar7);
      return uVar5;
    }
    if (bVar3 < 0xc1) {
      if (bVar3 == 0x90) {
        uVar1 = *(undefined1 *)*piVar9;
        *piVar9 = (int)((undefined1 *)*piVar9 + 1);
        iVar4 = _SsReadDeltaValue((int)(short)param_1,(int)(short)param_2);
        piVar9[0x24] = iVar4;
        (*DAT_800cde48)((int)(short)param_1,(int)(short)param_2,bVar7,uVar1);
        uVar5 = MIDIREAD_OBJ_6C8();
        return uVar5;
      }
      if (bVar3 == 0xb0) {
        uVar5 = MIDIREAD_OBJ_6BC((int)(short)param_1,(int)(short)param_2,bVar7);
        return uVar5;
      }
      uVar5 = MIDIREAD_OBJ_6C8();
      return uVar5;
    }
    if (bVar3 == 0xe0) {
      (*DAT_800cde50)((int)(short)param_1,(int)(short)param_2);
      uVar5 = MIDIREAD_OBJ_6C8();
      return uVar5;
    }
    if (bVar3 != 0xff) {
      uVar5 = MIDIREAD_OBJ_6C8();
      return uVar5;
    }
    if (bVar7 != 0x2f) {
      (*DAT_800cde54)((int)(short)param_1,(int)(short)param_2);
      return 0;
    }
  }
  else {
    *(byte *)((int)piVar9 + 0x17) = bVar7 & 0xf;
    bVar7 = bVar7 & 0xf0;
    if (bVar7 == 0xc0) {
      *(undefined1 *)((int)piVar9 + 0x16) = 0xc0;
      uVar1 = *(undefined1 *)*piVar9;
      *piVar9 = (int)((undefined1 *)*piVar9 + 1);
      uVar5 = MIDIREAD_OBJ_6BC((int)(short)param_1,(int)(short)param_2,uVar1);
      return uVar5;
    }
    if (bVar7 < 0xc1) {
      if (bVar7 == 0x90) {
        puVar6 = (undefined1 *)*piVar9;
        *(undefined1 *)((int)piVar9 + 0x16) = 0x90;
        uVar1 = *puVar6;
        *piVar9 = (int)(puVar6 + 1);
        *piVar9 = (int)(puVar6 + 2);
        iVar4 = _SsReadDeltaValue((int)(short)param_1,(int)(short)param_2);
        piVar9[0x24] = iVar4;
        uVar5 = MIDIREAD_OBJ_5F8((int)(short)param_1,(int)(short)param_2,uVar1);
        return uVar5;
      }
      if (bVar7 == 0xb0) {
        *(undefined1 *)((int)piVar9 + 0x16) = 0xb0;
        uVar1 = *(undefined1 *)*piVar9;
        *piVar9 = (int)((undefined1 *)*piVar9 + 1);
        uVar5 = MIDIREAD_OBJ_6BC((int)(short)param_1,(int)(short)param_2,uVar1);
        return uVar5;
      }
      uVar5 = MIDIREAD_OBJ_6C8();
      return uVar5;
    }
    if (bVar7 == 0xe0) {
      *(undefined1 *)((int)piVar9 + 0x16) = 0xe0;
      *piVar9 = *piVar9 + 1;
      uVar5 = MIDIREAD_OBJ_654((int)(short)param_1,(uint)param_2 << 0x10);
      return uVar5;
    }
    if (bVar7 != 0xf0) {
      uVar5 = MIDIREAD_OBJ_6C8();
      return uVar5;
    }
    *(undefined1 *)((int)piVar9 + 0x16) = 0xff;
    cVar2 = *(char *)*piVar9;
    *piVar9 = (int)((char *)*piVar9 + 1);
    if (cVar2 != '/') {
      uVar5 = MIDIREAD_OBJ_6A8((uint)param_1 << 0x10);
      return uVar5;
    }
  }
  _SsSeqGetEof((int)(short)param_1,(int)(short)param_2,0x2f);
  uVar5 = MIDIREAD_OBJ_6C8();
  return uVar5;
}


