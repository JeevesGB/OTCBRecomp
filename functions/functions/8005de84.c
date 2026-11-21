/* Function: ClearVRAMRegion */
/* Address: 8005de84 */

void ClearVRAMRegion(short *param_1)

{
  short *psVar1;
  RECT *rect;
  
  rect = g_VRAMRectPtr;
  g_VRAMRectPtr->x = *param_1;
  g_VRAMRectPtr->y = param_1[1];
  g_VRAMRectPtr->w = param_1[2] >> 2;
  psVar1 = &g_VRAMRectPtr->h;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar1 = param_1[3];
  ClearImage(rect,'\0','\0','\0');
  return;
}


