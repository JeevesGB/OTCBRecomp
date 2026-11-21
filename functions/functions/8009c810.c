/* Function: SetDispMask */
/* Address: 8009c810 */

void SetDispMask(int mask)

{
  undefined4 uVar1;
  
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("SetDispMask(%d)...\n",mask);
  }
  if (mask == 0) {
    SYS_OBJ_2F08(&DAT_800ca1d8,0xffffffff,0x14);
  }
  uVar1 = 0x3000001;
  if (mask != 0) {
    uVar1 = 0x3000000;
  }
  (**(code **)(PTR_PTR_800ca164 + 0x10))(uVar1);
  return;
}


