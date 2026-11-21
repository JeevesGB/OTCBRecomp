/* Function: _card_open */
/* Address: 800a3c0c */

/* Possible SSINIT_H.OBJ/SsInitHot */

void _card_open(void)

{
  InitCARD();
  StartCARD();
  _bu_init();
  return;
}


