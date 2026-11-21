/* Function: FUN_80051f04 */
/* Address: 80051f04 */

void FUN_80051f04(int param_1,undefined2 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x34;
  iVar2 = ((int)*(short *)(&DAT_800cd072 + iVar3) + (int)(short)(&g_RenderFlag2)[param_1 * 0x1a] &
          3U) * 8 + iVar3;
  *(undefined2 *)(&g_TrackRenderContext1 + iVar2 + 0x10) = param_2;
  *(undefined4 *)(&g_TrackRenderContext1 + iVar2 + 0x14) = param_3;
  sVar1 = (&g_RenderFlag2)[param_1 * 0x1a];
  *(undefined2 *)(&DAT_800cd076 + iVar3) = 0;
  (&g_RenderFlag2)[param_1 * 0x1a] = sVar1 + 1;
  return;
}


