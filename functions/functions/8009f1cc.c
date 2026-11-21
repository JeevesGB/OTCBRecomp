/* Function: MoveImage2 */
/* Address: 8009f1cc */

int MoveImage2(RECT *rect,int x,int y)

{
  int iVar1;
  
  SYS_OBJ_3E4("MoveImage",rect);
  iVar1 = VSync(-1);
  DAT_800ca2a8 = iVar1 + 0xf0;
  DAT_800ca2ac = 0;
  iVar1 = SYS_OBJ_2D24();
  return iVar1;
}


