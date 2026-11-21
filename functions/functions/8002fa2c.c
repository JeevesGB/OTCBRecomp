/* Function: FUN_8002fa2c */
/* Address: 8002fa2c */

int FUN_8002fa2c(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((int)param_1 >> 4) + 1;
  if ((int)g_TrackSegmentCount <= iVar2 * 0x10000 >> 0x10) {
    iVar2 = iVar2 - (g_TrackSegmentCount & 0xffff);
  }
  iVar1 = (int)*(short *)(((((int)param_1 >> 4) << 0x10) >> 0xf) + (&DAT_800cca50)[param_2]);
  return (iVar1 + ((int)((*(short *)(((iVar2 << 0x10) >> 0xf) + (&DAT_800cca50)[param_2]) - iVar1) *
                        (param_1 & 0xf)) >> 4)) * 0x1000;
}


