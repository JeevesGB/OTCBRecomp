/* Function: PadSetMainMode */
/* Address: 800a99c0 */

int PadSetMainMode(int socket,int offs,int lock)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_800cba18)();
  iVar2 = _padSetMainMode(uVar1,offs & 0xff,lock & 0xff);
  return iVar2;
}


