/* Function: _padSetActAlign */
/* Address: 800ab0e8 */

bool _padSetActAlign(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_800cba20)();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(code **)(param_1 + 0x14) = PADCMD_OBJ_924;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(code **)(param_1 + 0x18) = PADCMD_OBJ_940;
  }
  return iVar1 == 0;
}


