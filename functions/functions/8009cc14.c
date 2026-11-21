/* Function: MoveImage */
/* Address: 8009cc14 */

int MoveImage(RECT *rect,int x,int y)

{
  int iVar1;
  
  SYS_OBJ_3E4("MoveImage",rect);
  iVar1 = -1;
  if (rect->w != 0) {
    if (rect->h == 0) {
      iVar1 = SYS_OBJ_788();
      return iVar1;
    }
    DAT_800ca210 = y << 0x10 | x & 0xffffU;
    DAT_800ca20c._0_2_ = rect->x;
    DAT_800ca20c._2_2_ = rect->y;
    DAT_800ca214._0_2_ = rect->w;
    DAT_800ca214._2_2_ = rect->h;
    iVar1 = (**(code **)(PTR_PTR_800ca164 + 8))
                      (*(undefined4 *)(PTR_PTR_800ca164 + 0x18),&DAT_800ca204,0x14,0);
  }
  return iVar1;
}


