/* Function: LoadCDFile */
/* Address: 800543d8 */

int LoadCDFile(int param_1,u_long *param_2)

{
  int iVar1;
  int iVar2;
  u_char local_28 [8];
  u_char auStack_20 [8];
  
  iVar1 = *(int *)(&g_FileTable + param_1 * 8) + 0x7ff;
  if (iVar1 < 0) {
    iVar1 = *(int *)(&g_FileTable + param_1 * 8) + 0xffe;
  }
  local_28[0] = 0x80;
  do {
    iVar2 = CdControlB('\x0e',local_28,auStack_20);
  } while (iVar2 == 0);
  VSync(3);
  do {
    do {
      iVar2 = CdControlB('\x02',(u_char *)(param_1 * 8 + -0x7ff4bb08),auStack_20);
    } while (iVar2 == 0);
    do {
      iVar2 = CdRead(iVar1 >> 0xb,param_2,0x80);
    } while (iVar2 == 0);
    iVar2 = CdReadSync(0,(u_char *)0x0);
  } while (iVar2 == -1);
  return (iVar1 >> 0xb) << 0xb;
}


