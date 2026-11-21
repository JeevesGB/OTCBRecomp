/* Function: FUN_8006867c */
/* Address: 8006867c */

int FUN_8006867c(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar4 = 0;
  iVar3 = 0;
  pcVar2 = param_2;
  do {
    if ((*pcVar2 == '\x02') && (*(char *)(iVar4 * 0x10 + *(int *)(param_1 + 0x1c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((pcVar2[0x32] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x3c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar4 != 0xf);
  iVar4 = 0;
  iVar3 = 0;
  iVar5 = 0;
  do {
    if ((param_2[0xf] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x20) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x14] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x24) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x19] == '\x02') && (*(char *)(iVar5 + *(int *)(param_1 + 0x28) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x1e] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x2c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x23] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x30) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x28] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x34) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x2d] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x38) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x41] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x40) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x46] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x44) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x4b] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x48) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x50] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x4c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x55] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x50) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x5a] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x54) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x5f] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x58) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[100] == '\x02') && (*(char *)(iVar5 + *(int *)(param_1 + 0x5c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x69] == '\x02') && (*(char *)(iVar4 * 8 + *(int *)(param_1 + 0x60) + 3) == '\x01')
       ) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x6e] == '\x02') && (*(char *)(iVar5 + *(int *)(param_1 + 100) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x73] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x68) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x78] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x6c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x7d] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x70) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x82] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x74) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x87] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x78) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    if ((param_2[0x8c] == '\x02') && (*(char *)(iVar3 + *(int *)(param_1 + 0x7c) + 3) == '\x01')) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 0xc;
    param_2 = param_2 + 1;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar4 != 5);
  return iVar1;
}


