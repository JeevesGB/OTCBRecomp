/* Function: HookEntryInt */
/* Address: 800a165c */

void HookEntryInt(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}


