/* Function: CdDataSync */
/* Address: 800a6298 */

/* Possible GS_106.OBJ/GsSetProjection
   Possible _OP_VDEL.OBJ/__builtin_vec_delete
   Possible _OP_VNEW.OBJ/__builtin_vec_new
   Possible SSNOFF.OBJ/SsSetNoiseOff
   Possible SSQUIT.OBJ/SsQuit */

int CdDataSync(int mode)

{
  int iVar1;
  
  iVar1 = CD_datasync();
  return iVar1;
}


