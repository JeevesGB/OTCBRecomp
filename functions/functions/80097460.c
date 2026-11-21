/* Function: SsVabFakeHead */
/* Address: 80097460 */

short SsVabFakeHead(uchar *param_1,short param_2,ulong param_3)

{
  short sVar1;
  
  sVar1 = _SsVabOpenHeadWithMode(param_1,(int)param_2,VS_VH_OBJ_68,param_3);
  return sVar1;
}


