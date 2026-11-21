/* Function: FUN_8003c8c0 */
/* Address: 8003c8c0 */

void FUN_8003c8c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = malloc3(0x3e0);
  *puVar1 = *g_TrackObjectListTail;
  *g_TrackObjectListTail = puVar1;
  g_TrackObjectListTail = puVar1;
  return;
}


