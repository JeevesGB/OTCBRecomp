/* Function: FUN_80055938 */
/* Address: 80055938 */

void FUN_80055938(short *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_30;
  short sStack_2e;
  short local_2c;
  short sStack_2a;
  short local_28;
  short sStack_26;
  
  local_2c = (short)(&g_SinCosTable)[g_CameraAngleX._2_2_ & 0xfff];
  local_30 = (short)(&g_SinCosTable)[(ushort)g_CameraAngleX & 0xfff];
  iVar4 = (int)local_2c;
  sStack_2a = (short)((uint)(&g_SinCosTable)[g_CameraAngleX._2_2_ & 0xfff] >> 0x10);
  sStack_26 = (short)((uint)(&g_SinCosTable)[(ushort)g_CameraAngleY & 0xfff] >> 0x10);
  iVar6 = (int)sStack_26;
  iVar3 = (int)sStack_2a;
  local_28 = (short)(&g_SinCosTable)[(ushort)g_CameraAngleY & 0xfff];
  iVar5 = (int)local_28;
  iVar1 = local_30 * iVar4 >> 6;
  sStack_2e = (short)((uint)(&g_SinCosTable)[(ushort)g_CameraAngleX & 0xfff] >> 0x10);
  iVar2 = (int)sStack_2e;
  iVar7 = local_30 * iVar3 >> 6;
  GTE_VXY0 = (undefined2)
             ((((iVar3 * iVar6 >> 0xc) + (iVar1 * iVar5 >> 0x12)) * 0x10000 >> 0x10) *
              (int)param_1[2] >> 0xc);
  GTE_VZ0 = (undefined2)((int)(short)(iVar2 * iVar5 >> 0xc) * (int)param_1[2] >> 0xc);
  GTE_VXY1 = (undefined2)
             ((((iVar7 * iVar5 >> 0x12) - (iVar4 * iVar6 >> 0xc)) * 0x10000 >> 0x10) *
              (int)param_1[2] >> 0xc);
  GTE_VZ1 = (undefined2)
            ((((iVar1 * iVar6 >> 0x12) - (iVar3 * iVar5 >> 0xc)) * 0x10000 >> 0x10) *
             (int)param_1[3] >> 0xc);
  GTE_VXY2 = (undefined2)((int)(short)(iVar2 * iVar6 >> 0xc) * (int)param_1[3] >> 0xc);
  GTE_VZ2 = (undefined2)
            ((((iVar4 * iVar5 >> 0xc) + (iVar7 * iVar6 >> 0x12)) * 0x10000 >> 0x10) *
             (int)param_1[3] >> 0xc);
  GTE_RGB = (undefined2)((int)(short)(iVar2 * iVar4 >> 0xc) * (int)param_1[4] >> 0xc);
  GTE_OTZ = (undefined2)((int)-local_30 * (int)param_1[4] >> 0xc);
  GTE_IR0 = (undefined2)((int)(short)(iVar2 * iVar3 >> 0xc) * (int)param_1[4] >> 0xc);
  DAT_1f80003c = param_1[5] - *param_1;
  DAT_1f80003a = DAT_1f80003c + param_1[7];
  DAT_1f80003e = param_1[6] - param_1[1];
  DAT_1f800040 = DAT_1f80003e + param_1[8];
  iVar1 = (int)(short)(DAT_800cbb84 ^ 1);
                    /* Probable PsyQ macro: addPrim(). */
  *(uint *)(param_1 + iVar1 * 6 + 0x16) =
       *(uint *)(param_1 + iVar1 * 6 + 0x16) & 0xff000000 | *param_2 & 0xffffff;
  *param_2 = *param_2 & 0xff000000 | (uint)(param_1 + iVar1 * 6 + 0x16) & 0xffffff;
  *(uint *)(param_1 + iVar1 * 6 + 10) =
       *(uint *)(param_1 + iVar1 * 6 + 10) & 0xff000000 |
       (uint)(param_1 + iVar1 * 6 + 0x16) & 0xffffff;
  *param_2 = *param_2 & 0xff000000 | (uint)(param_1 + iVar1 * 6 + 10) & 0xffffff;
  return;
}


