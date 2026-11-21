/* Function: LIBMCRD_OBJ_1B3C */
/* Address: 800a3638 */

void LIBMCRD_OBJ_1B3C(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  uVar6 = DAT_80023689;
  uVar5 = DAT_80023688;
  uVar4 = DAT_80023684;
  uVar1 = param_2 + 3 & 3;
  puVar2 = (uint *)((param_2 + 3) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | DAT_80023684 >> (3 - uVar1) * 8;
  uVar1 = param_2 & 3;
  *(uint *)(param_2 - uVar1) =
       *(uint *)(param_2 - uVar1) & 0xffffffffU >> (4 - uVar1) * 8 | uVar4 << uVar1 * 8;
  *(undefined1 *)(param_2 + 4) = uVar5;
  *(undefined1 *)(param_2 + 5) = uVar6;
  iVar7 = param_1;
  if (param_1 < 0) {
    iVar7 = param_1 + 0xf;
  }
  cVar3 = (char)(iVar7 >> 4);
  *(char *)(param_2 + 2) = cVar3 + '0';
  *(char *)(param_2 + 3) = (char)param_1 + cVar3 * -0x10 + '0';
  return;
}


