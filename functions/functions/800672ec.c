/* Function: GetGhostCarTable */
/* Address: 800672ec */

undefined * GetGhostCarTable(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 1) {
    puVar1 = &DAT_800b7d6c;
  }
  else if (param_1 < 2) {
    puVar1 = (undefined *)0x0;
    if (param_1 == 0) {
      puVar1 = &DAT_800b7d68;
    }
  }
  else {
    puVar1 = (undefined *)0x0;
    if (param_1 == 2) {
      puVar1 = &DAT_800b7d70;
    }
  }
  return puVar1;
}


