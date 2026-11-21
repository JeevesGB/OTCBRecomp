/* Function: GetDrawEnv */
/* Address: 8009d0a4 */

DRAWENV * GetDrawEnv(DRAWENV *env)

{
  memcpy((uchar *)env,&DAT_800ca17c,0x5c);
  return env;
}


