/* Function: SsUtChangePitch */
/* Address: 80092c8c */

short SsUtChangePitch(short param_1,short param_2,short param_3,short param_4,short param_5,
                     short param_6,short param_7)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  if ((ushort)param_1 < 0x18) {
    iVar3 = (int)param_1;
    if ((((&DAT_800ce798)[iVar3 * 0x1c] == param_2) && ((&DAT_800ce794)[iVar3 * 0x1c] == param_3))
       && ((&DAT_800ce78e)[iVar3 * 0x1c] == param_4)) {
      _SsVmVSetUp();
      DAT_800cefc4 = 0x21;
      DAT_800cefbc = *(undefined1 *)(&DAT_800ce796 + iVar3 * 0x1c);
      DAT_800cefc8 = param_1;
      uVar1 = note2pitch2(param_6,param_7);
      (&DAT_800cece4)[iVar3 * 8] = uVar1;
      (&DAT_800cecc0)[iVar3] = (&DAT_800cecc0)[iVar3] | 4;
      sVar2 = UT_CP_OBJ_110();
      return sVar2;
    }
  }
  return -1;
}


