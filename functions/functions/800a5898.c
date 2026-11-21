/* Function: BUILD_OBJ_AC */
/* Address: 800a5898 */

void BUILD_OBJ_AC(int param_1,undefined4 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  int in_v1;
  ushort *puVar3;
  int iVar4;
  byte *pbVar5;
  int in_t0;
  int in_t1;
  uint in_t2;
  
  while( true ) {
    pbVar5 = param_4;
    iVar4 = 4;
    if (in_v1 == in_t1) {
      puVar3 = (ushort *)(param_1 + 8);
      do {
        iVar4 = iVar4 + 1;
        *puVar3 = *puVar3 ^ puVar3[-4];
        puVar3 = puVar3 + 1;
      } while (iVar4 < 0x8800);
      return;
    }
    uVar2 = (uint)*pbVar5;
    param_4 = pbVar5 + 1;
    if (uVar2 < 0xf0) break;
    in_v1 = 0;
    if (uVar2 != in_t2) {
      in_v1 = (uint)CONCAT11(*pbVar5,*param_4) + in_t0;
      param_4 = pbVar5 + 2;
    }
  }
  if (in_v1 != 0) {
    do {
      uVar2 = uVar2 - 1;
      *param_3 = param_3[-in_v1];
      param_3 = param_3 + 1;
    } while (-1 < (int)uVar2);
    BUILD_OBJ_AC();
    return;
  }
  do {
    bVar1 = *param_4;
    param_4 = param_4 + 1;
    uVar2 = uVar2 - 1;
    *param_3 = bVar1;
    param_3 = param_3 + 1;
  } while (-1 < (int)uVar2);
  BUILD_OBJ_AC();
  return;
}


