/* Function: UpdateVSCamera */
/* Address: 80034330 */

void UpdateVSCamera(void)

{
  int iVar1;
  
  iVar1 = AddRenderQueueItem(0x18,&LAB_800345b4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0xd2;
  g_VSModeFlag = 0;
  return;
}


