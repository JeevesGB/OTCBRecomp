/* Function: SsVabOpenHead */
/* Address: 8009738c */

short SsVabOpenHead(uchar *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = _SsVabOpenHeadWithMode(param_1,(int)param_2,VS_VH2_OBJ_34,0);
  return sVar1;
}


