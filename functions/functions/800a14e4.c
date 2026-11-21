/* Function: PUTS_OBJ_28 */
/* Address: 800a14e4 */

void PUTS_OBJ_28(void)

{
  char cVar1;
  char *unaff_s0;
  
  while( true ) {
    cVar1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    if (cVar1 == '\0') break;
    _putchar((int)cVar1);
  }
  _putchar_flash();
  return;
}


