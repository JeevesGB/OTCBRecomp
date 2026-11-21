/* Function: DrawPrim */
/* Address: 8009ce40 */

void DrawPrim(void *p)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((int)p + 3);
  (**(code **)(PTR_PTR_800ca164 + 0x3c))(0);
  (**(code **)(PTR_PTR_800ca164 + 0x14))((int)p + 4,uVar1);
  return;
}


