/* Function: SetSoundTestTrack */
/* Address: 8005493c */

void SetSoundTestTrack(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  
  CdFlush();
  puVar3 = DAT_800cd47c;
  *(char *)((int)DAT_800cd47c + 0xf) = (char)param_1;
  iVar5 = param_1 * 4;
  puVar3[3] = (ushort)param_1 & 0xff;
  *(undefined1 *)(DAT_800cd47c + 6) = *(undefined1 *)(DAT_800cd360 + iVar5 + 4);
  *(undefined1 *)((int)DAT_800cd47c + 0xd) = *(undefined1 *)(DAT_800cd360 + iVar5 + 5);
  *(undefined1 *)(DAT_800cd47c + 7) = *(undefined1 *)(DAT_800cd360 + iVar5 + 6);
  iVar5 = CdPosToInt((CdlLOC *)(DAT_800cd360 + iVar5 + 8));
  puVar3 = DAT_800cd47c;
  *(int *)(DAT_800cd47c + 10) = iVar5;
  uVar1 = (int)puVar3 + 0xfU & 3;
  uVar4 = (uint)(puVar3 + 6) & 3;
  uVar4 = (*(int *)(((int)puVar3 + 0xfU) - uVar1) << (3 - uVar1) * 8 |
          param_2 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar4) * 8 |
          *(uint *)((int)(puVar3 + 6) - uVar4) >> uVar4 * 8;
  uVar1 = (int)puVar3 + 0x13U & 3;
  puVar2 = (uint *)(((int)puVar3 + 0x13U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar4 >> (3 - uVar1) * 8;
  uVar1 = (uint)(puVar3 + 8) & 3;
  puVar2 = (uint *)((int)(puVar3 + 8) - uVar1);
  *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | uVar4 << uVar1 * 8;
  puVar3[2] = 8;
  puVar3[1] = 0;
  *puVar3 = 0x8002;
  puVar3[5] = 0;
  return;
}


