/* Function: FUN_8002d3d8 */
/* Address: 8002d3d8 */

void FUN_8002d3d8(void)

{
  SetCarMatrix(g_PlayerCarPtr);
  GTE_CTRL = GTE_CTRL | 2;
  GTE_OFX = g_PlayerCarPtr;
  return;
}


