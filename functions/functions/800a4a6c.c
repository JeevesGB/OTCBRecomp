/* Function: FORMAT_OBJ_0 */
/* Address: 800a4a6c */

undefined4 FORMAT_OBJ_0(long param_1,long param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte local_a0 [128];
  
  iVar8 = 0;
  bVar2 = 0;
  iVar7 = 0x7e;
  pbVar6 = param_3;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar7 = iVar7 + -1;
    bVar2 = bVar2 ^ bVar1;
  } while (-1 < iVar7);
  *pbVar6 = bVar2;
  do {
    if (7 < iVar8) {
      return 0;
    }
    _new_card();
    lVar3 = _card_write(param_1,param_2,param_3);
    if (lVar3 != 1) {
      return 0;
    }
    do {
      uVar4 = _card_status(param_1 >> 4);
    } while ((uVar4 & 1) == 0);
    bzero(local_a0,0x80);
    _new_card();
    lVar3 = _card_read(param_1,param_2,local_a0);
    if (lVar3 != 1) {
      printf("card read error\n");
      uVar5 = FORMAT_OBJ_F0(local_a0);
      return uVar5;
    }
    do {
      uVar4 = _card_status(param_1 >> 4);
      pbVar6 = local_a0;
    } while ((uVar4 & 1) == 0);
    bVar2 = 0;
    iVar7 = 0x7e;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar7 = iVar7 + -1;
      bVar2 = bVar2 ^ bVar1;
    } while (-1 < iVar7);
    iVar8 = iVar8 + 1;
  } while (param_3[0x7f] != bVar2);
  return 1;
}


