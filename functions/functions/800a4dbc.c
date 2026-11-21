/* Function: _card_read */
/* Address: 800a4dbc */

long _card_read(long chan,long block,uchar *buf)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}


