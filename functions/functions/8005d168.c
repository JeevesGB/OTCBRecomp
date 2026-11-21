/* Function: FUN_8005d168 */
/* Address: 8005d168 */

void FUN_8005d168(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = PadInfoAct((int)(short)(&DAT_800cd6ac)[param_1 * 6],-1,0);
  if ((iVar1 == 0) && (param_2 != 0 || param_3 != 0)) {
    param_2 = 0x40;
    param_3 = 1;
  }
  (&g_MemFlag0)[param_1 * 2] = (char)param_2;
  (&g_MemFlag1)[param_1 * 2] = (char)param_3;
  return;
}


