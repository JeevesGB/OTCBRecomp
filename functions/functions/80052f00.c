/* Function: FUN_80052f00 */
/* Address: 80052f00 */

void FUN_80052f00(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  for (piVar3 = (int *)g_SoundEmitterList; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((g_SoundEmitterFlag == 0) && (iVar2 = 0, piVar4 = piVar3, 0 < *(short *)(piVar3 + 0xd))) {
      do {
        uVar1 = **(ushort **)((int)piVar4 + 0xc) & 7;
        if (uVar1 == 1) {
          FUN_80052678(piVar3,iVar2);
        }
        else if (uVar1 < 2) {
          if ((**(ushort **)((int)piVar4 + 0xc) & 7) == 0) {
            FUN_800524dc(piVar3,iVar2);
          }
        }
        else if (uVar1 == 2) {
          FUN_80052798(piVar3,iVar2);
        }
        else if (uVar1 == 3) {
          FUN_8005290c(piVar3,iVar2);
        }
        iVar2 = iVar2 + 1;
        piVar4 = (int *)((int)piVar4 + 4);
      } while (iVar2 < *(short *)(piVar3 + 0xd));
    }
  }
  return;
}


