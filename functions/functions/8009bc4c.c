/* Function: SetVideoMode */
/* Address: 8009bc4c */

/* Possible VMODE.OBJ/SetVideoMode */

undefined4 SetVideoMode(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = g_VideoMode;
  g_VideoMode = param_1;
  return uVar1;
}


