/* Function: FUN_800884c4 */
/* Address: 800884c4 */

void FUN_800884c4(ushort *param_1,int param_2,char *param_3,char *param_4,int param_5,uint param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  iVar8 = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  uVar1 = *(undefined1 *)(param_2 + 100);
  *param_1 = 0x8000;
  *(undefined1 *)((int)param_1 + 0x17) = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_2 + 0x62);
  pcVar5 = param_4;
  do {
    if (pcVar5[0x6e] == '\x02') {
      iVar6 = *(int *)(param_5 + 100) + iVar8 * 0x10;
      cVar2 = *(char *)(iVar6 + 0xd);
      uVar3 = *(undefined2 *)(iVar6 + 0xe);
      uVar4 = *(undefined2 *)(param_3 + 10);
      *(char *)(param_1 + 6) =
           (char)*(undefined2 *)(iVar6 + 10) +
           ((char)*(undefined2 *)(param_3 + 8) - (*(char *)(iVar6 + 9) + '\x01'));
      *(char *)((int)param_1 + 0xd) = (char)uVar3 + ((char)uVar4 - (cVar2 + '\x01'));
    }
    iVar8 = iVar8 + 1;
    pcVar5 = param_4 + iVar8;
  } while (iVar8 != 5);
  FUN_80087db4(param_1,param_2,param_4,param_5,param_6);
  *(char *)(param_1 + 1) = *(char *)(param_2 + 0x14) - param_3[4];
  *(char *)((int)param_1 + 5) = *(char *)(param_2 + 0x1a) - param_3[6];
  *(char *)((int)param_1 + 3) = *(char *)(param_2 + 0x16) - param_3[4];
  sVar7 = -1;
  *(char *)(param_1 + 3) = *(char *)(param_2 + 0x1c) - param_3[6];
  iVar6 = 0;
  *(char *)(param_1 + 2) = *(char *)(param_2 + 0x18) - param_3[4];
  *(char *)((int)param_1 + 7) = *(char *)(param_2 + 0x1e) - param_3[6];
  param_1[0xc] = *(ushort *)(param_3 + 0x10);
  iVar8 = 0;
  param_1[0xd] = *(ushort *)(param_3 + 0x12);
  do {
    if (param_4[iVar6 + 0x7d] == '\x02') {
      sVar7 = *(short *)(iVar8 + *(int *)(param_5 + 0x70) + 8);
    }
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0xc;
  } while (iVar6 != 5);
  iVar6 = 0;
  iVar8 = 0;
  do {
    if (param_4[iVar6 + 0x78] == '\x02') {
      sVar7 = *(short *)(iVar8 + *(int *)(param_5 + 0x6c) + 8);
    }
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0xc;
  } while (iVar6 != 5);
  iVar6 = 0;
  iVar8 = 0;
  do {
    if (param_4[iVar6 + 0x82] == '\x02') {
      sVar7 = *(short *)(iVar8 + *(int *)(param_5 + 0x74) + 8);
    }
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0xc;
  } while (iVar6 != 5);
  if (sVar7 == -1) {
    *(undefined1 *)((int)param_1 + 0x13) = *(undefined1 *)(param_2 + 0x6c);
  }
  else {
    *(char *)((int)param_1 + 0x13) = (char)sVar7;
  }
  iVar6 = -1;
  iVar8 = 0;
  *(char *)(param_1 + 5) = *(char *)(param_2 + 0x5c) + param_3[0xc];
  *(char *)((int)param_1 + 0xb) = *(char *)(param_2 + 0x5e) + param_3[0xe];
  pcVar5 = param_4;
  do {
    if (*pcVar5 == '\x02') {
      iVar6 = (int)*(short *)(param_2 + 0x6e) +
              (uint)*(byte *)(iVar8 * 0x10 + *(int *)(param_5 + 0x1c));
    }
    iVar8 = iVar8 + 1;
    pcVar5 = param_4 + iVar8;
  } while (iVar8 != 0xf);
  if (iVar6 == -1) {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x6e);
  }
  else {
    *(char *)(param_1 + 10) = (char)iVar6;
  }
  sVar7 = -1;
  iVar8 = 0;
  pcVar5 = param_4;
  do {
    if (pcVar5[100] == '\x02') {
      sVar7 = *(short *)(iVar8 * 0x10 + *(int *)(param_5 + 0x5c) + 0xc);
    }
    iVar8 = iVar8 + 1;
    pcVar5 = param_4 + iVar8;
  } while (iVar8 != 5);
  if (sVar7 == -1) {
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x6a);
  }
  else {
    *(char *)(param_1 + 9) = (char)sVar7;
  }
  iVar8 = 0;
  iVar6 = 0;
  param_1[0xe] = *(ushort *)(param_2 + 0x3c);
  do {
    if (param_4[iVar8 + 0x73] == '\x02') {
      param_1[0xe] = *(ushort *)(iVar6 + *(int *)(param_5 + 0x68) + 8);
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 0xc;
  } while (iVar8 != 5);
  sVar7 = -1;
  iVar8 = 0;
  *(char *)(param_1 + 4) = *(char *)(param_2 + 0x58) + *param_3;
  *(char *)((int)param_1 + 9) = *(char *)(param_2 + 0x5a) + param_3[2];
  pcVar5 = param_4;
  do {
    if (pcVar5[0x19] == '\x02') {
      sVar7 = *(short *)(iVar8 * 0x10 + *(int *)(param_5 + 0x28) + 0xc);
    }
    iVar8 = iVar8 + 1;
    pcVar5 = param_4 + iVar8;
  } while (iVar8 != 5);
  if (sVar7 == -1) {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  else {
    *(char *)(param_1 + 0xb) = (char)sVar7;
  }
  if (((param_6 & 0xff) == 0x16) && (param_4[0x61] == '\x02')) {
    *param_1 = *param_1 | 2;
  }
  return;
}


