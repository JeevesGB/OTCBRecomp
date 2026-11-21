/* Function: FUN_800846fc */
/* Address: 800846fc */

undefined4 FUN_800846fc(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char acStack_50 [64];
  
  if ((g_PadButtons3 & 0x4004) == 0x4004) {
    uVar1 = 0;
    if ((g_PadButtons2_Alt & 0x10) != 0) {
      piVar2 = (int *)FUN_80069778();
      iVar3 = *piVar2;
      *piVar2 = iVar3 + 10;
      if (9999 < iVar3 + 10) {
        *piVar2 = 9999;
      }
      PlaySFX(0x16);
      puVar4 = (undefined4 *)FUN_80069778();
      iVar3 = GetRaceSprite1();
      iVar5 = FUN_800672bc();
      iVar6 = FUN_800671cc();
      sprintf(acStack_50,"%d",*puVar4);
      FUN_80058a88(acStack_50,(int)*(short *)(iVar5 + 0x19c),(int)*(short *)(iVar5 + 0x19e));
      DrawSpriteScaled(iVar3 + 4,iVar6 + 0x148,g_MenuAnimPtr + 4);
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


