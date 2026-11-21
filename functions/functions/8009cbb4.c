/* Function: StoreImage */
/* Address: 8009cbb4 */

int StoreImage(RECT *rect,u_long *p)

{
  int iVar1;
  
  SYS_OBJ_3E4("StoreImage",rect);
  iVar1 = (**(code **)(PTR_PTR_800ca164 + 8))(*(undefined4 *)(PTR_PTR_800ca164 + 0x1c),rect,8,p);
  return iVar1;
}


