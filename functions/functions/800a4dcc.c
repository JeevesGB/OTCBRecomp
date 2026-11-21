/* Function: _card_status */
/* Address: 800a4dcc */

long _card_status(long drv)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}


