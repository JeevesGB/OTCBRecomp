/* Function: SetGraphDebug */
/* Address: 8009c6a0 */

int SetGraphDebug(int level)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_800ca16e;
  DAT_800ca16e = (byte)level;
  if ((level & 0xffU) != 0) {
    (*(code *)PTR_printf_800ca168)
              ("SetGraphDebug:level:%d,type:%d reverse:%d\n",level & 0xff,DAT_800ca16c,DAT_800ca16f)
    ;
  }
  return uVar1;
}


