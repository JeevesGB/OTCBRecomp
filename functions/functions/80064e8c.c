/* Function: FUN_80064e8c */
/* Address: 80064e8c */

void FUN_80064e8c(undefined4 param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7,short param_8,short param_9,byte *param_10,
                 byte *param_11,byte param_12,undefined4 param_13)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short local_40 [5];
  short local_36;
  short local_34;
  short local_32;
  short local_30 [5];
  short local_26;
  short local_24;
  short local_22;
  char local_20;
  char local_1f;
  char local_1e;
  short local_18 [8];
  
  psVar6 = local_40;
  local_40[0] = param_2;
  local_40[1] = param_3;
  local_40[2] = param_2 + param_4;
  local_40[3] = param_3;
  local_40[4] = param_2;
  local_34 = param_2 + param_4;
  local_36 = param_3 + param_5;
  local_32 = param_3 + param_5;
  local_30[1] = param_7;
  local_30[3] = param_7;
  local_30[0] = param_6;
  local_30[2] = param_6 + param_8;
  local_30[4] = param_6;
  local_26 = param_7 + param_9;
  local_24 = param_6 + param_8;
  local_22 = param_7 + param_9;
  uVar4 = (uint)param_12;
  local_20 = *param_10 + (char)((int)(((uint)*param_11 - (uint)*param_10) * uVar4) / 0xff);
  local_1f = param_10[1] + (char)((int)(((uint)param_11[1] - (uint)param_10[1]) * uVar4) / 0xff);
  psVar5 = local_30;
  local_1e = param_10[2] + (char)((int)(((uint)param_11[2] - (uint)param_10[2]) * uVar4) / 0xff);
  iVar7 = 0;
  do {
    local_18[iVar7 * 2] = *psVar6 + (short)((int)(((int)*psVar5 - (int)*psVar6) * uVar4) / 0xff);
    psVar1 = psVar5 + 1;
    psVar2 = psVar6 + 1;
    iVar8 = iVar7 + 1;
    psVar3 = psVar6 + 1;
    psVar6 = psVar6 + 2;
    psVar5 = psVar5 + 2;
    local_18[iVar7 * 2 + 1] = *psVar3 + (short)((int)(((int)*psVar1 - (int)*psVar2) * uVar4) / 0xff)
    ;
    iVar7 = iVar8;
  } while (iVar8 != 4);
  FUN_8006426c(param_1,local_18,&local_20,param_13);
  return;
}


