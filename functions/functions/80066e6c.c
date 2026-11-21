/* Function: SetupChampionshipBuffers */
/* Address: 80066e6c */

void SetupChampionshipBuffers
               (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
               undefined2 param_5)

{
  byte bVar1;
  int iVar2;
  
  param_1[0x1a] = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 3;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 0x1f) = param_4;
  param_1[0x1e] = param_5;
  do {
    bVar1 = *(byte *)((int)param_1 + 0x3f);
    if (bVar1 == 1) {
      FUN_80063a34(param_1,*(undefined4 *)(param_1 + 0x32),*(undefined1 *)(param_1 + 0x1f));
      *(char *)((int)param_1 + 0x3f) = *(char *)((int)param_1 + 0x3f) + -1;
LAB_80066f58:
      iVar2 = 0;
    }
    else if (bVar1 < 2) {
      iVar2 = 0;
      if (bVar1 == 0) {
        iVar2 = -1;
      }
    }
    else {
      if (bVar1 == 2) {
        FUN_80063b18(param_1,(int)(short)param_1[0x1e]);
        *(char *)((int)param_1 + 0x3f) = *(char *)((int)param_1 + 0x3f) + -1;
        goto LAB_80066f58;
      }
      iVar2 = 0;
      if (bVar1 == 3) {
        if ((short)param_1[0x1a] < 0) {
          *(undefined1 *)((int)param_1 + 0x3f) = 2;
          goto LAB_80066f58;
        }
        FUN_80063e18(param_1);
        iVar2 = 0;
      }
    }
    if (iVar2 != 0) {
      return;
    }
    ProcessRenderQueue();
    VsyncWait();
  } while( true );
}


