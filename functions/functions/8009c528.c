/* Function: PATCHGTE_OBJ_DC */
/* Address: 8009c528 */

void PATCHGTE_OBJ_DC(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if (uVar1 != 3) {
    if (3 < uVar1) {
      if (uVar1 != 5) {
        SYS_OBJ_110();
        return;
      }
      goto SYS_OBJ_68;
    }
    if (uVar1 != 0) {
      SYS_OBJ_110();
      return;
    }
  }
  printf("ResetGraph:jtb=%08x,env=%08x\n",&PTR_s__Id__sys_c_v_1_140_1998_01_12_07_800ca124,
         &DAT_800ca16c);
SYS_OBJ_68:
  SYS_OBJ_2F08(&DAT_800ca16c,0,0x80);
  ResetCallback();
  GPU_cw((uint)PTR_PTR_800ca164 & 0xffffff);
  DAT_800ca16c = SYS_OBJ_2624(param_1);
  DAT_800ca16d = 1;
  DAT_800ca170 = *(undefined2 *)(&DAT_800ca1ec + (uint)DAT_800ca16c * 4);
  DAT_800ca172 = *(undefined2 *)(&DAT_800ca1f8 + (uint)DAT_800ca16c * 4);
  SYS_OBJ_2F08(&DAT_800ca17c,0xffffffff,0x5c);
  SYS_OBJ_2F08(&DAT_800ca1d8,0xffffffff,0x14);
  SYS_OBJ_160();
  return;
}


