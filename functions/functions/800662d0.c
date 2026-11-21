/* Function: FadeOutTransition */
/* Address: 800662d0 */

void FadeOutTransition(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0x100;
  do {
    FadeAudioVolume(iVar1);
    iVar1 = iVar1 + -8;
    ProcessRenderQueue();
    iVar2 = iVar2 + 1;
    VsyncWait();
  } while (iVar2 != 0x20);
  return;
}


