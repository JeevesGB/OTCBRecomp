/* Function: FUN_80060c98 */
/* Address: 80060c98 */

void FUN_80060c98(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  char local_40 [8];
  undefined1 auStack_38 [24];
  
  FUN_80060ba0();
  if (DAT_800cda08 == 0) {
    iVar7 = 4 - DAT_800b5994;
    if (4 < iVar7) {
      iVar7 = 4;
    }
    iVar6 = 0;
    if (0 < iVar7) {
      psVar5 = &DAT_800b5b1c;
      do {
        local_40[1] = 0;
        iVar4 = iVar6 + DAT_800b5994;
        local_40[0] = (char)iVar4 + '1';
        SetActiveSpriteSlot(2,0);
        DrawText(local_40,0xffffff36,*psVar5 + 0xb);
        iVar4 = iVar4 * 0xc;
        if (((int)*(short *)(DAT_800cda24 + iVar4) & 0x8000U) == 0) {
          sVar1 = ((short *)(DAT_800cda24 + iVar4))[2];
          SetActiveSpriteSlot(1,0);
          iVar2 = FUN_800675f0();
          DrawText(*(undefined4 *)(sVar1 * 4 + iVar2),0xffffff59,*psVar5 + 2);
          LoadReplayData2(*(undefined4 *)(DAT_800cda24 + iVar4 + 8),auStack_38);
          SetActiveSpriteSlot(1,0);
          DrawText(auStack_38,0x2c,*psVar5 + 2);
          sVar1 = *(short *)(DAT_800cda24 + iVar4 + 6);
          SetActiveSpriteSlot(2,0);
          uVar3 = GetCarName((int)sVar1);
          DrawText(uVar3,0xffffff59,*psVar5 + 0x14);
        }
        iVar6 = iVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (iVar6 < iVar7);
    }
  }
  return;
}


