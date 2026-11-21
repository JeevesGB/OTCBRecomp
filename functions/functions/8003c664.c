/* Function: InitCarCollisionData */
/* Address: 8003c664 */

void InitCarCollisionData(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x214) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x3d0) = 0;
  *(undefined2 *)(param_1 + 0x3c2) = 0;
  uVar1 = puVar3[0x39];
  *(undefined2 *)(param_1 + 0x1fc) = 0;
  *(undefined2 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x1fe) = 0;
  *(ushort *)(param_1 + 0x158) = uVar1;
  puVar2[6] = 0;
  puVar2[4] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x18] = 0;
  if ((*puVar3 & 8) != 0) {
    *puVar2 = *puVar2 | 0x20;
  }
  if ((*puVar3 & 0x4000) != 0) {
    *(undefined2 *)(param_1 + 0x218) = 0xffff;
  }
  FUN_8004c35c(param_1);
  FUN_8004a478(param_1);
  FUN_80048168(param_1);
  FUN_8004937c(param_1);
  FUN_8004a37c(param_1);
  FUN_8004adbc(param_1);
  FUN_8003b118(param_1,(int)*(short *)(param_1 + 0x15c),*(int *)(param_1 + 100) >> 0xc);
  *(undefined2 *)(param_1 + 0x15e) = *(undefined2 *)(DAT_800ccb70 + 10);
  FUN_8003b994();
  return;
}


