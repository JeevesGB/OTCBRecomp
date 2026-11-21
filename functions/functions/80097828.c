/* Function: VS_VH_OBJ_3FC */
/* Address: 80097828 */

void VS_VH_OBJ_3FC(int param_1,uint param_2,int *param_3,int param_4)

{
  int unaff_s0;
  short unaff_s2;
  int unaff_s3;
  
  while( true ) {
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    if (param_4 < (int)param_2) break;
    unaff_s0 = unaff_s0 + *param_3;
    if ((param_2 & 1) == 0) {
      *(short *)(((int)param_2 / 2) * 0x10 + unaff_s3 + 0xc) =
           (short)((uint)(param_1 + unaff_s0) >> 3);
    }
    else {
      *(short *)(((int)param_2 / 2) * 0x10 + unaff_s3 + 0xe) =
           (short)((uint)(param_1 + unaff_s0) >> 3);
    }
  }
  *(int *)(&DAT_800cefe8 + unaff_s2 * 4) = unaff_s0;
  (&DAT_800cefd0)[unaff_s2] = 2;
  return;
}


