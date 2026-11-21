/* Function: FUN_8004c78c */
/* Address: 8004c78c */

void FUN_8004c78c(short param_1,short param_2,int param_3)

{
  char local_18;
  char local_17;
  char local_16;
  undefined1 local_15;
  
  if (param_3 < 100) {
    local_18 = ' ';
  }
  else {
    local_18 = (char)(param_3 / 100) + (char)((param_3 / 100) / 10) * -10 + '0';
  }
  local_17 = ' ';
  if (9 < param_3) {
    local_17 = (char)(param_3 / 10) + (char)((param_3 / 10) / 10) * -10 + '0';
  }
  local_15 = 0;
  local_16 = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
  SetActiveSpriteSlot(0,0);
  DrawText(&local_18,(int)param_1,(int)param_2);
  DrawSprite(g_TrackConfigBuffer + 0xa0,param_1 + 10,param_2 + 0xb,g_RaceOTPtr2 + 8);
  return;
}


