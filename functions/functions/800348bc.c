/* Function: GetCarCollisionSegment */
/* Address: 800348bc */

void GetCarCollisionSegment(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_38 [5];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar3 = 0;
  piVar2 = local_38;
  do {
    iVar3 = iVar3 + 1;
    *piVar2 = *(int *)(param_1 + 0xf8) >> 0xc;
    piVar1 = (int *)(param_1 + 0xfc);
    param_1 = param_1 + 8;
    piVar2[1] = *piVar1 >> 0xc;
    piVar2 = piVar2 + 2;
  } while (iVar3 < 4);
  local_18 = local_38[0] + local_38[4] >> 1;
  local_14 = local_38[1] + local_24 >> 1;
  local_10 = local_38[2] + local_20 >> 1;
  local_c = local_38[3] + local_1c >> 1;
  FUN_80034608(local_38);
  return;
}


