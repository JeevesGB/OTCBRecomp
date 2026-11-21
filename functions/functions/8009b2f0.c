/* Function: RestartCallback */
/* Address: 8009b2f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RestartCallback(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_800c56ec + 0x18))();
  return iVar1;
}


