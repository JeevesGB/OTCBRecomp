/* Function: GetCarTextureData */
/* Address: 8005bcbc */

void GetCarTextureData(int param_1,uint *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 4);
  *param_2 = uVar3;
  iVar2 = param_1 + iVar2 + 8;
  if ((uVar3 & 8) == 0) {
    param_2[6] = 0;
  }
  else {
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 0xc);
    *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)(param_1 + 0xe);
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_1 + 0x10);
    uVar1 = *(undefined2 *)(param_1 + 0x12);
    param_2[6] = param_1 + 0x14;
    *(undefined2 *)((int)param_2 + 0x16) = uVar1;
  }
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar2 + 4);
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(iVar2 + 6);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(iVar2 + 10);
  if ((short)param_2[2] == 0) {
    *(undefined2 *)(param_2 + 2) = 0x100;
  }
  if (*(short *)((int)param_2 + 10) == 0) {
    *(undefined2 *)((int)param_2 + 10) = 0x100;
  }
  param_2[3] = iVar2 + 0xc;
  return;
}


