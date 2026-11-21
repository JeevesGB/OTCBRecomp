/* Function: LoadReplayData2 */
/* Address: 8004db54 */

char * LoadReplayData2(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if (5999999 < param_1) {
    param_1 = 5999999;
  }
  iVar4 = (param_1 / 600000) % 10;
  cVar3 = (char)iVar4 + '0';
  if (iVar4 == 0) {
    cVar3 = ' ';
  }
  *param_2 = cVar3;
  param_2[9] = '\0';
  param_2[2] = '\'';
  param_2[5] = '\"';
  cVar1 = (char)(param_1 / 60000);
  cVar3 = (char)(param_1 / 10000);
  param_2[3] = cVar3 + cVar1 * -6 + '0';
  cVar2 = (char)(param_1 / 1000);
  param_2[4] = cVar2 + cVar3 * -10 + '0';
  cVar3 = (char)(param_1 / 100);
  param_2[6] = cVar3 + cVar2 * -10 + '0';
  cVar2 = (char)(param_1 / 10);
  param_2[7] = cVar2 + cVar3 * -10 + '0';
  param_2[8] = (char)param_1 + cVar2 * -10 + '0';
  param_2[1] = cVar1 + (char)((param_1 / 60000) / 10) * -10 + '0';
  return param_2;
}


