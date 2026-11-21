/* Function: ResetGraph */
/* Address: 8009c52c */

int ResetGraph(int mode)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = mode & 7;
  if (uVar2 != 3) {
    if (3 < uVar2) {
      if (uVar2 != 5) {
        iVar1 = SYS_OBJ_110();
        return iVar1;
      }
      goto SYS_OBJ_68;
    }
    if (uVar2 != 0) {
      iVar1 = SYS_OBJ_110();
      return iVar1;
    }
  }
  printf("ResetGraph:jtb=%08x,env=%08x\n",&PTR_s__Id__sys_c_v_1_140_1998_01_12_07_800ca124,
         &DAT_800ca16c);
SYS_OBJ_68:
  SYS_OBJ_2F08(&DAT_800ca16c,0,0x80);
  ResetCallback();
  GPU_cw((uint)PTR_PTR_800ca164 & 0xffffff);
  DAT_800ca16c = SYS_OBJ_2624(mode);
  DAT_800ca16d = 1;
  DAT_800ca170 = *(undefined2 *)(&DAT_800ca1ec + (uint)DAT_800ca16c * 4);
  DAT_800ca172 = *(undefined2 *)(&DAT_800ca1f8 + (uint)DAT_800ca16c * 4);
  SYS_OBJ_2F08(&DAT_800ca17c,0xffffffff,0x5c);
  SYS_OBJ_2F08(&DAT_800ca1d8,0xffffffff,0x14);
  iVar1 = SYS_OBJ_160();
  return iVar1;
}


