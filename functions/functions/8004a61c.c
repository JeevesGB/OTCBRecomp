/* Function: FUN_8004a61c */
/* Address: 8004a61c */

/* WARNING: Removing unreachable block (ram,0x8004a67c) */

void FUN_8004a61c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_8004ad6c((int)*(short *)(param_1 + 0x2e4),(int)*(short *)(param_1 + 0x202));
  if (((*(short *)(param_1 + 0x1f8) == 0) && (0 < *(short *)(param_1 + 0x210))) && (iVar2 < 6000)) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar2 = (iVar2 >> 2) + 0x1194;
  }
  *(short *)(param_1 + 0x214) = (short)iVar2;
  if (iVar2 + 2U < 0x1f6) {
    iVar2 = 500;
  }
  iVar3 = iVar2 - *(short *)(param_1 + 0x216);
  iVar4 = iVar3 >> 1;
  if (iVar3 < 0) {
    if (iVar3 < -399) {
      if (iVar4 < -399) {
        iVar3 = iVar4;
        if (iVar4 < -600) {
          iVar3 = -600;
        }
      }
      else {
        iVar3 = -400;
      }
    }
  }
  else if (399 < iVar3) {
    if (iVar4 < 400) {
      iVar3 = 400;
    }
    else {
      iVar3 = iVar4;
      if (600 < iVar4) {
        iVar3 = 600;
      }
    }
  }
  sVar1 = *(short *)(param_1 + 0x1fc);
  iVar3 = *(short *)(param_1 + 0x216) + iVar3;
  if (sVar1 == 1) {
    if ((iVar2 <= iVar3) && (*(undefined2 *)(param_1 + 0x1fc) = 0, *(short *)(param_1 + 0x218) != 0)
       ) {
      FUN_8004f264(param_1);
      PlayCarSFX(0x16,6,(int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a));
    }
  }
  else if (((1 < sVar1) && (sVar1 == 2)) && (iVar3 <= iVar2)) {
    *(undefined2 *)(param_1 + 0x1fc) = 0;
  }
  *(short *)(param_1 + 0x216) = (short)iVar3;
  return;
}


