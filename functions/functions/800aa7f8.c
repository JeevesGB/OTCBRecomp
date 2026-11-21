/* Function: _padWaitRXready */
/* Address: 800aa7f8 */

void _padWaitRXready(void)

{
  do {
  } while ((*(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4) & 2) == 0);
  return;
}


