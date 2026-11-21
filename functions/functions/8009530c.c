/* Function: note2pitch */
/* Address: 8009530c */

ushort note2pitch(void)

{
  ushort uVar1;
  byte bVar2;
  
  bVar2 = DAT_800cefc1;
  if (0x7f < DAT_800cefc1) {
    bVar2 = 0x7f;
  }
  uVar1 = SsPitchFromNote((short)DAT_800cefb2,0,DAT_800cefc0,bVar2);
  return uVar1;
}


