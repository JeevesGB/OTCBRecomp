/* Function: SsSeqCalledTbyT */
/* Address: 8008e52c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SsSeqCalledTbyT(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (DAT_800cdedc != 1) {
    DAT_800cdedc = 1;
    uVar6 = 0;
    _SsVmFlush();
    if (0 < DAT_800ce768) {
      piVar7 = &DAT_800cdee8;
      do {
        if (((DAT_800cdee0 & 1 << (uVar6 & 0x1f)) != 0) && (iVar5 = 0, 0 < DAT_800ce76a)) {
          iVar4 = (int)(short)uVar6;
          iVar3 = 0;
          iVar1 = 0;
          do {
            iVar2 = iVar3 >> 0x10;
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 1) != 0) {
              _SsSndPlay(iVar4,iVar2);
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x10) != 0) {
                _SsSndCrescendo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x20) != 0) {
                _SsSndCrescendo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x40) != 0) {
                _SsSndTempo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x80) != 0) {
                _SsSndTempo(iVar4,iVar2);
              }
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 2) != 0) {
              _SsSndPause(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 8) != 0) {
              _SsSndReplay(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 4) != 0) {
              _SsSndStop(iVar4,iVar2);
              *(undefined4 *)(iVar1 + *piVar7 + 0x98) = 0;
            }
            iVar3 = iVar3 + 0x10000;
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 0xb0;
          } while (iVar5 < DAT_800ce76a);
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((int)uVar6 < (int)DAT_800ce768);
    }
    DAT_800cdedc = 0;
  }
  return;
}


