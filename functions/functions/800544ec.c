/* Function: FUN_800544ec */
/* Address: 800544ec */

int FUN_800544ec(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(&g_FileTable + param_1 * 8) + 0x7ff;
  if (iVar1 < 0) {
    iVar1 = *(int *)(&g_FileTable + param_1 * 8) + 0xffe;
  }
  return iVar1 >> 0xb;
}


