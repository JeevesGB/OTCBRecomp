/* Function: GetChampionshipLapData */
/* Address: 80067abc */

int GetChampionshipLapData(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_8006a010();
  if (iVar1 == 0) {
    iVar1 = -0x7ff466b8;
  }
  else {
    iVar1 = -0x7ff46448;
  }
  return iVar1 + param_1 * 8;
}


