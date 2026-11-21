/* Function: ResetCallback */
/* Address: 8009b1cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ResetCallback(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_800c56ec + 0xc))();
  return iVar1;
}


