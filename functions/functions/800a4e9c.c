/* Function: DecDCTPutEnv */
/* Address: 800a4e9c */

DECDCTENV * DecDCTPutEnv(DECDCTENV *env)

{
  undefined4 uVar1;
  int iVar2;
  DECDCTENV *pDVar3;
  u_char *puVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_800ca5a0;
  iVar2 = 0xf;
  pDVar3 = env;
  do {
    puVar4 = pDVar3->iq_y;
    pDVar3 = (DECDCTENV *)(pDVar3->iq_y + 4);
    iVar2 = iVar2 + -1;
    *puVar5 = *(undefined4 *)puVar4;
    puVar5 = puVar5 + 1;
  } while (iVar2 != -1);
  puVar5 = &DAT_800ca5e0;
  puVar4 = env->iq_c;
  iVar2 = 0xf;
  do {
    uVar1 = *(undefined4 *)puVar4;
    puVar4 = puVar4 + 4;
    iVar2 = iVar2 + -1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (iVar2 != -1);
  LIBPRESS_OBJ_3B0(&DAT_800ca59c,0x20);
  LIBPRESS_OBJ_3B0(&DAT_800ca620,0x20);
  return env;
}


