/* Function: UpdateChampionshipStandings */
/* Address: 8006a13c */

void UpdateChampionshipStandings(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = GetReplayCarIndex(*(undefined1 *)(param_2 + 0x11));
  if (param_3 == 1) {
    (&DAT_800ba853)[(uVar1 & 0xff) * 0xb0 + (uint)*param_1] = 0xff;
  }
  return;
}


