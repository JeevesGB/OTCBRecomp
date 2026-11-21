/* Function: FUN_80068b8c */
/* Address: 80068b8c */

void FUN_80068b8c(undefined1 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  
  uVar2 = GetReplayCarIndex(param_2);
  uVar4 = GetReplayCarIndex(uVar2);
  pbVar9 = &g_CarDisplayObjects + (uVar4 & 0xff) * 0xb0;
  bVar1 = *pbVar9;
  puVar5 = (undefined1 *)GetReplayLapData(uVar2,0);
  puVar6 = (undefined1 *)GetReplayLapData(uVar2,1);
  param_1[2] = *puVar5;
  uVar2 = *puVar6;
  param_1[1] = (char)param_2;
  param_1[3] = uVar2;
  cVar3 = HasTurboKit();
  if (cVar3 == '\0') {
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  iVar8 = 0;
  uVar4 = 0;
  pbVar7 = pbVar9;
  if ((byte)param_1[2] != 0) {
    do {
      if (pbVar7[1] != 0) {
        iVar8 = iVar8 + 1;
      }
      uVar4 = uVar4 + 1;
      pbVar7 = pbVar9 + uVar4;
    } while (uVar4 != (byte)param_1[2]);
    uVar4 = 0;
    puVar5 = param_1;
    if (param_1[2] != '\0') {
      do {
        if ((bVar1 == 0) && (iVar8 <= (int)uVar4)) {
          puVar5[4] = 0;
        }
        else {
          puVar5[4] = 0xff;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != (byte)param_1[2]);
    }
  }
  iVar8 = 0;
  uVar4 = 0;
  pbVar7 = pbVar9;
  if ((byte)param_1[3] != 0) {
    do {
      if (pbVar7[1] != 0) {
        iVar8 = iVar8 + 1;
      }
      uVar4 = uVar4 + 1;
      pbVar7 = pbVar9 + uVar4;
    } while (uVar4 != (byte)param_1[3]);
    uVar4 = 0;
    if (param_1[3] != '\0') {
      puVar5 = param_1;
      do {
        if (bVar1 == 1) {
          if ((int)uVar4 < iVar8) {
LAB_80068d60:
            puVar5[9] = 0xff;
          }
          else {
LAB_80068d58:
            puVar5[9] = 0;
          }
        }
        else if (bVar1 < 2) {
          if (bVar1 == 0) goto LAB_80068d58;
        }
        else if (bVar1 == 2) goto LAB_80068d60;
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != (byte)param_1[3]);
    }
  }
  return;
}


