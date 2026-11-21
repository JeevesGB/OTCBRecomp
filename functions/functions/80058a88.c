/* Function: FUN_80058a88 */
/* Address: 80058a88 */

void FUN_80058a88(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_800a018c();
  DrawText(param_1,param_2 - iVar1 * *(short *)(g_ActiveSpritePtr + 0xc),param_3);
  return;
}


