/* Function: GetDispEnv */
/* Address: 8009d5d0 */

DISPENV * GetDispEnv(DISPENV *env)

{
  memcpy((uchar *)env,(uchar *)&DAT_800ca1d8,0x14);
  return env;
}


