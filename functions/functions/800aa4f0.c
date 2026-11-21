/* Function: _padSioRW2 */
/* Address: 800aa4f0 */

uint _padSioRW2(int param_1,undefined1 param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  
  uVar6 = 0x88;
  if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(byte *)(param_1 + 0x44))) {
    uVar6 = 0x22;
  }
  do {
  } while ((*(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4) & 2) == 0);
  setRC2wait(400);
  bVar1 = *PTR_JOY_MCD_DATA_800cba68;
  uVar3 = (uint)bVar1;
  if ((*(char *)(param_1 + 0x44) == '\0') && ((int)uVar3 >> 4 == 8)) {
    *(undefined2 *)(PTR_JOY_MCD_DATA_800cba68 + 0xe) = 0x22;
    uVar4 = *(uint *)PTR_I_STAT_800cba64;
    do {
      if ((uVar4 & 0x80) != 0) {
        if ((*(char *)(param_1 + 0xe8) != '\b') && (DAT_800cba48 == 2)) {
          setRC2wait(0x3c);
          do {
            iVar5 = chkRC2wait();
          } while (iVar5 == 0);
        }
        *PTR_JOY_MCD_DATA_800cba68 = param_2;
        puVar2 = PTR_JOY_MCD_DATA_800cba68;
        if ((DAT_800cba48 == 3) && (uVar3 == 0x80)) {
          *(undefined4 *)PTR_I_STAT_800cba64 = 0xffffff7f;
          *(ushort *)(puVar2 + 10) = *(ushort *)(puVar2 + 10) | 0x10;
        }
        *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
        if (*(char *)(param_1 + 0x44) != -1) {
          *(byte *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
        }
        *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
        return uVar3;
      }
      uVar4 = (uint)(ushort)TMR_SYSCLOCK_VAL;
      if (uVar4 < DAT_800d12f8) {
        if ((short)TMR_SYSCLOCK_MAX != 0) {
          uVar3 = PADMAIN_OBJ_BD8();
          return uVar3;
        }
        uVar4 = uVar4 + 0x10000;
      }
      if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
        if (DAT_800d12fc <= uVar4 - DAT_800d12f8 >> 3) {
          return 0xfffffffe;
        }
      }
      else if (DAT_800d12fc <= uVar4 - DAT_800d12f8) {
        uVar3 = PADMAIN_OBJ_CF0();
        return uVar3;
      }
      uVar4 = *(uint *)PTR_I_STAT_800cba64;
    } while( true );
  }
  *(undefined2 *)(PTR_JOY_MCD_DATA_800cba68 + 0xe) = uVar6;
  uVar3 = PADMAIN_OBJ_B50();
  return uVar3;
}


