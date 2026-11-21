/* Function: IsIdleGPU */
/* Address: 8009fc00 */

int IsIdleGPU(int max_count)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = *(uint *)PTR_GPU_REG1_800ca43c;
  while( true ) {
    if ((uVar2 & 0x4000000) != 0) {
      return 0;
    }
    bVar1 = max_count < iVar3;
    iVar3 = iVar3 + 1;
    if (bVar1) break;
    uVar2 = *(uint *)PTR_GPU_REG1_800ca43c;
  }
  iVar3 = BREAK_OBJ_EC();
  return iVar3;
}


