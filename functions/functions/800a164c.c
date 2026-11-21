/* Function: ResetEntryInt */
/* Address: 800a164c */

void ResetEntryInt(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}


