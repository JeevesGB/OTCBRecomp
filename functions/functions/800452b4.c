/* Function: FUN_800452b4 */
/* Address: 800452b4 */

void FUN_800452b4(int param_1,int param_2)

{
  RECT local_18;
  
  param_1 = param_1 * 2;
  param_2 = param_2 * 2;
  local_18.x = *(short *)(&DAT_800ae9d4 + param_1);
  local_18.y = *(short *)(&DAT_800ae9e0 + param_1);
  local_18.w = 0x40;
  local_18.h = 0x100;
  MoveImage(&local_18,(int)*(short *)(&DAT_800ae9d4 + param_2),
            (int)*(short *)(&DAT_800ae9e0 + param_2));
  DrawSync(0);
  local_18.x = *(short *)(&DAT_800ae9f8 + param_1);
  local_18.y = *(short *)(&DAT_800aea04 + param_1);
  local_18.w = 0x40;
  local_18.h = 0x40;
  MoveImage(&local_18,(int)*(short *)(&DAT_800ae9f8 + param_2),
            (int)*(short *)(&DAT_800aea04 + param_2));
  DrawSync(0);
  return;
}


