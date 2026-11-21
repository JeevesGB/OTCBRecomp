/* Function: UpdateCarGears */
/* Address: 8004127c */

void UpdateCarGears(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = param_1;
  do {
    if (((*(short *)(iVar1 + 0x364) != 0) && (*(short *)(iVar1 + 0x374) == 0)) &&
       (699 < *(short *)(iVar1 + 900))) {
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + *(short *)(iVar1 + 900);
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 2;
  } while (iVar3 < 4);
  if (1 < iVar4) {
    iVar5 = iVar2 / iVar4;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
  }
  iVar1 = rand();
  iVar2 = iVar5 + -700;
  if (iVar5 < 0x2ee) {
    iVar5 = 0;
  }
  else if (iVar5 < 0x708) {
    iVar5 = 0x708;
  }
  iVar3 = ((iVar5 >> 5) * (int)*(short *)(iVar4 * 2 + -0x7ff515f0) >> 7) *
          (int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a) >> 7;
  **(undefined2 **)(param_1 + 0x3c) = (short)iVar3;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  UpdateEngineRPMSound
            (1,(int)*(short *)(*(int *)(param_1 + 0x3c) + 2),
             ((iVar2 * 0x380) / 0xd44 + iVar1 % 0x96 + 0x1a00) * 0x10000 >> 0x10,(int)(short)iVar3);
  return;
}


