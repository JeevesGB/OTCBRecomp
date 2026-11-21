/* Function: FUN_8005664c */
/* Address: 8005664c */

void FUN_8005664c(short *param_1,short *param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_800541e0((int)*param_1 - (int)*param_2,(int)param_1[1] - (int)param_2[1],
                       (int)param_1[2] - (int)param_2[2]);
  iVar2 = FUN_800541e0((int)*param_3 - (int)*param_4,(int)param_3[1] - (int)param_4[1],
                       (int)param_3[2] - (int)param_4[2]);
  iVar3 = FUN_800541e0((int)*param_1 - (int)*param_3,(int)param_1[1] - (int)param_3[1],
                       (int)param_1[2] - (int)param_3[2]);
  iVar4 = FUN_800541e0((int)*param_2 - (int)*param_4,(int)param_2[1] - (int)param_4[1],
                       (int)param_2[2] - (int)param_4[2]);
  FUN_8005430c(iVar1 + iVar2 >> 1,iVar3 + iVar4 >> 1);
  return;
}


