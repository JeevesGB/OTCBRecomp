/* Function: InitTrackRenderer */
/* Address: 80031588 */

void InitTrackRenderer(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = GsGetWorkBase();
  LoadCDFile(0xf7,uVar1);
  iVar2 = GsGetWorkBase();
  DAT_800ccb18 = iVar2 + 4;
  puVar3 = (undefined4 *)GsGetWorkBase();
  MemAlloc(*puVar3);
  return;
}


