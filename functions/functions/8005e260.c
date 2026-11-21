/* Function: FUN_8005e260 */
/* Address: 8005e260 */

void FUN_8005e260(void)

{
  switch(DAT_800cd760) {
  case 1:
    break;
  case 2:
    switch(DAT_800cd75c) {
    case 0:
    case 3:
      DAT_800cd758 = 0xb;
      DAT_800cd9c4 = 2;
      return;
    case 1:
      goto switchD_8005e408_caseD_1;
    default:
      DAT_800cd758 = 3;
      return;
    case 4:
      DAT_800cd758 = 2;
      return;
    }
  case 3:
    switch(DAT_800cd75c) {
    case 0:
      DAT_800cd758 = 0xd;
      return;
    case 1:
      goto switchD_8005e408_caseD_1;
    default:
      DAT_800cd758 = 4;
      return;
    }
  case 4:
    switch(DAT_800cd75c) {
    case 0:
      DAT_800cd758 = 0xe;
      return;
    case 1:
      goto switchD_8005e408_caseD_1;
    default:
      DAT_800cd758 = 5;
      return;
    }
  default:
    return;
  }
  if (DAT_800cd75c == 1) {
switchD_8005e408_caseD_1:
  }
  else if (DAT_800cd75c < 2) {
    if (DAT_800cd75c == 0) {
      if (DAT_800cd758 == 1) {
        DAT_800cd9c4 = 1;
        return;
      }
      return;
    }
  }
  else {
    if (DAT_800cd75c == 2) {
      DAT_800cd758 = 3;
      return;
    }
    if (DAT_800cd75c == 3) {
      DAT_800cd758 = 0;
      DAT_800cd9c4 = 1;
      return;
    }
  }
  DAT_800cd758 = 1;
  return;
}


