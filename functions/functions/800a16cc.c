/* Function: SetRCnt */
/* Address: 800a16cc */

long SetRCnt(ulong param_1,ushort param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  
  puVar1 = PTR_TMR_DOTCLOCK_VAL_800ca510;
  uVar4 = param_1 & 0xffff;
  uVar3 = 0x48;
  if (2 < uVar4) {
    lVar2 = COUNTER_OBJ_94();
    return lVar2;
  }
  *(undefined2 *)(PTR_TMR_DOTCLOCK_VAL_800ca510 + uVar4 * 0x10 + 4) = 0;
  *(ushort *)(puVar1 + uVar4 * 0x10 + 8) = param_2;
  if (uVar4 < 2) {
    uVar3 = 0x48;
    if ((param_3 & 0x10U) != 0) {
      uVar3 = 0x49;
    }
    if ((param_3 & 1U) == 0) {
      lVar2 = COUNTER_OBJ_74();
      return lVar2;
    }
  }
  else if ((uVar4 == 2) && ((param_3 & 1U) == 0)) {
    uVar3 = 0x248;
  }
  if ((param_3 & 0x1000U) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  *(ushort *)(PTR_TMR_DOTCLOCK_VAL_800ca510 + uVar4 * 0x10 + 4) = uVar3;
  return 1;
}


