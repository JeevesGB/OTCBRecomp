/* Function: StopCDStream */
/* Address: 800a867c */

/* Possible C_003.OBJ/StUnSetRing */

void StopCDStream(void)

{
  InitGPU_Pre();
  if (g_CDMode == 1) {
    DsDataCallback((func *)0x0);
    DsReadyCallback((DslCB)0x0);
  }
  else {
    CdDataCallback((func *)0x0);
    CdReadyCallback((CdlCB)0x0);
  }
  *PTR_CDROM_REG0_800cb93c = 0;
  *PTR_CDROM_REG3_800cb948 = 0;
  InitGPU_Post();
  return;
}


