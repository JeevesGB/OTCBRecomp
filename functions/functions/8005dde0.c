/* Function: LoadPalette */
/* Address: 8005dde0 */

void LoadPalette(short *param_1,int param_2,int param_3,short *param_4)

{
  char cVar1;
  short sVar2;
  
  cVar1 = (char)*param_4;
  while (cVar1 != '\0') {
    sVar2 = *param_4;
    param_4 = param_4 + 1;
    FUN_8005d410(g_VRAMRectPtr,(int)sVar2,(int)param_1[4],(int)param_1[5],*param_1 + param_2,
                 param_1[1] + param_3);
    DrawSync(0);
    param_2 = param_2 + 4;
    cVar1 = (char)*param_4;
  }
  return;
}


