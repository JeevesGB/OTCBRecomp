/* Function: InitHeapBlock */
/* Address: 8005d278 */

void InitHeapBlock(undefined4 *param_1,undefined4 param_2)

{
  g_Heap2Base = param_1;
  *param_1 = 0;
  param_1[1] = param_2;
  g_Heap2Used = 0;
  return;
}


