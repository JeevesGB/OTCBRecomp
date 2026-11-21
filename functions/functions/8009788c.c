/* Function: SsVabTransBody */
/* Address: 8009788c */

short SsVabTransBody(uchar *param_1,short param_2)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  
  if ((ushort)param_2 < 0x11) {
    iVar3 = (int)param_2;
    if ((&DAT_800cefd0)[iVar3] == '\x02') {
      uVar2 = *(ulong *)(&DAT_800cf030 + iVar3 * 4);
      SpuSetTransferMode(0);
      uVar2 = SpuSetTransferStartAddr(uVar2);
      if (uVar2 != 0) {
        SpuRead(param_1,*(ulong *)(&DAT_800cefe8 + iVar3 * 4));
        (&DAT_800cefd0)[iVar3] = 1;
        sVar1 = VS_VTB_OBJ_A4();
        return sVar1;
      }
    }
  }
  FUN_8009a1fc(0);
  return -1;
}


