/* Function: CdIntstr */
/* Address: 800a5dbc */

char * CdIntstr(u_char intr)

{
  char *pcVar1;
  
  if (intr < 7) {
    pcVar1 = (char *)SYS_OBJ_13C();
    return pcVar1;
  }
  return "none";
}


