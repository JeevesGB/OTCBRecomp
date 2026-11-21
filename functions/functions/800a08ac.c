/* Function: toupper */
/* Address: 800a08ac */

char toupper(char param_1)

{
  if (((&DAT_800ca44d)[(byte)param_1] & 2) != 0) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


