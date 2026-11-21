/* Function: DecDCTvlcBuild */
/* Address: 800a57ec */

void DecDCTvlcBuild(u_short *table)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar3 = 0;
  pbVar6 = &DAT_800ca71c;
  do {
    uVar2 = (uint)*pbVar6;
    pbVar7 = pbVar6 + 1;
    if (uVar2 < 0xf0) {
      if (iVar3 == 0) {
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar2 = uVar2 - 1;
          *(byte *)table = bVar1;
          table = (u_short *)((int)table + 1);
        } while (-1 < (int)uVar2);
        BUILD_OBJ_AC();
        return;
      }
      do {
        uVar2 = uVar2 - 1;
        *(undefined1 *)table = *(undefined1 *)((int)table - iVar3);
        table = (u_short *)((int)table + 1);
      } while (-1 < (int)uVar2);
      BUILD_OBJ_AC();
      return;
    }
    iVar3 = 0;
    if (uVar2 != 0xf0) {
      bVar1 = *pbVar7;
      pbVar7 = pbVar6 + 2;
      iVar3 = CONCAT11(*pbVar6,bVar1) - 0xf0ff;
    }
    iVar5 = 4;
    pbVar6 = pbVar7;
  } while (iVar3 != 0xf00);
  puVar4 = table + 4;
  do {
    iVar5 = iVar5 + 1;
    *puVar4 = *puVar4 ^ puVar4[-4];
    puVar4 = puVar4 + 1;
  } while (iVar5 < 0x8800);
  return;
}


