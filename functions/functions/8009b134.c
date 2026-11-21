/* Function: VSYNC_OBJ_178 */
/* Address: 8009b134 */

void VSYNC_OBJ_178(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800c572c) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  puts("VSync: timeout\n");
  ChangeClearPAD(0);
  ChangeClearRCnt(3,0);
  VSYNC_OBJ_200();
  return;
}


