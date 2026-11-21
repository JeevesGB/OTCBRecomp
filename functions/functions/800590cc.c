/* Function: FUN_800590cc */
/* Address: 800590cc */

void FUN_800590cc(int param_1,int param_2,uint *param_3,uint *param_4)

{
  short *psVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  for (; param_3 < param_4; param_3 = (uint *)((int)param_3 + uVar2)) {
    uVar2 = *param_3;
    uVar4 = uVar2 & 0xffffff;
    if (0xffffff < uVar2) {
      if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      psVar1 = (short *)((uVar4 >> 0xc) * 4 + param_2);
      puVar3 = (uint *)(param_1 + (((uVar4 & 0xfff) >> ((int)psVar1[1] & 0x1fU)) + (int)*psVar1) * 4
                       );
      *param_3 = *puVar3 & 0xffffff | uVar2 & 0xff000000;
      uVar2 = ((uVar2 & 0xff000000) >> 0x16) + 4;
      *puVar3 = (uint)param_3 & 0xffffff;
    }
  }
  return;
}


