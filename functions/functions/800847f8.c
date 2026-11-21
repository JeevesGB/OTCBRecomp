/* Function: FUN_800847f8 */
/* Address: 800847f8 */

void FUN_800847f8(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = GetRaceSprite1();
  iVar2 = FUN_800671cc();
  iVar3 = iVar1 + 0xc;
  iVar4 = iVar1 + 0x10;
  DrawRaceSprite(iVar2,iVar2 + 8,iVar3,iVar4,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x10,iVar2 + 0x18,iVar3,iVar4,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x20,iVar2 + 0x28,iVar3,iVar4,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x30,iVar2 + 0x38,iVar3,iVar4,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x40,iVar2 + 0x48,iVar1 + 0x14,iVar1 + 0x18,DAT_800cddf0,g_MenuAnimPtr + 4)
  ;
  return;
}


