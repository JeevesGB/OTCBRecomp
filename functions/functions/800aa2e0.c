/* Function: _padSioRW */
/* Address: 800aa2e0 */

uint _padSioRW(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  
  puVar4 = PTR_I_STAT_800cba64;
  bVar3 = (byte)param_2;
  if (param_2 < 0) {
    *(undefined1 *)(param_1 + 0x44) = 0xff;
    *(undefined1 *)(param_1 + 0x45) = 1;
    **(byte **)(param_1 + 0x40) = ~bVar3;
    uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4);
    while ((uVar2 & 1) == 0) {
      uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4);
    }
    do {
      iVar5 = chkRC2wait();
    } while (iVar5 == 0);
    *PTR_JOY_MCD_DATA_800cba68 = ~bVar3;
    uVar6 = PADMAIN_OBJ_A78();
    return uVar6;
  }
  sVar7 = 0x88;
  if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(byte *)(param_1 + 0x44))) {
    sVar7 = 0x22;
  }
  DAT_800d12f8 = (uint)(ushort)TMR_SYSCLOCK_VAL;
  uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4);
  DAT_800d12fc = 0x1ae;
  while ((uVar2 & 2) == 0) {
    uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800cba68 + 4);
  }
  bVar1 = *PTR_JOY_MCD_DATA_800cba68;
  *(short *)(PTR_JOY_MCD_DATA_800cba68 + 0xe) = sVar7;
  uVar6 = *(uint *)puVar4;
  while( true ) {
    if ((uVar6 & 0x80) != 0) {
      *PTR_JOY_MCD_DATA_800cba68 = bVar3;
      puVar4 = PTR_JOY_MCD_DATA_800cba68;
      if (sVar7 == 0x22) {
        *(undefined4 *)PTR_I_STAT_800cba64 = 0xffffff7f;
        *(ushort *)(puVar4 + 10) = *(ushort *)(puVar4 + 10) | 0x10;
      }
      *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
      *(byte *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
      *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
      return (uint)bVar1;
    }
    iVar5 = chkRC2wait();
    if (iVar5 != 0) break;
    uVar6 = *(uint *)PTR_I_STAT_800cba64;
  }
  return 0xffffffec;
}


