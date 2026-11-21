/* Function: SetupDrawEnvs */
/* Address: 800551b8 */

void SetupDrawEnvs(short *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  DRAWENV *env;
  DRAWENV *env_00;
  
  env_00 = *(DRAWENV **)(param_1 + 0x16);
  env = *(DRAWENV **)(param_1 + 0x18);
  SetDefDispEnv((DISPENV *)(env_00 + 1),(int)param_1[1],(int)param_1[3],(int)param_1[4],
                (int)param_1[5]);
  SetDefDrawEnv(env_00,(int)*param_1,(int)param_1[2],(int)param_1[4],(int)param_1[5]);
  SetDefDispEnv((DISPENV *)(env + 1),(int)*param_1,(int)param_1[2],(int)param_1[4],(int)param_1[5]);
  SetDefDrawEnv(env,(int)param_1[1],(int)param_1[3],(int)param_1[4],(int)param_1[5]);
  env_00->ofs[0] = env_00->ofs[0] + (param_1[4] >> 1);
  env->ofs[0] = env->ofs[0] + (param_1[4] >> 1);
  env_00->ofs[1] = env_00->ofs[1] + (param_1[5] >> 1);
  sVar2 = param_1[5];
  sVar3 = env->ofs[1];
  env->dtd = '\x01';
  env->ofs[1] = sVar3 + (sVar2 >> 1);
  env_00->dtd = '\x01';
  env->dfe = '\x01';
  env_00->dfe = '\x01';
  bVar1 = *(byte *)(param_1 + 10);
  env->isbg = bVar1 & 1;
  env_00->isbg = bVar1 & 1;
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)&env[1].tw.w = bVar1 & 1;
  *(byte *)&env_00[1].tw.w = bVar1 & 1;
  return;
}


