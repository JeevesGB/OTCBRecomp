/* Function: FUN_800857ac */
/* Address: 800857ac */

void FUN_800857ac(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_28 [8];
  uint local_20;
  uint local_1c;
  
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar5 = 0;
    iVar4 = iVar6;
    do {
      iVar5 = iVar5 + 1;
      auStack_28._0_4_ = *(uint *)((int)&DAT_800c3a54 + iVar4);
      local_20 = auStack_28._0_4_;
      uVar3 = *(uint *)((int)&DAT_800c3a58 + iVar4);
      local_1c = uVar3;
      puVar1 = auStack_28 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
           (uint)auStack_28._0_4_ >> (3 - uVar2) * 8;
      puVar1 = auStack_28 + 7;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar3 >> (3 - uVar2) * 8;
      auStack_28._4_4_ = uVar3;
      ClearImage((RECT *)auStack_28,'\0','\0','\0');
      iVar4 = iVar4 + 0xe;
    } while (iVar5 != 5);
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x46;
  } while (iVar7 != 2);
  return;
}


