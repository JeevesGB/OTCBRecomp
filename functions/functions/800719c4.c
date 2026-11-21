/* Function: FUN_800719c4 */
/* Address: 800719c4 */

void FUN_800719c4(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  iVar1 = GetCarPositionData();
  iVar2 = GetSelectedCarData();
  iVar3 = FUN_800679a4(*param_1,param_1[1]);
  local_20 = DAT_80022958;
  local_1f = DAT_80022959;
  local_1e = DAT_8002295a;
  FUN_8006ebc4(&local_20,*param_1,param_1[1],
               *(undefined1 *)(*(int *)(iVar3 + 4) + (uint)(byte)param_1[2]));
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 6) * 0x14,(int)*(short *)(iVar1 + 0x144),
               (int)*(short *)(iVar1 + 0x146),g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  if (param_2 != 0) {
    iVar2 = GetSelectedCarData();
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x33) * 0x14,
                 (int)*(short *)(iVar1 + 0x1fc),(int)*(short *)(iVar1 + 0x1fe),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
  }
  return;
}


