/* Function: _SsVabOpenHeadWithMode */
/* Address: 8009749c */

int _SsVabOpenHeadWithMode(uint *param_1,ushort param_2,code *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ushort uVar10;
  int local_420 [256];
  
  iVar2 = FUN_8009a224();
  if (iVar2 == 1) {
    return -1;
  }
  FUN_8009a1fc(1);
  iVar2 = (int)(short)param_2;
  if (iVar2 < 0x10) {
    iVar5 = 0;
    if (iVar2 == -1) {
      do {
        if ((&DAT_800cefd0)[iVar5] == '\0') {
          (&DAT_800cefd0)[iVar5] = 1;
          iVar2 = VS_VH_OBJ_158();
          return iVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      iVar2 = VS_VH_OBJ_16C();
      return iVar2;
    }
    iVar5 = 0x100000;
    uVar10 = 0x10;
    if ((&DAT_800cefd0)[iVar2] == '\0') {
      (&DAT_800cefd0)[iVar2] = 1;
      DAT_800cf028 = DAT_800cf028 + 1;
      iVar5 = (uint)param_2 << 0x10;
      uVar10 = param_2;
    }
    iVar5 = iVar5 >> 0x10;
    if (iVar5 < 0x10) {
      (&DAT_800cef08)[iVar5] = param_1;
      DAT_800cefa8 = 0;
      puVar7 = param_1 + 8;
      if (*param_1 >> 8 != 0x564142) {
        (&DAT_800cefd0)[iVar5] = 0;
        iVar2 = VS_VH_OBJ_358(0);
        return iVar2;
      }
      DAT_800cef92 = 0x40;
      if (((*param_1 & 0xff) == 0x70) && (DAT_800cef92 = 0x40, 4 < (int)param_1[1])) {
        DAT_800cef92 = 0x80;
      }
      uVar4 = (uint)DAT_800cef92;
      if (*(ushort *)((int)param_1 + 0x12) <= uVar4) {
        *(uint **)(&DAT_800ceec8 + ((int)((uint)uVar10 << 0x10) >> 0xe)) = puVar7;
        iVar2 = 0;
        uVar9 = 0;
        puVar8 = puVar7;
        if (uVar4 != 0) {
          do {
            puVar8[2] = uVar9;
            if ((char)*puVar8 != '\0') {
              uVar9 = uVar9 + 1;
            }
            iVar2 = iVar2 + 1;
            puVar8 = puVar8 + 4;
          } while (iVar2 < (int)uVar4);
        }
        iVar5 = 0;
        iVar2 = 0;
        piVar6 = local_420;
        *(uint **)(&DAT_800cef50 + ((int)((uint)uVar10 << 0x10) >> 0xe)) = puVar7 + uVar4 * 4;
        bVar1 = *(byte *)((int)param_1 + 0x16);
        puVar8 = puVar7 + uVar4 * 4 + (uint)*(ushort *)((int)param_1 + 0x12) * 0x80;
        do {
          if (iVar2 <= (int)(uint)bVar1) {
            iVar3 = (uint)(ushort)*puVar8 << 2;
            if (4 < (int)param_1[1]) {
              iVar3 = (uint)(ushort)*puVar8 << 3;
            }
            *piVar6 = iVar3;
            iVar5 = iVar5 + *piVar6;
          }
          puVar8 = (uint *)((int)puVar8 + 2);
          iVar2 = iVar2 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar2 < 0x100);
        uVar4 = iVar5 + 0x3fU & 0xffffffc0;
        iVar5 = (int)(short)uVar10;
        iVar2 = (*param_3)(uVar4,param_4,iVar5);
        if (iVar2 == -1) {
          return -1;
        }
        if (iVar2 + uVar4 < 0x80001) {
          *(int *)(&DAT_800cf030 + iVar5 * 4) = iVar2;
          iVar5 = 0;
          uVar4 = 0;
          piVar6 = local_420;
          do {
            iVar5 = iVar5 + *piVar6;
            if ((uVar4 & 1) == 0) {
              *(short *)(puVar7 + ((int)uVar4 / 2) * 4 + 3) = (short)((uint)(iVar2 + iVar5) >> 3);
            }
            else {
              *(short *)((int)puVar7 + ((int)uVar4 / 2) * 0x10 + 0xe) =
                   (short)((uint)(iVar2 + iVar5) >> 3);
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 1;
          } while ((int)uVar4 <= (int)(uint)bVar1);
          iVar2 = (int)(short)uVar10;
          *(int *)(&DAT_800cefe8 + iVar2 * 4) = iVar5;
          (&DAT_800cefd0)[iVar2] = 2;
          return iVar2;
        }
        (&DAT_800cefd0)[iVar5] = 0;
        FUN_8009a1fc(0);
        DAT_800cf028 = DAT_800cf028 + -1;
        iVar2 = VS_VH_OBJ_434();
        return iVar2;
      }
      (&DAT_800cefd0)[(int)((uint)uVar10 << 0x10) >> 0x10] = 0;
      iVar2 = VS_VH_OBJ_358(0);
      return iVar2;
    }
  }
  FUN_8009a1fc(0);
  iVar2 = VS_VH_OBJ_434();
  return iVar2;
}


