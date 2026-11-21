/* Function: _SsContMainVol */
/* Address: 8008fd3c */

void _SsContMainVol(short param_1,short param_2,uchar param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (&DAT_800cdee8)[param_1] + param_2 * 0xb0;
  bVar1 = *(byte *)(iVar4 + 0x17);
  iVar2 = iVar4 + (uint)bVar1;
  _SsVmSetVol((int)(short)(param_1 | param_2 << 8),(int)*(char *)(iVar4 + 0x26),
              *(undefined1 *)(iVar2 + 0x37),param_3,*(undefined1 *)(iVar2 + 0x27));
  *(ushort *)((uint)bVar1 * 2 + iVar4 + 0x60) = (ushort)param_3;
  uVar3 = _SsReadDeltaValue((int)param_1,(int)param_2);
  *(undefined4 *)(iVar4 + 0x90) = uVar3;
  return;
}


