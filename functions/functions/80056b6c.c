/* Function: AddTPagePrim */
/* Address: 80056b6c */

void AddTPagePrim(uint *param_1,int param_2,int param_3,int param_4)

{
  DR_TPAGE *p;
  
  p = g_VRAMRectPtr;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  SetDrawTPage(p,param_2,param_3,param_4);
                    /* Probable PsyQ macro: addPrim(). */
  p->tag = p->tag & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)p & 0xffffff;
  return;
}


