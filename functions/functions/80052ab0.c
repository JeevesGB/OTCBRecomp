/* Function: FUN_80052ab0 */
/* Address: 80052ab0 */

void FUN_80052ab0(void)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = (int *)g_SoundEmitterList;
  do {
    if (piVar10 == (int *)0x0) {
      return;
    }
    for (piVar7 = (int *)g_SoundEmitterList; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
      if ((*(short *)(piVar7 + 0xc) == *(short *)(piVar10 + 0xc)) &&
         (*(short *)((int)piVar7 + 0x46) == -1)) goto LAB_80052b34;
    }
    piVar7 = (int *)0x0;
LAB_80052b34:
    if (piVar7 == (int *)0x0) {
      piVar7 = piVar10;
      if ((int)piVar10 < 0) {
        piVar7 = (int *)(int)*(short *)(piVar10 + 0xc);
      }
      iVar9 = -1;
      piVar4 = (int *)GsGetWorkBase();
      LoadCDFile(piVar7,piVar4);
      iVar5 = piVar4[2];
      iVar8 = piVar4[1];
      iVar6 = *piVar4;
      MemAlloc(((int)piVar4 + iVar5) - (int)piVar4);
      do {
        sVar1 = SsVabOpenHead((uchar *)((int)piVar4 + iVar8),(short)iVar9);
        iVar9 = (int)sVar1;
      } while (iVar9 == -1);
      (&g_VabSlots)[g_VabCount] = iVar9;
      g_VabCount = g_VabCount + 1;
      do {
        sVar2 = SsVabTransBody((uchar *)((int)piVar4 + iVar5),sVar1);
      } while (sVar2 == -1);
      SsVabTransCompleted(1);
      if ((int)piVar10 < 0) {
        *(short *)((int)piVar10 + 0x32) = sVar1;
        piVar10[2] = (int)piVar4 + iVar6;
        *(undefined2 *)((int)piVar10 + 0x46) = 0xffff;
      }
    }
    else {
      *(undefined2 *)((int)piVar10 + 0x32) = *(undefined2 *)((int)piVar7 + 0x32);
      uVar3 = *(undefined4 *)((int)piVar7 + 8);
      *(undefined2 *)((int)piVar10 + 0x46) = 0xffff;
      piVar10[2] = uVar3;
    }
    piVar10 = (int *)*piVar10;
  } while( true );
}


