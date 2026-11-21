/* Function: tolower */
/* Address: 800a08e0 */

char tolower(char param_1)

{
  if (((&DAT_800ca44d)[(byte)param_1] & 1) != 0) {
    param_1 = param_1 + ' ';
  }
  return param_1;
}


