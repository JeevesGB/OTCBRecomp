/* Function: FUN_800447e8 */
/* Address: 800447e8 */

int FUN_800447e8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  switch(DAT_800ccea8) {
  case 0:
    break;
  case 1:
    goto switchD_80044818_caseD_1;
  default:
    goto switchD_80044818_caseD_2;
  case 3:
    goto switchD_80044818_caseD_3;
  case -1:
    DAT_800cceac = 0;
    DAT_800ccea8 = DAT_800ccea8 + 1;
  }
  if (DAT_800cceac < g_CollisionFlag4) {
    puVar2 = &g_CarObjectList;
  }
  else {
    DAT_800cceac = 0;
    DAT_800ccea8 = DAT_800ccea8 + 1;
switchD_80044818_caseD_1:
    if (g_CollisionFlag3 <= DAT_800cceac) {
      DAT_800cceac = 0;
      DAT_800ccea8 = DAT_800ccea8 + 1;
switchD_80044818_caseD_3:
      while (DAT_800cceac < g_CollisionFlag2) {
        piVar1 = &g_CollisionPairList + DAT_800cceac;
        DAT_800cceac = DAT_800cceac + 1;
        if (*(int *)(*piVar1 + 0x40) < 0) {
          return *piVar1;
        }
      }
      DAT_800ccea8 = DAT_800ccea8 + 1;
switchD_80044818_caseD_2:
      return 0;
    }
    puVar2 = &DAT_800ccca0;
  }
  piVar1 = puVar2 + DAT_800cceac;
  DAT_800cceac = DAT_800cceac + 1;
  return *piVar1;
}


