/* Function: FUN_8002deec */
/* Address: 8002deec */

void FUN_8002deec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2;
  if (0x8000 < param_1) {
    iVar1 = param_2 * 0x8000;
  }
  g_AudioFlag2 = g_AudioFlag2 + (short)(iVar1 >> 0xf);
  return;
}


