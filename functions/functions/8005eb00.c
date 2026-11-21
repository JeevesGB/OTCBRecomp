/* Function: RenderMemoryCard */
/* Address: 8005eb00 */

void RenderMemoryCard(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  DAT_800cd9e8 = DAT_800cd9e8 + 7;
  GetMenuItemColor(&local_18,&local_14,DAT_800cd9e8,0xffffffff);
  (*(code *)(&PTR_LAB_800b57dc)[DAT_800cd9cc])(local_18,local_14);
  iVar2 = (int)DAT_800cd9ce;
  if (DAT_800cd9cc != iVar2) {
    iVar1 = AddRenderQueueItem(0x14,&LAB_8005f82c);
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(int *)(iVar1 + 0xc) = iVar2;
    DAT_800cd9ce = DAT_800cd9cc;
  }
  return;
}


