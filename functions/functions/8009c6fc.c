/* Function: SetGraphQueue */
/* Address: 8009c6fc */

byte SetGraphQueue(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_800ca16d;
  if (1 < DAT_800ca16e) {
    (*(code *)PTR_printf_800ca168)("SetGrapQue(%d)...\n",param_1);
  }
  if (param_1 != DAT_800ca16d) {
    (**(code **)(PTR_PTR_800ca164 + 0x34))(1);
    DAT_800ca16d = (byte)param_1;
    DMACallback(2,0);
  }
  return bVar1;
}


