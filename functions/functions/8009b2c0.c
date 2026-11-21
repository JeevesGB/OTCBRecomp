/* Function: StopCallback */
/* Address: 8009b2c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int StopCallback(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_800c56ec + 0x10))();
  return iVar1;
}


