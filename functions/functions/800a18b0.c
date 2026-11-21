/* Function: MALLOC3_OBJ_14 */
/* Address: 800a18b0 */

undefined4 MALLOC3_OBJ_14(uint param_1)

{
  uint in_v0;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  while (in_v0 != 0) {
    in_v0 = param_1 + 1 & 7;
    param_1 = param_1 + 1;
  }
  iVar4 = (param_1 + 7 >> 3) + 1;
  puVar3 = (undefined4 *)*DAT_800ca52c;
  iVar2 = puVar3[1];
  if (iVar4 <= iVar2) {
    if (iVar2 == iVar4) {
      *DAT_800ca52c = *puVar3;
      uVar1 = MALLOC3_OBJ_74();
      return uVar1;
    }
    puVar3[1] = iVar2 - iVar4;
    puVar3[(iVar2 - iVar4) * 2 + 1] = iVar4;
    uVar1 = MALLOC3_OBJ_A8();
    return uVar1;
  }
  if (puVar3 != DAT_800ca52c) {
    uVar1 = MALLOC3_OBJ_3C(*puVar3,iVar4,puVar3);
    return uVar1;
  }
  return 0;
}


