/* Function: CdInit */
/* Address: 800a5b5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int CdInit(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = EVENT_OBJ_90();
    if (iVar1 == 1) {
      DAT_800cb5d4 = EVENT_OBJ_CC;
      DAT_800cb5d8 = EVENT_OBJ_F4;
      DAT_800cb53c = EVENT_OBJ_11C;
      DAT_800cb540 = 0;
      iVar2 = EVENT_OBJ_80();
      return iVar2;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  printf("CdInit: Init failed\n");
  return 0;
}


