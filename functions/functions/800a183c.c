/* Function: InitHeap3 */
/* Address: 800a183c */

void InitHeap3(ulong *param_1,ulong param_2)

{
  if ((param_1 != (ulong *)0x0) && (param_2 != 0)) {
    for (; (param_2 & 7) != 0; param_2 = param_2 - 1) {
    }
    *(ulong **)((int)param_1 + (param_2 - 8)) = param_1;
    *(undefined4 *)((int)param_1 + (param_2 - 4)) = 0;
    *param_1 = (int)param_1 + (param_2 - 8);
    DAT_800ca52c = param_1;
    param_1[1] = (param_2 + 7 >> 3) - 1;
  }
  return;
}


