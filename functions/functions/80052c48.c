/* Function: UpdateEngineSound */
/* Address: 80052c48 */

void UpdateEngineSound(void)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  for (piVar5 = (int *)g_SoundEmitterList; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    iVar6 = 0;
    iVar4 = 0;
    iVar3 = (int)*(short *)piVar5[2];
    puVar1 = (ushort *)((short *)piVar5[2] + 2);
    piVar2 = piVar5;
    if (0 < iVar3) {
      do {
        if (((*puVar1 & 0x7f0) == 0) || ((*puVar1 & 0x7f0 & piVar5[1]) != 0)) {
          *(ushort **)((int)piVar2 + 0xc) = puVar1;
          piVar2 = (int *)((int)piVar2 + 4);
          iVar6 = iVar6 + 1;
        }
        iVar4 = iVar4 + 1;
        puVar1 = puVar1 + *(short *)(&g_SoundEventSizeTable + (*puVar1 & 7) * 2);
      } while (iVar4 < iVar3);
    }
    *(short *)(piVar5 + 0xd) = (short)iVar6;
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        UpdateSoundEmitter(piVar5,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar6);
    }
    *(undefined2 *)((int)piVar5 + 0x4a) = 1;
    *(undefined2 *)(piVar5 + 0x13) = 0;
  }
  g_SoundEmitterFlag = 0;
  return;
}


