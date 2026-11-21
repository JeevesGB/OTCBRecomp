/* Function: SsSetMute */
/* Address: 80091cbc */

void SsSetMute(char param_1)

{
  if (param_1 == '\0') {
    SpuSetMute(0);
  }
  else if (param_1 == '\x01') {
    SSSM_OBJ_2C(1);
    return;
  }
  return;
}


