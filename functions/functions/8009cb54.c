/* Function: LoadImage */
/* Address: 8009cb54 */

int LoadImage(RECT *rect,u_long *p)

{
  int iVar1;
  
  SYS_OBJ_3E4("LoadImage",rect);
  iVar1 = (**(code **)(PTR_PTR_800ca164 + 8))(*(undefined4 *)(PTR_PTR_800ca164 + 0x20),rect,8,p);
  return iVar1;
}


