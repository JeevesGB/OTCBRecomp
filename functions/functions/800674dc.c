/* Function: GetChampionshipTrackIndex */
/* Address: 800674dc */

undefined1 GetChampionshipTrackIndex(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar1 = 1;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    iVar1 = 0;
    break;
  case 0xffffffff:
    iVar1 = DAT_800b91b0;
  }
  if (iVar1 == 0) {
    return (&DAT_800b8c17)[param_1 * 0x10];
  }
  return (&DAT_800b8c18)[param_1 * 0x10];
}


