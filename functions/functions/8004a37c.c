/* Function: FUN_8004a37c */
/* Address: 8004a37c */

void FUN_8004a37c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = (undefined2)(*(short *)(iVar2 + 0x58) * 0x116c + 0x800 >> 0xc);
  *(undefined2 *)(param_1 + 0x2ba) = uVar1;
  *(undefined2 *)(param_1 + 0x2b8) = uVar1;
  uVar1 = (undefined2)(*(short *)(iVar2 + 0x5a) * 0x116c + 0x800 >> 0xc);
  *(undefined2 *)(param_1 + 0x2be) = uVar1;
  *(undefined2 *)(param_1 + 700) = uVar1;
  *(short *)(param_1 + 0x2c0) = (short)(*(short *)(iVar2 + 0x5c) * 0x116c + 0x800 >> 0xc);
  *(short *)(param_1 + 0x2c2) = (short)(*(short *)(iVar2 + 0x5e) * 0x116c + 0x800 >> 0xc);
  FUN_80049670(param_1);
  FUN_80049720(param_1);
  return;
}


