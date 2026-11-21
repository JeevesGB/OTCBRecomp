/* Function: SetGTEClip */
/* Address: 8009c08c */

/* Possible REG12.OBJ/SetGeomOffset */

void SetGTEClip(int param_1,int param_2)

{
  gte_ldOFX(param_1 << 0x10);
  gte_ldOFY(param_2 << 0x10);
  return;
}


