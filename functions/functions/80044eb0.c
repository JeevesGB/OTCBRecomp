/* Function: FUN_80044eb0 */
/* Address: 80044eb0 */

void FUN_80044eb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &g_CarCarCollisionPairs;
  do {
    if (puVar1[1] == param_1) {
      *puVar1 = 0;
      *(undefined2 *)(puVar1[1] + 0x4a) = 1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 3);
  return;
}


