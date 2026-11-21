/* Function: FUN_8004d524 */
/* Address: 8004d524 */

void FUN_8004d524(int param_1)

{
  FUN_8004ced0(param_1 + 1);
  DrawSprite(g_TrackConfigBuffer + DAT_800ccf08 * 0x14,DAT_800ccf18,DAT_800ccf1c,g_RaceOTPtr2 + 0xc)
  ;
  DrawSprite(g_TrackConfigBuffer + DAT_800aec60 * 0x14,DAT_800ccf10,DAT_800ccf14,g_RaceOTPtr2 + 0xc)
  ;
  return;
}


