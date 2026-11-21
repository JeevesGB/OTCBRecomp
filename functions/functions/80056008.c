/* Function: CleanupRaceEngine */
/* Address: 80056008 */

void CleanupRaceEngine(void)

{
  FUN_80023c78();
  InitGameSystems();
  FUN_80054b90();
  FUN_8005d168(0,0,0);
  FUN_8005d168(1,0,0);
  return;
}


