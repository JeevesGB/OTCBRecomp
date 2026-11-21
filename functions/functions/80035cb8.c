/* Function: InitTrackSurface */
/* Address: 80035cb8 */

void InitTrackSurface(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = GsGetWorkBase();
  LoadCDFile((int)*(short *)(&DAT_800aded6 + param_1 * 4),uVar1);
  RelocateData(uVar1,0);
  FUN_8005bdec(uVar1,0,&DAT_800ccf28);
  puVar2 = (undefined4 *)GsGetWorkBase();
  LoadCDFile((int)*(short *)(&DAT_800aded4 + param_1 * 4),puVar2);
  MemAlloc(*puVar2);
  FUN_800359d0(puVar2);
  return;
}


