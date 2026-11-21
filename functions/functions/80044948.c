/* Function: FUN_80044948 */
/* Address: 80044948 */

undefined4 FUN_80044948(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar2 = (uint)*(ushort *)(param_1 + 0x15c) << 0x10;
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 4);
  iVar8 = g_PhysicsFlag % 3;
  iVar5 = iVar8;
  do {
    if (2 < iVar5) {
      iVar5 = iVar5 + -3;
    }
    DAT_800ccea8 = 0xffffffff;
    iVar6 = (int)*(short *)((iVar2 >> 0x14) * 2 + (&DAT_800cca50)[iVar5 + 3]);
    do {
      while( true ) {
        do {
          iVar3 = FUN_800447e8();
          if (iVar3 == 0) {
            *(short *)(*(int *)(param_1 + 0x3c) + 2) = (short)(iVar5 + 3);
            *(int *)(param_1 + 100) = iVar6 << 0xc;
            return 0xffffffff;
          }
          iVar4 = (*(int *)(iVar3 + 100) >> 0xc) - iVar6;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
        } while ((int)sVar1 + (int)*(short *)(*(int *)(iVar3 + 0x10) + 4) + 100 < iVar4);
        iVar3 = (int)*(short *)(iVar3 + 0x15c) - (iVar2 >> 0x10);
        if (iVar3 < 0) {
          iVar3 = iVar3 + g_TrackLength;
        }
        if (g_TrackLength / 2 < iVar3) {
          iVar3 = iVar3 - g_TrackLength;
        }
        if (iVar3 < 0) break;
        if (iVar3 < 0x14) goto LAB_80044adc;
      }
    } while (0x13 < -iVar3);
LAB_80044adc:
    iVar7 = iVar7 + 1;
    iVar5 = iVar8 + iVar7;
    if (2 < iVar7) {
      return 0;
    }
  } while( true );
}


