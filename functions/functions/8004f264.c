/* Function: FUN_8004f264 */
/* Address: 8004f264 */

void FUN_8004f264(int param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  puVar1 = malloc3(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    iVar3 = iVar3 + 0x10;
    *(undefined2 *)(puVar1 + 3) = 0x8000;
    puVar1[2] = iVar3;
    *(undefined2 *)(puVar1 + 9) = 0;
    *puVar1 = g_ReplayRecordFlag;
    *(ushort *)(puVar1 + 4) = puVar2[0x3c];
    *(ushort *)((int)puVar1 + 0x12) = puVar2[0x3d];
    *(ushort *)(puVar1 + 5) = puVar2[0x3e];
    g_ReplayRecordFlag = puVar1;
    if (((*puVar2 & 1) != 0) && (puVar1 = malloc3(0x28), puVar1 != (undefined4 *)0x0)) {
      *(undefined2 *)(puVar1 + 3) = 0x8000;
      puVar1[2] = iVar3;
      *(undefined2 *)(puVar1 + 9) = 0;
      *puVar1 = g_ReplayRecordFlag;
      *(ushort *)(puVar1 + 4) = puVar2[0x3f];
      *(ushort *)((int)puVar1 + 0x12) = puVar2[0x40];
      g_ReplayRecordFlag = puVar1;
      *(ushort *)(puVar1 + 5) = puVar2[0x41];
    }
  }
  return;
}


