/* Function: MemCardInit */
/* Address: 800a1a9c */

/* Possible INIT.OBJ/MemCardInit
   Possible SSINIT_H.OBJ/SsInitHot */

void MemCardInit(void)

{
  InitCARD();
  StartCARD();
  _bu_init();
  return;
}


