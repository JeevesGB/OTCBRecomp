/* Function: ClearVRAM */
/* Address: 80057d1c */

void ClearVRAM(u_char param_1,u_char param_2,u_char param_3)

{
  int iVar1;
  int iVar2;
  RECT local_28;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar2 + 0xf;
    }
    local_28.x = ((short)iVar2 + (short)(iVar1 >> 4) * -0x10) * 0x40;
    local_28.y = (short)((iVar1 >> 4) << 8);
    local_28.w = 0x40;
    local_28.h = 0x100;
    ClearImage2(&local_28,param_1,param_2,param_3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}


