/* Function: FUN_8006ddac */
/* Address: 8006ddac */

void FUN_8006ddac(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  
  puVar2 = (undefined1 *)GetCarData();
  puVar3 = (undefined1 *)GetCarReplayData();
  switch(*puVar2) {
  case 0:
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[4] = param_1[4];
    puVar3[3] = param_1[3];
    puVar3[2] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]);
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    FUN_80069bb0(*(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]),param_1[3]);
    if (param_1[5] != '\0') {
      puVar2[2] = 0;
      g_GameState = 0x10;
      return;
    }
    puVar2[1] = 0;
    g_GameState = 0xf;
    return;
  case 1:
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[4] = param_1[4];
    puVar3[3] = param_1[3];
    puVar3[2] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]);
    iVar4 = FUN_800679a4(param_1[7],param_1[8]);
    puVar3[5] = param_1[7];
    puVar3[6] = param_1[8];
    puVar3[9] = param_1[0xb];
    puVar3[8] = param_1[10];
    puVar3[7] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[9]);
    puVar2[2] = 1;
    g_GameState = 0x10;
    return;
  case 2:
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    puVar3[10] = *param_1;
    puVar3[0xb] = param_1[1];
    puVar3[0xe] = param_1[4];
    puVar3[0xd] = param_1[3];
    puVar3[0xc] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]);
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    FUN_80069bb0(*(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]),param_1[3]);
    if (param_1[5] != '\0') {
      puVar2[2] = 2;
      g_GameState = 0x10;
      return;
    }
    uVar5 = 1;
    break;
  case 3:
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    puVar3[10] = *param_1;
    puVar3[0xb] = param_1[1];
    puVar3[0xe] = param_1[4];
    puVar3[0xd] = param_1[3];
    puVar3[0xc] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]);
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    FUN_80069bb0(*(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]),param_1[3]);
    if (param_1[5] != '\0') {
      g_GameState = 0xd;
      return;
    }
    uVar5 = 2;
    break;
  case 4:
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    puVar3[0xf] = *param_1;
    puVar3[0x10] = param_1[1];
    puVar3[0x13] = param_1[4];
    puVar3[0x12] = param_1[3];
    puVar3[0x11] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]);
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    FUN_80069bb0(*(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]),param_1[3]);
    uVar5 = puVar3[0x11];
    uVar1 = FUN_8006781c(uVar5);
    iVar4 = GetReplayCarData(uVar5);
    if (*(short *)(iVar4 + 0xae) != 0) {
      puVar3[0xf] = 1;
      uVar5 = uVar1;
    }
    puVar3[0x11] = uVar5;
    if (param_1[5] != '\0') {
      g_GameState = 0x11;
      return;
    }
    uVar5 = 3;
    break;
  case 5:
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    puVar3[0xf] = *param_1;
    puVar3[0x10] = param_1[1];
    puVar3[0x13] = param_1[4];
    puVar3[0x12] = param_1[3];
    puVar3[0x11] = *(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]);
    iVar4 = FUN_800679a4(*param_1,param_1[1]);
    FUN_80069bb0(*(undefined1 *)(*(int *)(iVar4 + 4) + (uint)(byte)param_1[2]),param_1[3]);
    uVar5 = puVar3[0x11];
    uVar1 = FUN_8006781c(uVar5);
    iVar4 = GetReplayCarData(uVar5);
    if (*(short *)(iVar4 + 0xae) != 0) {
      puVar3[0xf] = 1;
      uVar5 = uVar1;
    }
    puVar3[0x11] = uVar5;
    if (param_1[5] != '\0') {
      g_GameState = 0x11;
      return;
    }
    uVar5 = 4;
    break;
  default:
    goto switchD_8006de00_default;
  }
  puVar2[1] = uVar5;
  g_GameState = 0xf;
switchD_8006de00_default:
  return;
}


